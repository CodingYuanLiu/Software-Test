vuser_init()
{
	int rc;
	web_set_user("{username}", 
		lr_unmask("5f01725df7313fbc34"), 
		"35.221.252.58:80");
	
	web_url("35.221.252.58", 
		"URL=http://35.221.252.58/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOkCnqEu92Fr1MmgVxIIzQ.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc-.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxM.woff", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fBBc-.woff", ENDITEM, 
		"Url=/items/holy_1.jpg", ENDITEM, 
		"Url=/items/holy_2.jpg", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc-.woff", ENDITEM, 
		"Url=/items/colourful_socks.jpg", ENDITEM, 
		"Url=/items/puma_1.jpeg", ENDITEM, 
		"Url=/items/weave1.jpg", ENDITEM, 
		"Url=/items/puma_2.jpeg", ENDITEM, 
		"Url=/items/weave2.jpg", ENDITEM, 
		"Url=/items/cross_2.jpeg", ENDITEM, 
		"Url=/items/cross_1.jpeg", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("navbar.html", 
		"URL=http://35.221.252.58/navbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("topbar.html", 
		"URL=http://35.221.252.58/topbar.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("footer.html", 
		"URL=http://35.221.252.58/footer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("catalogue", 
		"URL=http://35.221.252.58/catalogue?size=5", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cart", 
		"URL=http://35.221.252.58/cart", 
		"Resource=0", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	lr_think_time(146);
	
	// save logged_in Cookie in {sessionId} parameter
	web_reg_save_param_ex(
	    "ParamName=sessionId", 
	    "LB/IC=logged_in=",
	    "RB/IC=;",
	    "Ordinal=1",
	    SEARCH_FILTERS,
	        "Scope=Cookies",
		LAST);
	
	lr_start_transaction("tx_login");
	rc = web_url("login", 
		"URL=http://35.221.252.58/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://35.221.252.58/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");
	
	lr_end_transaction("tx_login", rc);
	
	return 0;
}
