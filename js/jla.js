/* 
 Author     : Julie Abraham
 */

function loadIndexPage() {
    $("#about").click(function () {
        $(".active").removeClass("active");
        $("#about").addClass("active");
        $("#main").load("about.html");
    });
    $("#cv").click(function () {
        $(".active").removeClass("active");
        $("#cv").addClass("active");
        $("#main").load("cv.html");
    });
    $("#contact").click(function () {
        $(".active").removeClass("active");
        $("#contact").addClass("active");
        $("#main").load("contact.html");
    });
}

function loadPortfolioPage() {
    $("#work").click(function () {
        var workLinks = new Array();
        workLinks[0] = "style.html";
        workLinks[1] = "cpp.html";
        window.location = workLinks[Math.floor(Math.random() * 2)]
    });
    $("#play").click(function () {
        var playLinks = new Array();
        playLinks[0] = "avatar.html";
        playLinks[1] = "pictures.html";
        window.location = playLinks[Math.floor(Math.random() * 2)]
    });
}
