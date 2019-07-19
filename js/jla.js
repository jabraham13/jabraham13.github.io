/* 
    Author     : Julie Abraham
*/

function loadIndexPage() {
    $("#about").click(function(){
        $(".active").removeClass("active");
        $("#about").addClass("active");
        $("#main").load("about.html");
    });
    $("#contact").click(function(){
        $(".active").removeClass("active");
        $("#contact").addClass("active");
        $("#main").load("contact.html");
    });
}
