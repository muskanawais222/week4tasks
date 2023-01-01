# include <iostream>
using namespace std;
void add ( int number1 ,int  number2);
void pro( int number1  , int number2);
void sub(  int number1 ,int number2);
void divi( int number1 ,int number2);
main()
{
 int number1;
 int number2;
 char operat;
 cout<< "Enter 1st number";
 cin>> number1;
 cout<< "Enter 2nd number";
 cin>> number2;
 cout<<"Enter operator (+,*,/,-)";
 cin>> operat;
 if (operat =='+')
 {
  add(number1 , number2);
 }
 if (operat == '-')
 { 
  sub(number1 , number2);
 }
 if (operat == '*')
 { 
  pro(number1 , number2); 
 }
 if (operat == '/')
{
  divi(number1 , number2); 
 }
}

void add ( int number1 ,int number2)
 { int add ;
 add = number1 + number2;
 cout << "Adding two numbers are " << add << endl;
 }
 void pro( int number1 ,int number2)
{
 int pro;
 pro = number1* number2;
 cout<< " product of two numbers are "<< pro << endl;
}
void sub( int number1 ,int number2)
{
 int sub;
 sub = number1- number2;
 cout<< "subtraction of two numbers are: "<< sub << endl;
}
void divi(int number1 ,int  number2)
{ float divi;
 divi= number1/number2;
 cout<< "division of two nummers are :"<< divi << endl;}


