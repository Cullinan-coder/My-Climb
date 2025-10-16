document.addEventListener("DOMContentLoaded", function () {
    const buyButtons = document.querySelectorAll(".buy-button");

    buyButtons.forEach(button => {
        button.addEventListener("click", () => {
            alert("Ürün sepete eklendi (simülasyon).");
        });
    });

    const loginBtn = document.querySelector("#login-button");
    const logoutBtn = document.querySelector("#logout-button");

    if (loginBtn) {
        loginBtn.addEventListener("click", () => {
            window.location.href = "/login";
        });
    }

    if (logoutBtn) {
        logoutBtn.addEventListener("click", () => {
            window.location.href = "/logout";
        });
    }
});
