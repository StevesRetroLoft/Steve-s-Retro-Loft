#include <iostream.h>
#include <conio.h>
#include <time.h>
main()
{
	cout << "\x1b\x0c";
	time_t t;
	time(&t);
	//      "123456789 123456789 123456789 1234567890" 40 character line
	cout << "\x1b\x44\x1b\x5d\x1b\x43\SteveText  " << ctime(&t) ; //Line1
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Steve's Retro Loft "; //Line 2/3
	cout << "\x1b\x0a"; //Line 4
	cout << "\x1b\x0a"; //Line 5
	cout << "\x1b\x44\x1b\x5d\x1b\x43\       Future Content....Page1"; //Line 6
	cout << "\x1b\x0a";
	cout << " As the banner and bio would indicate \x1b\x0a";  //Line 7
	cout << " I'm a fan of the Sinclair ZX Spectrum.\x1b\x0a";    //Line 8
	cout << " I started out with a ZX81 but that was\x1b\x0a";  //Line 9
	cout << " quite limiting, so after months of \x1b\x0a";    //Line 10
	cout << " annoying my parents a ZX Spectrum  \x1b\x0a"; //Line 11
	//      "123456789 123456789 123456789 1234567890" 40 character line
	cout << " arrived. Over the years I had a number\x1b\x0a"; //Line 12
	cout << " of different models, but sold most of\x1b\x0a"; //Line 13
	cout << " them back in the late 90's as I was\x1b\x0a"; //Line 14
	cout << " saving to buy a house. And really I'd\x1b\x0a"; //Line 15
	cout << " moved on to joys of the Nintendo Super\x1b\x0a"; //Line 16
	cout << " Famicom (Jpn SNES). So I had a clear\x1b\x0a";  //Line 17
	cout << " out of my Spectrum, ST and Amiga stuff\x1b\x0a";   //Line 18
	cout << " (I did keep my old broken 48k).\x1b\x0a";   //Line 19
	cout << " \x1b\x0a";   //Line 20
	cout << " Moving on to around 2003, I discovered\x1b\x0a";  //Line 21
	cout << " Ebay - and started to buy everything\x1b\x0a";                   //Line 22
	cout << " again.  Albeit more expensively!!! \x1b\x0a";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	//      "123456789 123456789 123456789 1234567890" 40 character line
	return 0;
}