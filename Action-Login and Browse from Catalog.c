Action()
{

	lr_start_transaction("Login and Catalog");

	web_set_user("u1", 
		lr_unmask("5f018f4df92c79"), 
		"35.221.252.58:80");

	web_add_cookie("logged_in=RSlQwepWK2hYRg6SpE7oJZQdJFxcgrKh; DOMAIN=35.221.252.58");

	web_url("35.221.252.58", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("font-awesome.css", 
		"URL=http://35.221.252.58/css/font-awesome.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("animate.min.css", 
		"URL=http://35.221.252.58/css/animate.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("owl.carousel.css", 
		"URL=http://35.221.252.58/css/owl.carousel.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("owl.theme.css", 
		"URL=http://35.221.252.58/css/owl.theme.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("custom.css", 
		"URL=http://35.221.252.58/css/custom.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("style.blue.css", 
		"URL=http://35.221.252.58/css/style.blue.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("weave3.jpg", 
		"URL=http://35.221.252.58/img/weave3.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("weave2.jpg", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("weave1.jpg", 
		"URL=http://35.221.252.58/img/weave1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("respond.min.js", 
		"URL=http://35.221.252.58/js/respond.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("bootstrap.min.js", 
		"URL=http://35.221.252.58/js/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("jquery-1.11.0.min.js", 
		"URL=http://35.221.252.58/js/jquery-1.11.0.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("js.cookie.js", 
		"URL=http://35.221.252.58/js/js.cookie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("client.js", 
		"URL=http://35.221.252.58/js/client.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("jquery.cookie.js", 
		"URL=http://35.221.252.58/js/jquery.cookie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("bootstrap.min.css", 
		"URL=http://35.221.252.58/css/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("waypoints.min.js", 
		"URL=http://35.221.252.58/js/waypoints.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("modernizr.js", 
		"URL=http://35.221.252.58/js/modernizr.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("owl.carousel.min.js", 
		"URL=http://35.221.252.58/js/owl.carousel.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("bootstrap-hover-dropdown.js", 
		"URL=http://35.221.252.58/js/bootstrap-hover-dropdown.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("front.js", 
		"URL=http://35.221.252.58/js/front.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("jquery.query-object.js", 
		"URL=http://35.221.252.58/js/jquery.query-object.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t24.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(25);

	web_url("footer.html", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("fontawesome-webfont.eot", 
		"URL=http://35.221.252.58/css/fonts/fontawesome-webfont.eot?", 
		"Resource=1", 
		"RecContentType=application/vnd.ms-fontobject", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("navbar.html", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("logo.png", 
		"URL=http://35.221.252.58/img/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("logo-small.png", 
		"URL=http://35.221.252.58/img/logo-small.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t30.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("RSlQwepWK2hYRg6SpE7oJZQdJFxcgrKh", 
		"URL=http://35.221.252.58/customers/RSlQwepWK2hYRg6SpE7oJZQdJFxcgrKh", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t32.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("cart", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("colourful_socks.jpg", 
		"URL=http://35.221.252.58/items/colourful_socks.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("holy_2.jpg", 
		"URL=http://35.221.252.58/items/holy_2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("holy_1.jpg", 
		"URL=http://35.221.252.58/items/holy_1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("puma_1.jpeg", 
		"URL=http://35.221.252.58/items/puma_1.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("weave1.jpg_2", 
		"URL=http://35.221.252.58/items/weave1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("puma_2.jpeg", 
		"URL=http://35.221.252.58/items/puma_2.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("cross_1.jpeg", 
		"URL=http://35.221.252.58/items/cross_1.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("weave2.jpg_2", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("cross_2.jpeg", 
		"URL=http://35.221.252.58/items/cross_2.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t42.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	lr_think_time(11);

	web_url("login", 
		"URL=http://35.221.252.58/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("35.221.252.58_2", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("css_2", 
		"URL=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("font-awesome.css_2", 
		"URL=http://35.221.252.58/css/font-awesome.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("bootstrap.min.css_2", 
		"URL=http://35.221.252.58/css/bootstrap.min.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("animate.min.css_2", 
		"URL=http://35.221.252.58/css/animate.min.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("owl.carousel.css_2", 
		"URL=http://35.221.252.58/css/owl.carousel.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("owl.theme.css_2", 
		"URL=http://35.221.252.58/css/owl.theme.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("style.blue.css_2", 
		"URL=http://35.221.252.58/css/style.blue.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("custom.css_2", 
		"URL=http://35.221.252.58/css/custom.css", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("respond.min.js_2", 
		"URL=http://35.221.252.58/js/respond.min.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("weave2.jpg_3", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("weave1.jpg_3", 
		"URL=http://35.221.252.58/img/weave1.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("weave3.jpg_2", 
		"URL=http://35.221.252.58/img/weave3.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("jquery-1.11.0.min.js_2", 
		"URL=http://35.221.252.58/js/jquery-1.11.0.min.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t57.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("fontawesome-webfont.eot_2", 
		"URL=http://35.221.252.58/css/fonts/fontawesome-webfont.eot?", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("bootstrap.min.js_2", 
		"URL=http://35.221.252.58/js/bootstrap.min.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("js.cookie.js_2", 
		"URL=http://35.221.252.58/js/js.cookie.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("client.js_2", 
		"URL=http://35.221.252.58/js/client.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("jquery.cookie.js_2", 
		"URL=http://35.221.252.58/js/jquery.cookie.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("waypoints.min.js_2", 
		"URL=http://35.221.252.58/js/waypoints.min.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("modernizr.js_2", 
		"URL=http://35.221.252.58/js/modernizr.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("bootstrap-hover-dropdown.js_2", 
		"URL=http://35.221.252.58/js/bootstrap-hover-dropdown.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("owl.carousel.min.js_2", 
		"URL=http://35.221.252.58/js/owl.carousel.min.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("front.js_2", 
		"URL=http://35.221.252.58/js/front.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("jquery.query-object.js_2", 
		"URL=http://35.221.252.58/js/jquery.query-object.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("client.js_3", 
		"URL=http://35.221.252.58/js/client.js", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t69.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(33);

	web_url("catalogue_2", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t70.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_2", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_2", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html_2", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("puma_1.jpeg_2", 
		"URL=http://35.221.252.58/items/puma_1.jpeg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("holy_2.jpg_2", 
		"URL=http://35.221.252.58/items/holy_2.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t75.inf", 
		LAST);

	web_url("holy_1.jpg_2", 
		"URL=http://35.221.252.58/items/holy_1.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("colourful_socks.jpg_2", 
		"URL=http://35.221.252.58/items/colourful_socks.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("weave1.jpg_4", 
		"URL=http://35.221.252.58/items/weave1.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("weave2.jpg_4", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("cross_2.jpeg_2", 
		"URL=http://35.221.252.58/items/cross_2.jpeg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("cross_1.jpeg_2", 
		"URL=http://35.221.252.58/items/cross_1.jpeg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("logo.png_2", 
		"URL=http://35.221.252.58/img/logo.png", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t82.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("4AQSE8TVuMiV_q64dcXhOm9HAIOUuGqh", 
		"URL=http://35.221.252.58/customers/4AQSE8TVuMiV_q64dcXhOm9HAIOUuGqh", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("logo-small.png_2", 
		"URL=http://35.221.252.58/img/logo-small.png", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("cart_2", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("puma_2.jpeg_2", 
		"URL=http://35.221.252.58/items/puma_2.jpeg", 
		"Resource=1", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t86.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("KFOlCnqEu92Fr1MmWUlfBBc-.woff", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t87.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("KFOlCnqEu92Fr1MmEU9fBBc-.woff", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t88.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("KFOkCnqEu92Fr1MmgVxIIzQ.woff", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t89.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("KFOlCnqEu92Fr1MmSU5fBBc-.woff", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t90.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	web_url("category.html", 
		"URL=http://35.221.252.58/category.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_concurrent_start(NULL);

	web_url("KFOkCnqEu92Fr1MmgVxIIzQ.woff_2", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t92.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("KFOlCnqEu92Fr1MmSU5fBBc-.woff_2", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t93.inf", 
		LAST);

	web_add_header("Origin", 
		"http://35.221.252.58");

	web_url("KFOmCnqEu92Fr1Mu4mxM.woff", 
		"URL=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t94.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html_3", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("size", 
		"URL=http://35.221.252.58/catalogue/size?tags=", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_3", 
		"URL=http://35.221.252.58/catalogue?page=1&size=6&tags=", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_3", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("tags", 
		"URL=http://35.221.252.58/tags", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_3", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("favicon.png", 
		"URL=http://35.221.252.58/favicon.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("product1.jpg", 
		"URL=http://35.221.252.58/img/product1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("WAT2.jpg", 
		"URL=http://35.221.252.58/items/WAT2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("WAT.jpg", 
		"URL=http://35.221.252.58/items/WAT.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t104.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(7);

	web_url("detail.html", 
		"URL=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html_4", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t106.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_4", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_4", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"URL=http://35.221.252.58/catalogue/03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_4", 
		"URL=http://35.221.252.58/catalogue?sort=id&size=3&tags=magic", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t110.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(5);

	web_url("category.html_2", 
		"URL=http://35.221.252.58/category.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("footer.html_5", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t112.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html_5", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t113.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_5", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(4);

	web_url("category.html_3", 
		"URL=http://35.221.252.58/category.html?tags=geek", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("footer.html_6", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t116.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("size_2", 
		"URL=http://35.221.252.58/catalogue/size?tags=geek", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_6", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html_6", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_5", 
		"URL=http://35.221.252.58/catalogue?page=1&size=6&tags=geek", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("youtube_2.jpeg", 
		"URL=http://35.221.252.58/items/youtube_2.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("youtube_1.jpeg", 
		"URL=http://35.221.252.58/items/youtube_1.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html?tags=geek", 
		"Snapshot=t122.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(9);

	web_url("category.html_4",
		"URL={typename}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://35.221.252.58/category.html?tags=geek",
		"Snapshot=t123.inf",
		"Mode=HTTP",
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_7", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html_7", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_7", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_6", 
		"URL=http://35.221.252.58/catalogue?page=1&size=6&tags=brown", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("classic.jpg", 
		"URL=http://35.221.252.58/items/classic.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("catsocks.jpg", 
		"URL=http://35.221.252.58/items/catsocks.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("catsocks2.jpg", 
		"URL=http://35.221.252.58/items/catsocks2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("classic2.jpg", 
		"URL=http://35.221.252.58/items/classic2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t131.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(7);

	web_url("detail.html_2", 
		"URL=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/category.html?tags=brown", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html_8", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_8", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Snapshot=t134.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"URL=http://35.221.252.58/catalogue/zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Snapshot=t135.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_8", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Snapshot=t136.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_7", 
		"URL=http://35.221.252.58/catalogue?sort=id&size=3&tags=brown", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Snapshot=t137.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	lr_think_time(5);

	web_url("category.html_5", 
		"URL=http://35.221.252.58/category.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=zzz4f044-b040-410d-8ead-4de0446aec7e", 
		"Snapshot=t138.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("footer.html_9", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t139.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_9", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html_9", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/category.html", 
		"Snapshot=t141.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Login and Catalog", LR_AUTO);

	return 0;
}