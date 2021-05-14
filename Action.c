Action()
{
	
	lr_start_transaction("Test1");

		web_url("web_url",
		"URL=http://bing.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	lr_end_transaction("Test1", LR_AUTO);
	
	lr_start_transaction("Test2");

		web_url("web_url",
		"URL=http://bing.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	lr_end_transaction("Test2", LR_AUTO);
	
	lr_start_transaction("Test3");

		web_url("web_url",
		"URL=http://bing.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	lr_end_transaction("Test3", LR_AUTO);
	
	
	lr_start_transaction("Test4");

		web_url("web_url",
		"URL=http://bing.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	lr_end_transaction("Test4", LR_AUTO);
	
	
	lr_start_transaction("Test5");

		web_url("web_url",
		"URL=http://bing.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	lr_end_transaction("Test5", LR_AUTO);
	
	
	lr_start_transaction("Test6");

		web_url("web_url",
		"URL=http://bing.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	lr_end_transaction("Test6", LR_AUTO);

	
	return 0;
}
