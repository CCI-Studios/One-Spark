var carouselTimer;

(function($) {
	$(function(){
		$(".view-carousel .views-row").each(function(i){
			var background = $(this).find(".views-field-field-background-image img").attr("src");

			$("<li><a href='#' onclick='setActive("+i+");stopCarousel();return false;' class='star star-"+i+"'>&nbsp;</a></li>").appendTo("#carousel-stars");
		});

		var row_first = $(".view-carousel .views-row-first");
		row_first.css("padding-top", (463-row_first.height())/2+"px");

		setActive(0);

		$("#bg-arrows .next").click(nextCarouselSlide);
		$("#bg-arrows .previous").click(previousCarouselSlide);

		carouselTimer = setInterval(nextCarouselSlide, 5000);
	});
}(jQuery));


function setCarouselBG(url)
{
	jQuery("#main-wrapper > .bg").addClass("stale").stop();
	jQuery("<img src='"+url+"' alt='Background Image' class='bg' />").hide().appendTo("#main-wrapper").fadeIn(function(){
		jQuery("#main-wrapper > .bg.stale").remove();
	});
}

function setCarouselColor(color)
{
	if (!color)
		color = "";
	jQuery("#main-wrapper").animate({backgroundColor:color}, 400);
}

function setActive(index)
{
	var old_row = jQuery(".view-carousel .views-row.active");
	var new_row = jQuery(".view-carousel .views-row-"+(index+1));
	if (!new_row.length) return;
	//old_row.css("z-index",0).removeClass("active").fadeOut(600, "linear");
	//new_row.css("z-index",1).addClass("active").fadeIn();
	old_row.removeClass("active");
	new_row.addClass("active");
	var url = new_row.find(".views-field-field-background-image img").attr("src");
	setCarouselBG(url);
	var color = new_row.find(".views-field-field-background-colour").text();
	setCarouselColor(color);

	jQuery(".view-carousel #carousel-stars .star").removeClass("active");
	jQuery(".view-carousel #carousel-stars .star-"+index).addClass("active");
}

function getActiveIndex()
{
	return jQuery("#carousel-stars li a.active").index("#carousel-stars li a");
}

function getNumOfSlides()
{
	return jQuery(".view-carousel .views-row").length;
}

function nextCarouselSlide()
{
	var i = getActiveIndex();
	i++;
	if (i >= getNumOfSlides())
		i = 0;
	setActive(i);
}

function previousCarouselSlide()
{
	var i = getActiveIndex();
	i--;
	if (i < 0)
		i = getNumOfSlides()-1;
	setActive(i);
}

function stopCarousel()
{
	clearInterval(carouselTimer);
}
