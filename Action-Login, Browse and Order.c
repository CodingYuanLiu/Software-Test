Action()
{
	// Actions after login
	
	web_url("35.221.252.58_2", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100", ENDITEM, 
		"Url=/css/font-awesome.css", ENDITEM, 
		"Url=/css/bootstrap.min.css", ENDITEM, 
		"Url=/css/animate.min.css", ENDITEM, 
		"Url=/css/owl.carousel.css", ENDITEM, 
		"Url=/css/owl.theme.css", ENDITEM, 
		"Url=/css/style.blue.css", ENDITEM, 
		"Url=/css/custom.css", ENDITEM, 
		"Url=/js/respond.min.js", ENDITEM, 
		"Url=/img/weave3.jpg", ENDITEM, 
		"Url=/js/jquery-1.11.0.min.js", ENDITEM, 
		"Url=/img/weave1.jpg", ENDITEM, 
		"Url=/img/weave2.jpg", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=/js/bootstrap.min.js", ENDITEM, 
		"Url=/js/js.cookie.js", ENDITEM, 
		"Url=/js/client.js", ENDITEM, 
		"Url=/js/jquery.cookie.js", ENDITEM, 
		"Url=/js/waypoints.min.js", ENDITEM, 
		"Url=/js/modernizr.js", ENDITEM, 
		"Url=/js/bootstrap-hover-dropdown.js", ENDITEM, 
		"Url=/js/owl.carousel.min.js", ENDITEM, 
		"Url=/js/front.js", ENDITEM, 
		"Url=/js/jquery.query-object.js", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_2", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_2", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_2", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_2", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PytR2uTncpiaAN1XlFqOF5lgfxtMqJt6", 
		"URL=http://35.221.252.58/customers/{sessionId}", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(9);

	web_url("bootstrap.min.css.map", 
		"URL=http://35.221.252.58/css/bootstrap.min.css.map", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		LAST);

	web_url("basket.html", 
		"URL=http://35.221.252.58/basket.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_3", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	web_url("address", 
		"URL=http://35.221.252.58/address", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_3", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_3", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_3", 
		"URL=http://35.221.252.58/catalogue?size=3", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		LAST);

	web_url("card", 
		"URL=http://35.221.252.58/card", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(4);

	web_url("detail.html", 
		"URL=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_4", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_4", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_4", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t143.inf", 
		"Mode=HTML", 
		LAST);

	web_url("03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"URL=http://35.221.252.58/catalogue/03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_4", 
		"URL=http://35.221.252.58/catalogue?sort=id&size=3&tags=magic", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/img/product1.jpg", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		LAST);

	lr_start_transaction("tx_add_cart");

		web_custom_request("cart_2", 
		"URL=http://35.221.252.58/cart", 
		"Method=POST", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"id\":\"03fef6ac-1896-4ce8-bd69-b798f85c6e0b\"}", 
		LAST);

	lr_end_transaction("tx_add_cart", LR_AUTO);


	web_revert_auto_header("X-Requested-With");

	web_url("detail.html_2", 
		"URL=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/font-awesome.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/bootstrap.min.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/animate.min.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/owl.carousel.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/owl.theme.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/style.blue.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/custom.css", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/respond.min.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/jquery-1.11.0.min.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/bootstrap.min.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/jquery.cookie.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/waypoints.min.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/modernizr.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/bootstrap-hover-dropdown.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/owl.carousel.min.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/front.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/jquery.query-object.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		"Url=/js/client.js", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("footer.html_5", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		LAST);

	web_url("topbar.html_5", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		LAST);

	web_url("03fef6ac-1896-4ce8-bd69-b798f85c6e0b_2", 
		"URL=http://35.221.252.58/catalogue/03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_5", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/img/product1.jpg", "Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(6);

	web_url("basket.html_2", 
		"URL=http://35.221.252.58/basket.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=/items/holy_2.jpg", ENDITEM, 
		"Url=/items/puma_1.jpeg", ENDITEM, 
		"Url=/items/puma_2.jpeg", ENDITEM, 
		"Url=/items/holy_1.jpg", ENDITEM, 
		"Url=/items/colourful_socks.jpg", ENDITEM, 
		"Url=/img/logo.png", ENDITEM, 
		"Url=/img/logo-small.png", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("card_2", 
		"URL=http://35.221.252.58/card", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		LAST);

	web_url("topbar.html_6", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_6", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_6", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		LAST);

	web_url("address_2", 
		"URL=http://35.221.252.58/address", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_5", 
		"URL=http://35.221.252.58/catalogue?size=3", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t158.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_3", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		LAST);

	web_url("PytR2uTncpiaAN1XlFqOF5lgfxtMqJt6_2", 
		"URL=http://35.221.252.58/customers/{sessionId}", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_url("3395a43e-2d88-40de-b95f-e00e1502085b", 
		"URL=http://35.221.252.58/catalogue/3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		LAST);

	web_url("03fef6ac-1896-4ce8-bd69-b798f85c6e0b_3", 
		"URL=http://35.221.252.58/catalogue/03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.png", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(6);
	
	lr_start_transaction("tx_add_address");
		
	web_custom_request("addresses", 
		"URL=http://35.221.252.58/addresses", 
		"Method=POST", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"number\":\"12306\",\"street\":\"DongChuan ROAD\",\"city\":\"ShangHai\",\"postcode\":\"200240\",\"country\":\"China\"}", 
		LAST);

	lr_end_transaction("tx_add_address", LR_AUTO);


	web_revert_auto_header("X-Requested-With");

	web_url("basket.html_3", 
		"URL=http://35.221.252.58/basket.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100", ENDITEM, 
		"Url=/css/font-awesome.css", ENDITEM, 
		"Url=/css/bootstrap.min.css", ENDITEM, 
		"Url=/css/animate.min.css", ENDITEM, 
		"Url=/css/owl.carousel.css", ENDITEM, 
		"Url=/css/owl.theme.css", ENDITEM, 
		"Url=/css/style.blue.css", ENDITEM, 
		"Url=/css/custom.css", ENDITEM, 
		"Url=/js/respond.min.js", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=/js/jquery-1.11.0.min.js", ENDITEM, 
		"Url=/js/bootstrap.min.js", ENDITEM, 
		"Url=/js/jquery.cookie.js", ENDITEM, 
		"Url=/js/waypoints.min.js", ENDITEM, 
		"Url=/js/modernizr.js", ENDITEM, 
		"Url=/js/bootstrap-hover-dropdown.js", ENDITEM, 
		"Url=/js/owl.carousel.min.js", ENDITEM, 
		"Url=/js/front.js", ENDITEM, 
		"Url=/js/jquery.query-object.js", ENDITEM, 
		"Url=/js/client.js", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("footer.html_7", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		LAST);

	web_url("topbar.html_7", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t166.inf", 
		"Mode=HTML", 
		LAST);

	web_url("address_3", 
		"URL=http://35.221.252.58/address", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		LAST);

	web_url("card_3", 
		"URL=http://35.221.252.58/card", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_4", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_7", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t170.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_6", 
		"URL=http://35.221.252.58/catalogue?size=3", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(16);

	lr_start_transaction("tx_add_card");

		web_custom_request("cards", 
		"URL=http://35.221.252.58/cards", 
		"Method=POST", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"longNum\":\"12345678\",\"expires\":\"12/20\",\"ccv\":\"test\"}", 
		LAST);

	lr_end_transaction("tx_add_card", LR_AUTO);


	web_revert_auto_header("X-Requested-With");

	web_url("basket.html_4", 
		"URL=http://35.221.252.58/basket.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100", ENDITEM, 
		"Url=/css/font-awesome.css", ENDITEM, 
		"Url=/css/bootstrap.min.css", ENDITEM, 
		"Url=/css/animate.min.css", ENDITEM, 
		"Url=/css/owl.carousel.css", ENDITEM, 
		"Url=/css/owl.theme.css", ENDITEM, 
		"Url=/css/style.blue.css", ENDITEM, 
		"Url=/css/custom.css", ENDITEM, 
		"Url=/js/respond.min.js", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=/js/jquery-1.11.0.min.js", ENDITEM, 
		"Url=/js/bootstrap.min.js", ENDITEM, 
		"Url=/js/jquery.cookie.js", ENDITEM, 
		"Url=/js/waypoints.min.js", ENDITEM, 
		"Url=/js/modernizr.js", ENDITEM, 
		"Url=/js/bootstrap-hover-dropdown.js", ENDITEM, 
		"Url=/js/owl.carousel.min.js", ENDITEM, 
		"Url=/js/front.js", ENDITEM, 
		"Url=/js/jquery.query-object.js", ENDITEM, 
		"Url=/js/client.js", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_8", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_8", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_8", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t176.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_5", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		LAST);

	web_url("card_4", 
		"URL=http://35.221.252.58/card", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		LAST);

	web_url("address_4", 
		"URL=http://35.221.252.58/address", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t179.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_7", 
		"URL=http://35.221.252.58/catalogue?size=3", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t180.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	lr_start_transaction("tx_order");

		web_custom_request("orders", 
		"URL=http://35.221.252.58/orders", 
		"Method=POST", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t181.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("cart_6", 
		"URL=http://35.221.252.58/cart", 
		"Method=DELETE", 
		"Resource=0", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("tx_order", LR_AUTO);


	web_revert_auto_header("X-Requested-With");

	web_url("customer-orders.html", 
		"URL=http://35.221.252.58/customer-orders.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/basket.html", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html_9", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/customer-orders.html", 
		"Snapshot=t184.inf", 
		"Mode=HTML", 
		LAST);

	web_url("topbar.html_9", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/customer-orders.html", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_9", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/customer-orders.html", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		LAST);

	// Get the first order id;
	web_reg_save_param_ex(
	    "ParamName=orderId", 
	    "LB/IC=http://orders/orders/",
	    "RB/IC=\"}",
	    "Ordinal=1",
	    SEARCH_FILTERS,
	        "Scope=Body",
		LAST);
	
	web_url("orders_2", 
		"URL=http://35.221.252.58/orders", 
		"Resource=0", 
		"Referer=http://35.221.252.58/customer-orders.html", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(13);

	web_url("customer-order.html", 
		"URL=http://35.221.252.58/customer-order.html?order=/orders/{orderId}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/customer-orders.html", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_10", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/customer-order.html?order=/orders/{orderId}", 
		"Snapshot=t189.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_10", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/customer-order.html?order=/orders/{orderId}", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/orders/{orderId}", "Referer=http://35.221.252.58/customer-order.html?order=/orders/{orderId}", ENDITEM, 
		LAST);

	return 0;
}