#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <graphics.h>
#include <ctype.h>
#include <dos.h>
#include <bios.h>

#define version "10.0"

page1();
page2();
page3();
page4();
page5();
page6();
allpages();
test();
setup();
cls(int a, int b);
box(int width, int depth, int x, int y, int tcolor, int tback);
dot(int width, int depth, int x, int y, int tcolor, int tback);


main()
{
	char option;


	textmode(C4350);

	for (;;){

		textbackground(1);

		cls(1,1);

		dot(80,50,1,1,1,3);
		window(1,50,80,50);
		textbackground(3);
		textcolor(142);
		cprintf("Development Version");

		box(60,17,10,2,14,3);

		textcolor(14);
		textbackground(3);

		window(11,3,80,50);
		cprintf("\n\r Pro-Data Page Sender. V%s (c) 1996, 2021 S.J.Cooper, \n\r",version);
		cprintf("\n\r   1. Send Page 1");
		cprintf("\n\r   2. Send Page 2");
		cprintf("\n\r   3. Send page 3");
		cprintf("\n\r   4. Send Page 4");
		cprintf("\n\r   5. Send Page 5");
		cprintf("\n\r   6. Send Clear Screen");
		cprintf("\n\r   7. Send All Pages");
		cprintf("\n\r   8. Setup Com Port");
		cprintf("\n\r   9. Dos Shell");



		window(11,16,80,50);
		cprintf(" Please enter option (1-9)(esc to quit): ");
		option=getche();

		if(option=='1'){
			page1();
		}
		else if(option=='2'){
			page2();
		}
		else if(option=='3'){
			page3();
		}
		else if(option=='4'){
			page4();
		}
		else if(option=='5'){
			page5();
		}
		else if(option=='6'){
			page6();
		}
		else if(option=='7'){
			allpages();
		}
		else if(option=='8'){		// setup
			setup();
		}
		else if(option=='9'){
			window(1,1,80,50);
			textcolor(7);
			textbackground(0);
			system("cd\\tc\\userfile");
			clrscr();
			cprintf("Type EXIT to return to Pro-Data menu . . . .");
			system("\command");
		}
		else if(option== '\x1b') break;

	}

	textmode(C80);
	window(1,48,80,25);

	return 0;

}

page1()
{
	box(60,3,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(142);
	system("page1 > com1");
	cprintf("Test Sent - Press a key ");
	getch();
		return 0;
}
page2()
{
	box(60,3,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(142);
	system("page2 > com1");
	cprintf("Test Sent - Press a key ");
	getch();
		return 0;
}
page3()
{
	box(60,3,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(142);
	system("page3 > com1");
	cprintf("Test Sent - Press a key ");
	getch();
		return 0;
}
page4()
{
	box(60,3,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(142);
	system("page4 > com1");
	cprintf("Test Sent - Press a key ");
	getch();
		return 0;
}
page5()
{
	box(60,3,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(142);
	system("page7 > com1");
	cprintf("Test Sent - Press a key ");
	getch();
		return 0;
}
page6()
{
	box(60,3,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(142);
	system("page0 > com1");
	cprintf("Clear page Sent - Press a key ");
	getch();
		return 0;
}
allpages()
{
	box(60,4,10,20,14,3);
	window(13,21,80,25);

	textbackground(3);
	textcolor(14);
	cprintf("Sending all pages - Press any at the end of the cycle");
	system("page1 > com1");
	delay(10000);
	system("page2 > com1");
	delay(10000);
	system("page3 > com1");
	delay(10000);
	system("page4 > com1");
	delay(10000);
	system("pagem2 > com1");
	delay(10000);
	system("pagem3 > com1");
	delay(10000);
	system("page6 > com1");
	delay(10000);
	system("page7 > com1");
	delay(10000);


	textcolor(142);
	cprintf("\n\rEnd of send cycle");
	getch();
		return 0;
}

setup()
{
	box(60,5,10,20,14,3);
	window(13,21,80,25);
	textbackground(3);
	textcolor(142);
	system("com_port.bat");
	cprintf("Com port set - Press a key ");
	getch();
	return 0;
}
cls(int a,int b)
{
	window(a,b,80,50);
	textbackground(1);
	textcolor(7);
	clrscr();

	return 0;
}

box(int width, int depth, int x, int y, int tcolor, int tback)
{
	textbackground(BLACK);
	//clrscr();

	window(1,1,80,50);

	int a, b, c, d, e;

	textbackground(BLUE);
	//clrscr();
	textbackground(BLACK);

	window(x+1,y+1,80,50);

	for(d=0;d<depth;d++){
		for(e=0;e<width;e++){
			cprintf(" ");
		}
	cprintf("\n\r");
	}

	window(x,y,80,50);
	textbackground(tback);
	textcolor(tcolor);

	cprintf("É");
	for(a=1;a<width-1;a++){
		cprintf("Í");
	}
	cprintf("»\n\r");
		for(b=1;b<depth-1;b++){
		cprintf("º");
		for(c=1;c<width-1;c++){
			cprintf(" ");
		}
		cprintf("º\n\r");
	}
	cprintf("È");
	for(a=1;a<width-1;a++){
		cprintf("Í");
	}

	cprintf("¼\n\r");

	return 0;
}

dot(int width, int depth, int x, int y, int tcolor, int tback)
{
	int d, w;

	window(x,y,80,50);
	textcolor(tcolor);
	textbackground(tback);

	for(d=0;d<depth;d++){
		for(w=0;w<width;w++){
			cprintf("°");
		}
		if(width==80);
			else cprintf("\n\r");
	}
	return 0;
}