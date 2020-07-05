Action()
{
	lr_start_transaction("login and browse");
		
	web_set_user("{username}",
		lr_decrypt("5f0075782651a9"),
		"35.221.252.58:80");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("35.221.252.58", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t256.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("font-awesome.css", 
		"URL=http://35.221.252.58/css/font-awesome.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t257.inf", 
		LAST);

	web_url("bootstrap.min.css", 
		"URL=http://35.221.252.58/css/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t258.inf", 
		LAST);

	web_url("animate.min.css", 
		"URL=http://35.221.252.58/css/animate.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t259.inf", 
		LAST);

	web_url("owl.theme.css", 
		"URL=http://35.221.252.58/css/owl.theme.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t260.inf", 
		LAST);

	web_url("style.blue.css", 
		"URL=http://35.221.252.58/css/style.blue.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t261.inf", 
		LAST);

	web_url("owl.carousel.css", 
		"URL=http://35.221.252.58/css/owl.carousel.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t262.inf", 
		LAST);

	web_url("custom.css", 
		"URL=http://35.221.252.58/css/custom.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t263.inf", 
		LAST);

	web_url("respond.min.js", 
		"URL=http://35.221.252.58/js/respond.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t264.inf", 
		LAST);

	web_url("bootstrap.min.js", 
		"URL=http://35.221.252.58/js/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t265.inf", 
		LAST);

	web_url("js.cookie.js", 
		"URL=http://35.221.252.58/js/js.cookie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t266.inf", 
		LAST);

	web_url("jquery-1.11.0.min.js", 
		"URL=http://35.221.252.58/js/jquery-1.11.0.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t267.inf", 
		LAST);

	web_url("client.js", 
		"URL=http://35.221.252.58/js/client.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t268.inf", 
		LAST);

	web_url("jquery.cookie.js", 
		"URL=http://35.221.252.58/js/jquery.cookie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t269.inf", 
		LAST);

	web_url("waypoints.min.js", 
		"URL=http://35.221.252.58/js/waypoints.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t270.inf", 
		LAST);

	web_url("weave1.jpg", 
		"URL=http://35.221.252.58/img/weave1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t273.inf", 
		LAST);

	web_url("modernizr.js", 
		"URL=http://35.221.252.58/js/modernizr.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t274.inf", 
		LAST);

	web_url("bootstrap-hover-dropdown.js", 
		"URL=http://35.221.252.58/js/bootstrap-hover-dropdown.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t275.inf", 
		LAST);

	web_url("weave2.jpg", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t276.inf", 
		LAST);

	web_url("owl.carousel.min.js", 
		"URL=http://35.221.252.58/js/owl.carousel.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t277.inf", 
		LAST);

	web_url("front.js", 
		"URL=http://35.221.252.58/js/front.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t278.inf", 
		LAST);

	web_url("jquery.query-object.js", 
		"URL=http://35.221.252.58/js/jquery.query-object.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t279.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Origin", 
		"http://35.221.252.58");

	lr_think_time(19);

	web_url("fontawesome-webfont.woff", 
		"URL=http://35.221.252.58/css/fonts/fontawesome-webfont.woff?v=4.0.3", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=http://35.221.252.58/css/font-awesome.css", 
		"Snapshot=t272.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t280.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t281.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t282.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t283.inf", 
		"Mode=HTTP", 
		LAST);

/* Added by Async CodeGen.
ID=LongPoll_0
ScanType = Recording
Name = web_url

The following URLs are considered part of this conversation:
	http://35.221.252.58/items/colourful_socks.jpg

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_0_RequestCB
	LongPoll_0_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=http://35.221.252.58/items/colourful_socks.jpg", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

	web_concurrent_start(NULL);

	web_url("holy_2.jpg", 
		"URL=http://35.221.252.58/items/holy_2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t284.inf", 
		LAST);

	web_url("holy_1.jpg", 
		"URL=http://35.221.252.58/items/holy_1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t285.inf", 
		LAST);

	web_url("colourful_socks.jpg", 
		"URL=http://35.221.252.58/items/colourful_socks.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t286.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(4);

	web_url("cart", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t287.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("puma_1.jpeg", 
		"URL=http://35.221.252.58/items/puma_1.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t288.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("logo.png", 
		"URL=http://35.221.252.58/img/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t289.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("puma_2.jpeg", 
		"URL=http://35.221.252.58/items/puma_2.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t290.inf", 
		LAST);

	web_url("weave1.jpg_2", 
		"URL=http://35.221.252.58/items/weave1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t291.inf", 
		LAST);

	web_url("weave2.jpg_2", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t292.inf", 
		LAST);

	web_url("cross_1.jpeg", 
		"URL=http://35.221.252.58/items/cross_1.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t293.inf", 
		LAST);

	web_url("cross_2.jpeg", 
		"URL=http://35.221.252.58/items/cross_2.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t294.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("logo-small.png", 
		"URL=http://35.221.252.58/img/logo-small.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t295.inf", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(10);

	web_url("login", 
		"URL=http://35.221.252.58/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t296.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("35.221.252.58_2", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t297.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("weave2.jpg_3", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t299.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_2", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t300.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("navbar.html_2", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t301.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_2", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t302.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_2", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t303.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);


	web_url("weave2.jpg_4", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t305.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("cart_2", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t306.inf", 
		"Mode=HTTP", 
		LAST);

/* Added by Async CodeGen.
ID=Poll_1
ScanType = Recording

The following URLs are considered part of this conversation:
	http://35.221.252.58/customers/qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_1_RequestCB
	Poll_1_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=http://35.221.252.58/customers/qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3", 
		"PollIntervalMs=5500", 
		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		LAST);

	web_url("qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3", 
		"URL=http://35.221.252.58/customers/qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t307.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_url("colourful_socks.jpg_2",
		"URL=http://35.221.252.58/items/colourful_socks.jpg",
		"Resource=1",
		"RecContentType=image/jpeg",
		"Referer=http://35.221.252.58/",
		"Snapshot=t308.inf",
		LAST); 
	*/

	web_url("weave2.jpg_5", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t309.inf", 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_url("colourful_socks.jpg_3",
		"URL=http://35.221.252.58/items/colourful_socks.jpg",
		"Resource=1",
		"RecContentType=image/jpeg",
		"Referer=http://35.221.252.58/",
		"Snapshot=t310.inf",
		LAST); 
	*/

	web_url("weave2.jpg_6", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t311.inf", 
		LAST);

	web_concurrent_end(NULL);

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

	web_url("detail.html", 
		"URL=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t312.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html_3", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t313.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_3", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t314.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_3", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t315.inf", 
		"Mode=HTTP", 
		LAST);

/* Removed by Async CodeGen.
ID = Poll_1
 */
	/*
 web_url("qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3_2",
		"URL=http://35.221.252.58/customers/qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3",
		"Resource=0",
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b",
		"Snapshot=t316.inf",
		"Mode=HTTP",
		LAST); 
	*/

	web_url("cart_3", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t317.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"URL=http://35.221.252.58/catalogue/03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t318.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_3", 
		"URL=http://35.221.252.58/catalogue?sort=id&size=3&tags=magic", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t319.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("product1.jpg", 
		"URL=http://35.221.252.58/img/product1.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t320.inf", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

	web_url("35.221.252.58_3", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=03fef6ac-1896-4ce8-bd69-b798f85c6e0b", 
		"Snapshot=t321.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html_4", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t323.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("topbar.html_4", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t324.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_4", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t325.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("cart_4", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t326.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_4", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t327.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("weave2.jpg_7", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t329.inf", 
		LAST);

	web_concurrent_end(NULL);

/* Removed by Async CodeGen.
ID = Poll_1
 */
	/*
 web_url("qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3_3",
		"URL=http://35.221.252.58/customers/qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3",
		"Resource=0",
		"Referer=http://35.221.252.58/",
		"Snapshot=t330.inf",
		"Mode=HTTP",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_1
 */
	web_stop_async("ID=Poll_1", 
		LAST);

	web_concurrent_start(NULL);

	web_url("weave2.jpg_8", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t331.inf", 
		LAST);

	web_url("weave2.jpg_9", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t332.inf", 
		LAST);

	web_url("weave2.jpg_10", 
		"URL=http://35.221.252.58/img/weave2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t333.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("detail.html_2", 
		"URL=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t334.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_5", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t335.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("footer.html_5", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t336.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("3395a43e-2d88-40de-b95f-e00e1502085b", 
		"URL=http://35.221.252.58/catalogue/3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t337.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3_4", 
		"URL=http://35.221.252.58/customers/qZv1iKxsi-2QVRFheHRcgYJxJNabB4q3", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t338.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("catalogue_5", 
		"URL=http://35.221.252.58/catalogue?sort=id&size=3&tags=brown", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t339.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("catsocks2.jpg", 
		"URL=http://35.221.252.58/items/catsocks2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t340.inf", 
		LAST);

	web_url("catsocks.jpg", 
		"URL=http://35.221.252.58/items/catsocks.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t341.inf", 
		LAST);

	web_url("classic.jpg", 
		"URL=http://35.221.252.58/items/classic.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t342.inf", 
		LAST);

	web_url("classic2.jpg", 
		"URL=http://35.221.252.58/items/classic2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t343.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("navbar.html_5", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t344.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("cart_5", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/detail.html?id=3395a43e-2d88-40de-b95f-e00e1502085b", 
		"Snapshot=t345.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("parse and browse", LR_AUTO);

	return 0;
}