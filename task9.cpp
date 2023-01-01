# include <iostream>
# include <windows.h>
using namespace std;
void reverse(string num1);
main()
{
 string num1;
 while (true){
 cout<< "enter true or false ";
 cin>> num1;
 
 reverse(num1);
 }
 }
void reverse(string num1)
{ 
 if (num1 == "true")
 { 
   cout<< "false"<<endl;
  }
 if (num1 == "false")
 {
  cout<< "true"<<endl;
} 
} 