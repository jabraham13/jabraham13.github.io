/* 
    Author     : Julie Abraham
*/

function loadIndexPage() {
    $("#about").click(function(){
        $(".active").removeClass("active");
        $("#about").addClass("active");
        $("#main").load("about.html");
    });
    $("#cv").click(function(){
        $(".active").removeClass("active");
        $("#cv").addClass("active");
        $("#main").load("cv.html");
    });
        $("#contact").click(function(){
        $(".active").removeClass("active");
        $("#contact").addClass("active");
        $("#main").load("contact.html");
    });
}
