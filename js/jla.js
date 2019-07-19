/* 
    Author     : Julie Abraham
*/

function loadIndexPage() {
    $("#about").click(function(){
        $("#main").load("about.html");
    });
    $("#contact").click(function(){
        $("#main").load("contact.html");
    });
}