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
	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43 Steve's Retro Loft"; //Line 2/3
	cout << "\x1b\x0a"; //Line 4
	cout << "\x1b\x0a"; //Line 5
	cout << " \x1b\x0a";
	cout << "\x1b\x44\x1b\x5d\x1b\x43\      Future Content....Page3"; //Line 6
	cout << "\x1b\x0a";
	cout << " Along with the spectrum collection\x1b\x0a";  //Line 7
	cout << " I have a number of peripheral devices\x1b\x0a";    //Line 8
	cout << " like the ZX Interface 1 and Microdrive\x1b\x0a";  //Line 9
	cout << " \x1b\x0a";    //Line 10
	cout << " I do plan to do some videos on all my \x1b\x0a"; //Line 11
	//      "123456789 123456789 123456789 1234567890" 40 character line
	cout << " stuff when I can. Looking initially \x1b\x0a"; //Line 12
	cout << " at a video at least once a month.\x1b\x0a"; //Line 13
	cout << " I think YouTube likes weekly, but at\x1b\x0a"; //Line 14
	cout << " the moment whilst I set it up\x1b\x0a"; //Line 15
	cout << " i'll limit it so I can get used to the\x1b\x0a"; //Line 16
	cout << " process etc. After all this video has\x1b\x0a";  //Line 17
	cout << " taken me ages.\x1b\x0a";   //Line 18
	cout << " \x1b\x0a";   //Line 19
	cout << " \x1b\x0a";   //Line 20
	cout << " Right - enough of me going on, next up\x1b\x0a";  //Line 21
	cout << " are some test and information slides.\x1b\x0a";                   //Line 22
	cout << " \x1b\x0a";                   //Line 23
	cout << "\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021"; //Line 24
	//      "123456789 123456789 123456789 1234567890" 40 character line
	return 0;
}