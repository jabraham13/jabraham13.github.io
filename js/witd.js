
function loadIndexPage() {
    $("#home-button").click(function(){$("#main").load("home.html");});
    $("#about-button").click(function(){$("#main").load("about.html");});
    $("#work-button").click(function(){$("#main").load("work.html");});
    $("#fun-button").click(function(){$("#main").load("fun.html");});
    $("#code-button").click(function(){$("#main").load("code.html");});
}
