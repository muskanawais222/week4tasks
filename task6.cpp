# include <iostream>
# include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printW();
void print2A();
void printI();
void printS();

main ()
{ 
 int x ;
 int y ;
 system ("cls");
 
 printA();
 printW();
 print2A();
 
 printI();
 printS();
 
}
void gotoxy(int x, int y) 
{
 COORD coordinates;
 coordinates.X=y;
 coordinates.Y=x;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
 



void printA()
{
 
 cout<<" * ";
 
 
}
void printW()
{  
 
 gotoxy ( 1,5);
  cout<< "W";


} 
void print2A()
{
gotoxy (2,5);
cout<<"A ";

}
void printI()
{
gotoxy (3,5);
cout<< "I";

}
void printS()
{gotoxy (4,5);
cout<< "S";

}







