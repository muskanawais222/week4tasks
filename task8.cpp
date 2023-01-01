# include <iostream>
# include <windows.h>
using namespace std;
void isequal(int num1 ,int num2);
main()
{
 int num1;
 int num2;
 while (true)
{
 cout<< "Enter an integer";
 cin >>num1;
 cout<< "enter an integer";
 cin>>num2;
 
 isequal(num1, num2);}
}
void isequal(int num1 ,int num2)
{ if (num1 == num2)
  {
    cout<< "true"<<endl;



} 
if (num1 != num2)
 { 
  cout << "false"<< endl; 
} 
}