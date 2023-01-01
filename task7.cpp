# include <iostream>
# include <windows.h>
using namespace std;

void gotoxy(int, int);
void playerMove(int x, int y);
void printMaze();

main()
{
  system ("cls");
  printMaze();
  int x = 8;
  int y = 1;
  while(true)
{

 playerMove(x,y);
 if(x<20)
{
 x= x+1;
}
if (x == 14)
 { 
   gotoxy(x-1,y);
   cout<< " ";
   x = 1;
  
 } 
  
}
}

void printMaze()
 {
 cout<< "###################################################"<<endl;
 cout<< "#                                                 #"<<endl;  
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "#                                                 #"<<endl;
 cout<< "###################################################"<<endl;

}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X=y;
 coordinates.Y=x;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
 
void playerMove(int x, int y)
{
  gotoxy (x-y,y);
 cout<< " ";
 gotoxy(x,y);
 cout<< "p";
 Sleep(200);
}



