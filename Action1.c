Action1()
{

	web_reg_find("Text=Web Tours", 
		LAST);

	web_url("index.htm_2", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("oo_21b.gif", 
		"URL=https://www.google.com/images/hpp/oo_21b.gif", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.google.es/?gws_rd=ssl", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("iecompatviewlist.xml_2", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("rs=AA2YrTsftdWrcL5_LUVPlL8gF_aHLGN85A", 
		"URL=https://www.gstatic.com/og/_/js/k=og.og2.en_US.c7Z6ntP04Rs.O/rt=j/m=def,aswid/exm=in,fot/d=1/ed=1/rs=AA2YrTsftdWrcL5_LUVPlL8gF_aHLGN85A", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.es/?gws_rd=ssl", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("i1_1967ca6a.png", 
		"URL=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.google.es/?gws_rd=ssl", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("cb=gapi.loaded_0", 
		"URL=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.JNa9MntajDY.O/m=gapi_iframes,googleapis_client,plusone/rt=j/sv=1/d=1/ed=1/rs=AHpOoo_db4DX0hhorP4qsjM6Ki5qzOgeUA/cb=gapi.loaded_0", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.google.es/?gws_rd=ssl", 
		"Snapshot=t28.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(4);

	web_url("so", 
		"URL=https://ogs.google.com/widget/app/so?hl=es&origin=https%3A%2F%2Fwww.google.es&pid=1&spid=1&usegapi=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.es/?gws_rd=ssl", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}