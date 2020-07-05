Action()
{
	

	web_set_user("{username}",
		lr_unmask("5f0110724dd44c337c"), 
		"35.221.252.58:80");

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	http://35.221.252.58/items/weave2.jpg

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=http://35.221.252.58/items/weave2.jpg", 
		"PollIntervalMs=5100", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_0
URLs: 
	/items/weave2.jpg
 */
	web_url("35.221.252.58", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=/items/holy_2.jpg", ENDITEM, 
		"Url=/items/colourful_socks.jpg", ENDITEM, 
		"Url=/items/holy_1.jpg", ENDITEM, 
		"Url=/items/puma_1.jpeg", ENDITEM, 
		"Url=/items/weave1.jpg", ENDITEM, 
		"Url=/items/puma_2.jpeg", ENDITEM, 
		"Url=/items/weave2.jpg", ENDITEM, 
		"Url=/items/cross_1.jpeg", ENDITEM, 
		"Url=/items/cross_2.jpeg", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("catalogue", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("cart", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(15);

	lr_start_transaction("register");

	web_custom_request("register", 
		"URL=http://35.221.252.58/register", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"username\":\"{username}\",\"password\":\"12345\",\"email\":\"{email}\",\"firstName\":\"qqq{username}\",\"lastName\":\"www{username}\"}", 
		LAST);

	lr_end_transaction("register", LR_AUTO);

	web_revert_auto_header("X-Requested-With");

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_0
URLs: 
	/items/weave2.jpg
 */
	web_url("35.221.252.58_2",
		"URL=http://35.221.252.58/",
		"Resource=0",
		"Referer=",
		"Snapshot=t82.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100",ENDITEM,
		"Url=/css/font-awesome.css",ENDITEM,
		"Url=/css/bootstrap.min.css",ENDITEM,
		"Url=/css/animate.min.css",ENDITEM,
		"Url=/css/owl.carousel.css",ENDITEM,
		"Url=/css/owl.theme.css",ENDITEM,
		"Url=/css/style.blue.css",ENDITEM,
		"Url=/css/custom.css",ENDITEM,
		"Url=/js/respond.min.js",ENDITEM,
		"Url=/img/weave1.jpg",ENDITEM,
		"Url=/img/weave2.jpg",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff",ENDITEM,
		"Url=/img/weave3.jpg",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff",ENDITEM,
		"Url=/css/fonts/fontawesome-webfont.eot?",ENDITEM,
		"Url=/js/jquery-1.11.0.min.js",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff",ENDITEM,
		"Url=/js/bootstrap.min.js",ENDITEM,
		"Url=/js/js.cookie.js",ENDITEM,
		"Url=/js/client.js",ENDITEM,
		"Url=/js/jquery.cookie.js",ENDITEM,
		"Url=/js/waypoints.min.js",ENDITEM,
		"Url=/js/modernizr.js",ENDITEM,
		"Url=/js/bootstrap-hover-dropdown.js",ENDITEM,
		"Url=/js/owl.carousel.min.js",ENDITEM,
		"Url=/js/front.js",ENDITEM,
		"Url=/js/jquery.query-object.js",ENDITEM,
		"Url=/img/logo-small.png",ENDITEM,
		"Url=/img/logo.png",ENDITEM,
		"Url=/items/colourful_socks.jpg",ENDITEM,
		"Url=/items/puma_1.jpeg",ENDITEM,
		"Url=/items/holy_2.jpg",ENDITEM,
		"Url=/items/weave1.jpg",ENDITEM,
		"Url=/items/cross_1.jpeg",ENDITEM,
		"Url=/items/cross_2.jpeg",ENDITEM,
		"Url=/items/holy_1.jpg",ENDITEM,
		"Url=/items/puma_2.jpeg",ENDITEM,
		LAST);

	web_custom_request("urstelemetry.asmx", 
		"URL=https://t.urs.microsoft.com/urstelemetry.asmx?MSTel-Client-Key=XTF270LOeUgvwIMgfS/2cA%3d%3d&MSTel-MAC=T3Qx4z6msXE%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<T v=\"6\"><G>4A72F430-B40C-4D36-A068-CE33ADA5ADF9</G><D>10.0.8110.6</D><C>11.0.0.0</C><OS>10.0.18363.0.0</OS><I>9.11.18362.0</I><L>zh-Hans-CN</L><O>POST</O><ID>F6F1CEC0-3C6A-4C7D-81B5-B0131155F259</ID><DID>4FXMTPthypCQ9gn+HQDibC1cMzd9nBTbMtVMX1ylvLo=:0</DID><UID>m:414d569d40f601ab</UID><URL>aHR0cDovLzM1LjIyMS4yNTIuNTgv</URL><RU></RU><RI>0.0.0.0</RI><HIP>35.221.252.58</HIP><UI>6439454a0607e2044c6a67307ef30b57e72ef222ddd62e9011c37ac7aef72cea</UI><S>1088</S><DI>fec0:0:0:ffff::1%1</DI><Y><T>B|0|"
		"100.0000</T><T>I|0|100.0000</T><T>D|0|95.0000</T><T>P|0|100.0000|6.5000</T><T>F|2|0.0070|0.0070|0.0070</T><T>R|0|100.0000</T><T>U|2|1.0000</T><T>W|0|0.0050</T><T>H|0|100.0000</T><T>O|0|100.0000</T><T>T|0|100.0000</T><T>PP|1|100.0000</T></Y><M>NLHN</M><Fs><F><URL>aHR0cDovLzM1LjIyMS4yNTIuNTgv</URL><Z>NLHN</Z><H>32432000|14|0|80000064|FC8|0,2</H><K>3a004c006f00670069006e003b006c006f00670069006e003b004c006f00670069006e003a00</K><T>TOP</T><HIP>35.221.252.58</HIP><SC/><SH>41237991268c08d4</SH><NS></NS>"
		"<SSL/><SSLLen/><REDIR/></F></Fs><WA/><GS/><Err/></T>", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_2", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_2", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_2", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_2", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_url("mGnnbgTRdEYvw8_KrSVkSiRQ1au9GPWp", 
		"URL=http://35.221.252.58/customers/mGnnbgTRdEYvw8_KrSVkSiRQ1au9GPWp", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_2", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("index.html", 
		"URL=http://35.221.252.58/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = Poll_0
URLs: 
	/items/weave2.jpg
 */
	web_url("35.221.252.58_3",
		"URL=http://35.221.252.58/",
		"Resource=0",
		"Referer=",
		"Snapshot=t91.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,500,700,300,100",ENDITEM,
		"Url=/css/font-awesome.css",ENDITEM,
		"Url=/css/bootstrap.min.css",ENDITEM,
		"Url=/css/animate.min.css",ENDITEM,
		"Url=/css/owl.carousel.css",ENDITEM,
		"Url=/css/owl.theme.css",ENDITEM,
		"Url=/css/style.blue.css",ENDITEM,
		"Url=/css/custom.css",ENDITEM,
		"Url=/js/respond.min.js",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff",ENDITEM,
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff",ENDITEM,
		"Url=/js/jquery-1.11.0.min.js",ENDITEM,
		"Url=/css/fonts/fontawesome-webfont.eot?",ENDITEM,
		"Url=/img/weave3.jpg",ENDITEM,
		"Url=/js/bootstrap.min.js",ENDITEM,
		"Url=/js/js.cookie.js",ENDITEM,
		"Url=/img/weave2.jpg",ENDITEM,
		"Url=/img/weave1.jpg",ENDITEM,
		"Url=/js/client.js",ENDITEM,
		"Url=/js/jquery.cookie.js",ENDITEM,
		"Url=/js/waypoints.min.js",ENDITEM,
		"Url=/js/modernizr.js",ENDITEM,
		"Url=/js/bootstrap-hover-dropdown.js",ENDITEM,
		"Url=/js/owl.carousel.min.js",ENDITEM,
		"Url=/js/front.js",ENDITEM,
		"Url=/js/jquery.query-object.js",ENDITEM,
		"Url=/items/puma_1.jpeg",ENDITEM,
		"Url=/items/puma_2.jpeg",ENDITEM,
		"Url=/items/weave1.jpg",ENDITEM,
		"Url=/items/holy_1.jpg",ENDITEM,
		"Url=/items/holy_2.jpg",ENDITEM,
		"Url=/items/colourful_socks.jpg",ENDITEM,
		"Url=/items/cross_1.jpeg",ENDITEM,
		"Url=/items/cross_2.jpeg",ENDITEM,
		"Url=/img/logo.png",ENDITEM,
		"Url=/img/logo-small.png",ENDITEM,
		LAST);

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_3", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_3", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_3", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_3", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_3", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	lr_think_time(4);

	lr_start_transaction("login");

	web_url("login", 
		"URL=http://35.221.252.58/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("login", LR_AUTO);

	web_revert_auto_header("X-Requested-With");

	web_url("35.221.252.58_4", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t98.inf", 
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
		"Url=/img/weave1.jpg", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=/js/jquery-1.11.0.min.js", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=/img/weave3.jpg", ENDITEM, 
		"Url=/img/weave2.jpg", ENDITEM, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
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
		"Url=/img/logo.png", ENDITEM, 
		"Url=/img/logo-small.png", ENDITEM, 
		"Url=/items/holy_1.jpg", ENDITEM, 
		"Url=/items/colourful_socks.jpg", ENDITEM, 
		"Url=/items/holy_2.jpg", ENDITEM, 
		"Url=/items/puma_1.jpeg", ENDITEM, 
		"Url=/items/weave1.jpg", ENDITEM, 
		"Url=/items/weave2.jpg", ENDITEM, 
		"Url=/items/cross_1.jpeg", ENDITEM, 
		"Url=/items/cross_2.jpeg", ENDITEM, 
		"Url=/items/puma_2.jpeg", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("topbar.html_4", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_4", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_url("mGnnbgTRdEYvw8_KrSVkSiRQ1au9GPWp_2", 
		"URL=http://35.221.252.58/customers/mGnnbgTRdEYvw8_KrSVkSiRQ1au9GPWp", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue_4", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("navbar.html_4", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart_4", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.png", "Referer=", ENDITEM, 
		LAST);

	return 0;
}
