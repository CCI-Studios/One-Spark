(function($) {
	$(function(){
		$("#menu-button").click(function(){
			var $menu = $("#block-menu-block-2");
			if ($menu.css("display") == "none")
			{
				$menu.slideDown();
				$(this).addClass("open");
			}
			else
			{
				$menu.slideUp();
				$(this).removeClass("open");
			}

			return false;
		});
	});
}(jQuery));
