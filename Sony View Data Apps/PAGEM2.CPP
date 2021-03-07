#include <iostream.h>
#include <conio.h>
#include <time.h>
main()
{
	cout << "\x1b\x0c";
	time_t t;
	time(&t);
	cout << "\x1b\x44\x1b\x5d\x1b\x43\SteveText  " << ctime(&t) ; //Line1
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Steve's Retro Loft - Info Page 1"; //Line 2/3
	cout << "\x1b\x0a"; //Line 4
	cout << "\x1b\x0a"; //Line 5
	cout << "\x1b\x43       Pin-out for Serial Cable";       //Line 6
				   // 40 ch"123456789 12        3456789 123456789 1234567890"
	cout << "\x1b\x0a";                     //Line 7
	cout << "\x1b\x0a";
	cout << " A few links are required on each end.";                         //Line 8
	cout << "\x1b\x0a\x1b\x0a";
	cout << " DB25 (Sony)   DB9 (HP Omnibook 6000)\x1b\x0a";                         //Line 9
	cout << " 2             2 \x1b\x0a";                         //Line 10
	cout << " 3             3 \x1b\x0a"; //Line 11
	// 40 ch"123456789 123456789 123456789 1234567890"
	cout << " 4             8 \x1b\x0a"; //Line 12
	cout << " 5             7 \x1b\x0a"; //Line 13
	cout << " 7             6 \x1b\x0a"; //Line 14
	cout << " 6+8+20        1+4+6 \x1b\x0a"; //Line 15
	cout << "\x1b\x0a"; //Line 16
	cout << " The linked pins did confuse me, but\x1b\x0a";  //Line 17
	cout << " It's how the cable metered out. \x1b\x0a";   //Line 18
	cout << " Probably what confused matters is I\x1b\x0a";   //Line 19
	cout << " only had access to a Cat 5 to DB25\x1b\x0a";   //Line 20
	cout << " converter at the time and other end \x1b\x0a"; //Line 21
	cout << " was a normal DB9 cable. The colours on\x1b\x0a"; //Line 22
	cout << " both the adapter and cable didn't match\x1b\x0a";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	return 0;
}