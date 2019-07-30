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
        window.location = workLinks[Math.floor(Math.random() * 2)];
    });
    $("#play").click(function () {
        var playLinks = new Array();
        playLinks[0] = "avatar.html";
        playLinks[1] = "pictures.html";
        window.location = playLinks[Math.floor(Math.random() * 2)];
    });
}

function loadStylePage() {
    $("#book").load("files/205-h.html");
    $("#btn-small").click(function () {
        $("#btnGroupSize .active").removeClass("active");
        $("#btn-small").addClass("active").blur();
        $("#book").css({'font-size': '50%'});
    });
    $("#btn-default").click(function () {
        $("#btnGroupSize .active").removeClass("active");
        $("#btn-default").addClass("active").blur();
        $("#book").css({'font-size': '100%'});
    });
    $("#btn-large").click(function () {
        $("#btnGroupSize .active").removeClass("active");
        $("#btn-large").addClass("active").blur();
        $("#book").css({'font-size': '150%'});
    });
    $("#font-original").click(function () {
        $("#btnGroupFamily .active").removeClass("active");
        $("#font-original").addClass("active").blur();
        $("#book").css({'font-family': 'Amatic SC'});
    });
    $("#font-serif").click(function () {
        $("#btnGroupFamily .active").removeClass("active");
        $("#font-serif").addClass("active").blur();
        $("#book").css({'font-family': 'serif'});
    });
    $("#font-sans").click(function () {
        $("#btnGroupFamily .active").removeClass("active");
        $("#font-sans").addClass("active").blur();
        $("#book").css({'font-family': 'sans-serif'});
    });
    $("#theme-original").click(function () {
        $("#btnGroupTheme .active").removeClass("active");
        $("#theme-original").addClass("active");
        var fileref = document.createElement("link");
        fileref.setAttribute("rel", "stylesheet");
        fileref.setAttribute("type", "text/css");
        fileref.setAttribute("href", "css/original.css");
        $("head").append(fileref);
    });
    $("#theme-dark").click(function () {
        $("#btnGroupTheme .active").removeClass("active");
        $("#theme-dark").addClass("active");
        var fileref = document.createElement("link");
        fileref.setAttribute("rel", "stylesheet");
        fileref.setAttribute("type", "text/css");
        fileref.setAttribute("href", "css/dark.css");
        $("head").append(fileref);
    });
    $("#theme-light").click(function () {
        $("#btnGroupTheme .active").removeClass("active");
        $("#theme-light").addClass("active");
        var fileref = document.createElement("link");
        fileref.setAttribute("rel", "stylesheet");
        fileref.setAttribute("type", "text/css");
        fileref.setAttribute("href", "css/light.css");
        $("head").append(fileref);
    });
}