Book_Flight()
{

	web_reg_find("Text=Web Tours", 
		LAST);

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	/* ******************LOGIN****************** */

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* ***************LOGIN_OK************* */

	web_reg_find("Text=Web Tours", 
		LAST);

	lr_think_time(15);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=126632.459700284zfVDzfHpVtfiDDDDDQAiVpQtciHf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=40", ENDITEM, 
		"Name=login.y", "Value=4", ENDITEM, 
		LAST);

	/* *********CLICK on FLIGHTS*********** */

	web_reg_find("Text=Web Tours", 
		LAST);

	lr_think_time(17);

	web_url("Search Flights Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("FormDateUpdate.class", 
		"URL=http://127.0.0.1:1080/WebTours/classes/FormDateUpdate.class", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t18.inf", 
		LAST);

	/* *************SELECT DEP AND A */

	web_reg_find("Text=Flight Selections", 
		LAST);

	lr_think_time(21);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=07/17/2019", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=07/18/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=71", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		LAST);

	/* *****SELECT TIME****** */

	web_reg_find("Text=Flight Reservation", 
		LAST);

	lr_think_time(17);

	web_submit_data("reservations.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=040;350;07/17/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=61", ENDITEM, 
		"Name=reserveFlights.y", "Value=8", ENDITEM, 
		LAST);

	/* ******************PAYMENT DETAILS********** */

	web_reg_find("Text=Reservation Made!", 
		LAST);

	lr_think_time(32);

	web_submit_data("reservations.pl_3", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=Madrid", ENDITEM, 
		"Name=address2", "Value=Madrid", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=15456456", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=040;350;07/17/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=57", ENDITEM, 
		"Name=buyFlights.y", "Value=6", ENDITEM, 
		LAST);

	/* ****************LOGOUT************* */

	web_reg_find("Text=Web Tours", 
		LAST);

	lr_think_time(17);

	web_url("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);
	
	web_custom_request("web_custom_request",
		"URL=www.example.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=1",
		"Referer=",
		"Body=This is the body",
		LAST);

	return 0;
}
