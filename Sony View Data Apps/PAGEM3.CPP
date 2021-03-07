#include <iostream.h>
#include <conio.h>
#include <time.h>
main()
{
	cout << "\x1b\x0c";
	time_t t;
	time(&t);
	cout << "\x1b\x44\x1b\x5d\x1b\x43\SteveText  " << ctime(&t) ; //Line1
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Steve's Retro Loft - Info Page 2"; //Line 2/3
	cout << "\x1b\x0a"; //Line 4
	cout << "\x1b\x0a"; //Line 5
	cout << "\x1b\x0a\x1b\x43        Serial Port Settings";       //Line 6
				   // 40 ch"123456789 12        3456789 123456789 1234567890"
	cout << "\x1b\x0a\x1b\x0a";
	cout << " The serial port speed on the laptop\x1b\x0a";                     //Line 7
	cout << " was set to 1200 Baud, 7 Data bits\x1b\x0a";                         //Line 8
	cout << " 1 Stop bit, Even Parity \x1b\x0a";                         //Line 9
	cout << " \x1b\x0a";                         //Line 10
	cout << " To save configuring on each start up I\x1b\x0a"; //Line 11
	// 40 ch"123456789 123456789 123456789 1234567890"
	cout << " added the mode command below to the\x1b\x0a"; //Line 12
	cout << " AUTOEXEC Batch file. \x1b\x0a"; //Line 13
	cout << " \x1b\x0a"; //Line 14
	cout << " MODE COM1,1200,e,7,1\x1b\x0a"; //Line 15
	cout << "\x1b\x0a"; //Line 16
	cout << " I found the com port redirect didn't\x1b\x0a";  //Line 17
	cout << " work too well on Windows XP, so I went\x1b\x0a";   //Line 18
	cout << " back to MS-DOS - that also made my old\x1b\x0a";   //Line 19
	cout << " laptop a lot quieter!! \x1b\x0a";   //Line 20
	cout << " \x1b\x0a";  //Line 21
	cout << "\x1b\x0a";                   //Line 22
	cout << "\x1b\x0a";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	return 0;
}