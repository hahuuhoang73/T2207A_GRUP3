var t=1;
var x=0;
function tongcong(){
    var cong=document.getElementById("cong");
    cong.innerText=t;
    t++;
}

function tongcong1() {
    if (x < 6) {
        var cong = document.getElementById("cong1");
        cong.innerText = x;
        x++;
    }
}
function tongcong2() {
    if (x >0){
        var cong1 = document.getElementById("cong1");
        cong1.innerText = x-1;
        x--;
    }
}




let slideIndex = 1;
showSlides(slideIndex);

function plusSlides(n) {
    showSlides(slideIndex += n);
}

function currentSlide(n) {
    showSlides(slideIndex = n);
}

function showSlides(n) {
    let i;
    let slides = document.getElementsByClassName("mySlides");
    let dots = document.getElementsByClassName("dot");
    if (n > slides.length) {slideIndex = 1}
    if (n < 1) {slideIndex = slides.length}
    for (i = 0; i < slides.length; i++) {
        slides[i].style.display = "none";
    }
    for (i = 0; i < dots.length; i++) {
        dots[i].className = dots[i].className.replace(" active", "");
    }
    slides[slideIndex-1].style.display = "block";
    dots[slideIndex-1].className += " active";
}
