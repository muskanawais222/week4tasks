# include <iostream>
# include <windows.h>
using namespace std;
void airLines(string name , float price );

main()
{
 string name;
 float price;
 while (true)
{
 cout<< "enter name of country (pakistan , ireland , india, canada , england)";
 cin >> name;
 cout<< "enter ticket price in dollar";
 cin>> price; 
   airLines(name , price);
  }
}
 



void airLines(string name , float price )

{
 float discount1;
 discount1 = price -(price * 0.05);
 float discount2;
 discount2 = price -(price * 0.1);
 float discount3;
 discount3 = price - (price * 0.2);
 float discount4;
 discount4 = price -(price * 0.3);
 float discount5;
 discount5 = price -(price * 0.45);
if (name == "pakistan")
{
  cout << "Discount is "<< discount1 << endl;
} 
if (name == "ireland")
{
  cout << "Discount is "<< discount2 << endl;
}
if (name == "india")
{
  
  cout << "Discount is "<< discount3 << endl;
}
if (name == "england")
{
  
  cout << "Discount is "<< discount4 << endl;
}
if (name == "canada")
{
  
  cout << "Discount is "<< discount5 << endl;
}
}

