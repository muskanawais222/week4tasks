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
 gotoxy(x,y);
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
 
 cout<<" * "<<endl;
 cout<<"* * "<<endl;
 cout<<"***"<<endl;
 cout<<"* * "<<endl;
 cout<<"* * "<<endl;
 
  cout<<endl;
}

  void printW()
{  
  cout<< "*  *  * "<<endl;
  cout<< "* * * *"<<endl;
  cout<< "* * * * "<<endl;
  cout<< "**   ** "<<endl;
  cout<< "**   **"<<endl;
  cout<<endl;
 } 

void print2A() 
{
  
 cout<<" * "<<endl;
 cout<<"* * "<<endl;
 cout<<"***"<<endl;
 cout<<"* * "<<endl;
 cout<<"* * "<<endl;

  cout<<endl;

}
void printI()
{
 cout<<"****** "<<endl;
 cout<<"  ** "<<endl;
 cout<<"  **"<<endl;
 cout<<"  ** "<<endl;
 cout<<"******  "<<endl;

  cout<<endl;
}
void printS()
{ 
  cout<<"  ***"<<endl;
  cout<<" *"<<endl;
  cout<<"  **"<<endl;
  cout<<"    *"<<endl;
  cout<<" ***"<<endl;

  cout<<endl;
}







