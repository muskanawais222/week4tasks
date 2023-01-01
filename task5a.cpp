# include <iostream>
# include <windows.h>
using namespace std;
void myname();
void gotoxy(int x, int y);

main()
{
system ("cls");

myname();
return 0;


}
void myname()
{

  gotoxy(20,16);
  cout<< "  **        ** **    **   ****  **    **   **   **     ** "<<endl;
  gotoxy(20,17);
  cout<< "  ***      *** **    **  **     **   **  **  ** ***    ** "<<endl;
  gotoxy(20,18);
  cout<< "  ** *    * ** **    **   **     ** **   **  ** ** *   ** "<<endl;
  gotoxy(20,19);
  cout<< "  **  *  *  ** **    **     **   ****    ****** **  *  ** "<<endl;
  gotoxy(20,20);
  cout<< "  **   **   ** **    **      **  ** **   **  ** **   * ** "<<endl;
  gotoxy(20,21);
  cout<< "  **        ** **    **      **  **  **  **  ** **    *** "<<endl;
  gotoxy(20,22);
  cout<< "  **        **  ******   ****    **   ** **  ** **     ** "<<endl;

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=y;
 coordinates.Y=x;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
 




