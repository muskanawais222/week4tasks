# include <iostream>
# include <windows.h>
using namespace std;
void gotoxy (int x, int y)
{
 COORD coordinates;
 coordinates.X=y;
 coordinates.Y=x;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
 
int main()
{ cout<<"test" ;
  gotoxy(15,15);
  cout<<("My name is Muskan");
  return 0;
 }


