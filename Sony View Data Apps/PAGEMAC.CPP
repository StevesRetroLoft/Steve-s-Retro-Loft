#include <iostream.h>
#include <conio.h>
#include <time.h>
main()
{
	cout << "\x1b\x0c";
	time_t t;
	time(&t);
	cout << "\x1b\x44\x1b\x5d\x1b\x43\SteveText  " << ctime(&t) ; //Line1
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Welcome to Steve's Retro Loft"; //Line 2/3
	cout << "\x1b\x0a"; //Line 4
	cout << "\x1b\x0a"; //Line 5
	cout << "\x1b\x48\x1b\x43 Breaking:\x1b\x49 1st page edited on a Mac";       //Line 6
	cout << "\x1b\x0a";
	cout << " Well this is nice, it's the first time";                     //Line 7
	cout << "\x1b\x0a";
	cout << " I've actually got a MS-DOS Floppy Disk";                         //Line 8
	cout << "\x1b\x0a";
	cout << " to work in Mac OS.  Maybe I needed to";                         //Line 9
	cout << "\x1b\x0a";
	cout << " format it and copy data via DOS first?";                         //Line 10
	cout << "\x1b\x0a";
	cout << "";			 //Line 11
	// 40 ch"123456789 123456789 123456789 1234567890"
	cout << " Any way on with the testing............"; //Line 12
	cout << "\1xb\x0a ";                    //Line 13
	cout << "\x1b\x0a";
	cout << " ";         //Line 14
	cout << "\x1b\x0a";
	cout << "";                  //Line 15
	cout << "\x1b\x0a";
	cout << "";                  //Line 16
	cout << "\x1b\x0a";
	cout << "";                  //Line 17
	cout << "\x1b\x0a";
	cout << "\x1b\x0a Hello World";   //Line 18
	cout << "\x1b\x0a";
	cout << "";                  //Line 19
	cout << "\x1b\x0a";
	cout << "";                   //Line 20
	cout << "\x1b\x0a";
	cout << "";                   //Line 21
	cout << "\x1b\x0a";
	cout << "";                   //Line 22
	cout << "\x1b\x0a";
	cout << "";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	return 0;
}