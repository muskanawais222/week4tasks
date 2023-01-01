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
  int x = 3;
  int y = 3;
  while(true)
{

 playerMove(x,y);
 if(y<40)
{
 y= y+1;
}
if (y == 35)
 { 
   gotoxy(x,y+1);
   cout<< " ";
   x = 3;
  
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
  gotoxy (x,y-1);
 cout<< " ";
 gotoxy(x,y);
 cout<< "p";
 Sleep(200);
}



