document.addEventListener("DOMContentLoaded", () => {

    // 1. Populate Data
    document.getElementById("hero-tagline").innerText = SITE_DATA.hero.tagline;
    document.getElementById("hero-title").innerText = SITE_DATA.hero.title;
    document.getElementById("hero-subtitle").innerText = SITE_DATA.hero.subtitle;
    document.getElementById("hero-date").innerText = SITE_DATA.hero.date;
    document.getElementById("hero-venue").innerText = SITE_DATA.hero.venue;

    document.getElementById("about-hackathon-text").innerText = SITE_DATA.about.hackathon;
    document.getElementById("about-motive-text").innerText = SITE_DATA.about.motive;

    const domainsContainer = document.getElementById("domains-grid");
    SITE_DATA.verticals.forEach((domain, idx) => {
        const domainCard = document.createElement("div");
        domainCard.className = "domain-pill scroll-reveal";
        domainCard.style.transitionDelay = `${idx * 0.06}s`;
        domainCard.innerText = domain;
        domainsContainer.appendChild(domainCard);
    });

    // Timeline Section: Clean & Static (No tilt-card class)
    const timelineContainer = document.getElementById("timeline-wrapper");
    SITE_DATA.timeline.forEach((item, idx) => {
        const stepCard = document.createElement("div");
        stepCard.className = "glass-card timeline-step scroll-reveal";
        stepCard.style.transitionDelay = `${idx * 0.08}s`;
        stepCard.innerHTML = `
            <div class="step-num">${item.step}</div>
            <div>
                <h3 style="margin-bottom: 8px;">${item.title}</h3>
                <p style="color: var(--text-secondary); font-size: 0.98rem;">${item.desc}</p>
            </div>
        `;
        timelineContainer.appendChild(stepCard);
    });

    const historyContainer = document.getElementById("history-grid");
    SITE_DATA.pastEvents.forEach((event, idx) => {
        const eventCard = document.createElement("div");
        eventCard.className = "glass-card tilt-card scroll-reveal";
        eventCard.style.transitionDelay = `${idx * 0.1}s`;
        eventCard.innerHTML = `
            <h3 style="margin-bottom: 12px;">${event.title}</h3>
            <p style="color: var(--text-secondary); font-size: 0.95rem;">${event.desc}</p>
        `;
        historyContainer.appendChild(eventCard);
    });

    // 2. Interactive Star Cursor with Lerp Physics
    const cursor = document.getElementById("star-cursor");
    let mouseX = window.innerWidth / 2;
    let mouseY = window.innerHeight / 2;
    let cursorX = mouseX;
    let cursorY = mouseY;

    window.addEventListener("mousemove", (e) => {
        mouseX = e.clientX;
        mouseY = e.clientY;
    });

    function renderCursor() {
        cursorX += (mouseX - cursorX) * 0.18;
        cursorY += (mouseY - cursorY) * 0.18;
        cursor.style.left = `${cursorX}px`;
        cursor.style.top = `${cursorY}px`;
        requestAnimationFrame(renderCursor);
    }
    renderCursor();

    const hoverTargets = document.querySelectorAll("a, button, .glass-card, .domain-pill");
    hoverTargets.forEach((target) => {
        target.addEventListener("mouseenter", () => cursor.classList.add("active"));
        target.addEventListener("mouseleave", () => cursor.classList.remove("active"));
    });

    // 3. Live White Starry Celestial Canvas
    const canvas = document.getElementById("starfield-canvas");
    const ctx = canvas.getContext("2d");
    let stars = [];

    function resizeCanvas() {
        canvas.width = window.innerWidth;
        canvas.height = window.innerHeight;
        initStars();
    }

    function initStars() {
        stars = [];
        const starCount = Math.floor((canvas.width * canvas.height) / 3000);
        for (let i = 0; i < starCount; i++) {
            stars.push({
                x: Math.random() * canvas.width,
                y: Math.random() * canvas.height,
                radius: Math.random() * 1.5 + 0.3,
                alpha: Math.random(),
                twinkleSpeed: Math.random() * 0.015 + 0.005
            });
        }
    }

    function drawStarfield() {
        ctx.clearRect(0, 0, canvas.width, canvas.height);
        stars.forEach((star) => {
            star.alpha += star.twinkleSpeed;
            if (star.alpha > 1 || star.alpha < 0.2) {
                star.twinkleSpeed = -star.twinkleSpeed;
            }
            ctx.beginPath();
            ctx.arc(star.x, star.y, star.radius, 0, Math.PI * 2);
            ctx.fillStyle = `rgba(255, 255, 255, ${Math.abs(star.alpha)})`;
            ctx.shadowBlur = star.radius > 1.2 ? 8 : 0;
            ctx.shadowColor = "#ffffff";
            ctx.fill();
        });
        requestAnimationFrame(drawStarfield);
    }

    window.addEventListener("resize", resizeCanvas);
    resizeCanvas();
    drawStarfield();

    // 4. Progressive Scroll Reveal Observer
    const revealObserver = new IntersectionObserver((entries) => {
        entries.forEach((entry) => {
            if (entry.isIntersecting) {
                entry.target.classList.add("visible");
            }
        });
    }, { threshold: 0.12 });

    document.querySelectorAll(".scroll-reveal").forEach((el) => {
        revealObserver.observe(el);
    });

    // 5. 3D Tilt Effect applied ONLY to elements explicitly assigned .tilt-card
    document.querySelectorAll(".tilt-card").forEach((card) => {
        card.addEventListener("mousemove", (e) => {
            const rect = card.getBoundingClientRect();
            const x = e.clientX - rect.left - rect.width / 2;
            const y = e.clientY - rect.top - rect.height / 2;
            card.style.transform = `perspective(1000px) rotateX(${-y / 25}deg) rotateY(${x / 25}deg) translateY(-6px)`;
        });

        card.addEventListener("mouseleave", () => {
            card.style.transform = `perspective(1000px) rotateX(0deg) rotateY(0deg) translateY(0px)`;
        });
    });
});