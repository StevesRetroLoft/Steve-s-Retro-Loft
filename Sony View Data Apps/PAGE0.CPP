#include <iostream.h>
#include <conio.h>
#include <time.h>
main()
{
	cout << "\x1b\x0c";
	      return 0;
}
// This is small bit of code to clear the screen
// I found occasionaly the viewdata screen would be confused
// with escape codes and the screen would be a bit messed up
// for the pages code I normally implement this before sending the main page
