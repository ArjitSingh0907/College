document.addEventListener("DOMContentLoaded", () => {
    // 1. Populate Hero Content from data.js
    document.getElementById("hero-tagline").innerText = SITE_DATA.hero.tagline;
    document.getElementById("hero-title").innerText = SITE_DATA.hero.title;
    document.getElementById("hero-subtitle").innerText = SITE_DATA.hero.subtitle;
    document.getElementById("hero-date").innerText = SITE_DATA.hero.date;
    document.getElementById("hero-venue").innerText = SITE_DATA.hero.venue;

    // 2. Populate About Content
    document.getElementById("about-hackathon-text").innerText = SITE_DATA.about.hackathon;
    document.getElementById("about-motive-text").innerText = SITE_DATA.about.motive;

    // 3. Populate Verticals / Domains
    const domainsContainer = document.getElementById("domains-grid");
    SITE_DATA.verticals.forEach(domain => {
        const domainCard = document.createElement("div");
        domainCard.className = "domain-pill";
        domainCard.innerText = domain;
        domainsContainer.appendChild(domainCard);
    });

    // 4. Populate Timeline / Process Steps
    const timelineContainer = document.getElementById("timeline-wrapper");
    SITE_DATA.timeline.forEach(item => {
        const stepCard = document.createElement("div");
        stepCard.className = "glass-card timeline-step";
        stepCard.innerHTML = `
            <div class="step-num">${item.step}</div>
            <div>
                <h3 style="margin-bottom: 6px;">${item.title}</h3>
                <p style="color: var(--text-secondary); font-size: 0.95rem;">${item.desc}</p>
            </div>
        `;
        timelineContainer.appendChild(stepCard);
    });

    // 5. Populate Past Events / History
    const historyContainer = document.getElementById("history-grid");
    SITE_DATA.pastEvents.forEach(event => {
        const eventCard = document.createElement("div");
        eventCard.className = "glass-card";
        eventCard.innerHTML = `
            <h3 style="margin-bottom: 10px;">${event.title}</h3>
            <p style="color: var(--text-secondary); font-size: 0.9rem;">${event.desc}</p>
        `;
        historyContainer.appendChild(eventCard);
    });

    // 6. Scroll Reveal Observer Animation
    const observer = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.style.opacity = "1";
                entry.target.style.transform = "translateY(0)";
            }
        });
    }, { threshold: 0.1 });

    document.querySelectorAll(".glass-card, .domain-pill").forEach(el => {
        el.style.opacity = "0";
        el.style.transform = "translateY(20px)";
        el.style.transition = "all 0.6s cubic-bezier(0.16, 1, 0.3, 1)";
        observer.observe(el);
    });
});