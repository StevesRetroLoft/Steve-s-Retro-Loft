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
	cout << " \x1b\x0a";
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Welcome to Steve's Retro Loft"; //Line 2/3
	cout << "\x1b\x0a"; //Lin
	cout << "\x1b\x0a"; //Line
	cout << "\x1b\x0a"; //Line
	cout << "\x1b\x48\x1b\x43 Breaking:\x1b\x49 Where's the ZX Spectrum?"; //Line 6
	cout << "\x1b\x0a\x1b\x0a";
	cout << " Good question? And no I've not got you";  //Line 7
	cout << "\x1b\x0a";
	cout << " here under fasle pretences (honest!)\x1b\x0a";    //Line 8
	cout << " \x1b\x0a";   //Line 1
	cout << " I did have the idea to start with a ZX\x1b\x0a";  //Line 9
	cout << " Spectrum episode, but when I noticed\x1b\x0a";    //Line 10
	cout << " my old Sony View Data terminals in the\x1b\x0a"; //Line 11
	//      "123456789 123456789 123456789 1234567890" 40 character line
	cout << " loft I thought I'd try and finish off\x1b\x0a"; //Line 12
	cout << " what I was trying to do back in the \x1b\x0a"; //Line 13
	cout << " 90's. I had a look around online and\x1b\x0a"; //Line 14
	cout << " really didn't find much.  Youtube had\x1b\x0a"; //Line 15
	cout << " nothing, other than a short clip of\x1b\x0a"; //Line 16
	cout << " the device from this year.\x1b\x0a";  //Line 17
	cout << " \x1b\x0a So thats the back story of this video\x1b\x0a";   //Line 18
	cout << " \x1b\x0a";  //Line 21
		  //Line 22
	//cout << " \x1b\x0a";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	//      "123456789 123456789 123456789 1234567890" 40 character line
	return 0;
}