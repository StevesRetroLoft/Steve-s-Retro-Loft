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
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Steve's Retro Loft - "; //Line 2/3
	cout << "\x1b\x0a"; //Line 4
	cout << "\x1b\x0a"; //Line 5
	cout << "\x1b\x44\x1b\x5d\x1b\x43\     Future Content....Page2"; //Line 6
	cout << "\x1b\x0a";
	cout << " Although I said expensive - it was\x1b\x0a";  //Line 7
	cout << " cheaper that it is today.  I mean I\x1b\x0a";    //Line 8
	cout << " picked up a Toast Rack 128 for œ15.\x1b\x0a";  //Line 9
	cout << " Broken ones tend to go for much more\x1b\x0a";    //Line 10
	cout << " that these days. \x1b\x0a\x1b\x0a"; //Line 11
	//      "123456789 123456789 123456789 1234567890" 40 character line
	cout << " My Spectrum collection includes:\x1b\x0a"; //Line 12
	cout << " An Issue one in a plus case (+32k)\x1b\x0a"; //Line 13
	cout << " An Issue two Rubber Key\x1b\x0a"; //Line 14
	cout << " 3 more Pluses (2x 6A, 1x 3)\x1b\x0a"; //Line 15
	cout << " A couple of lovely 4S Rubber Keys\x1b\x0a"; //Line 16
	cout << " My original 3B (Rubber)\x1b\x0a";  //Line 17
	cout << " 2x 1st gen +2 devices (not the 2a)\x1b\x0a";   //Line 18
	cout << " plus the 128 toast mentioned earlier\x1b\x0a";   //Line 19
	cout << " \x1b\x0a";   //Line 20
	cout << " Turns out I also have a ZX81,Commodore\x1b\x0a";  //Line 21
	cout << " 64 (x2) and a BBC master System \x1b\x0a";                   //Line 22
	cout << " (with double floppy disk drive)\x1b\x0a";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	//      "123456789 123456789 123456789 1234567890" 40 character line
	return 0;
}