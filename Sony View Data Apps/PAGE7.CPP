#include <iostream.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
main()
{
	cout << "\x1b\x0c";

	cout << "\x1b\x44\x1b\x5d\x1b\x4d\x1b\x43SteveText\x1b\x45\x1b\x4c\x1b\x5c";
	time_t t;
	time(&t);
	cout << ctime(&t);
	cout << "\x1b\x44\x1b\x5d\x1b\x43 Steve's Retro Loft - Test Card 2\x1b\x0a";
	cout << "\x1b\x44\x1b\x5d\x1b\x43 Example of Graphic Characters\x1b\x0a";
	cout << "\x1b\x44\x1b\x5d\x1b\x43 from 91 (dec) to 127 (dec).\x1b\x0a\x1b\x0a";
	int tick2=91;
	unsigned char ch;
	ch =91;

		for (;;)
	{
		printf("Dec:%i",ch);
			cout <<"= ";
			//printf("\x1b\x%x", ch);
			cout << "\x1b\x54" << hex << ch;
			cout <<" ";
			cout <<"\x1b\x45\x1b\x4c\x1b\x5c";
			ch++;
			tick2++;
			if (ch>127){
				cout << "\x1b\x0a\x1b\x0a\x1b\x44\x1b\x5d\x1b\x43 (c) Stephen Cooper 1996/2021";
				return 0;
			}
	}
}