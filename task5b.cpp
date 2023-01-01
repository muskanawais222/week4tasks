# include <iostream>
using namespace std;
void add(int number1 , int number2);
void multiply(int number1 , int number2);
void divide(int number1 , int number2);
void subtract(int number1 , int number2);



main(){
int number1;
 int number2;
char op;
while(true){

cout << "enter first number";
cin>> number1;
cout<< "enter 2 no";
cin>> number2;

cout<< "enter operator";
cin>> op;
if (op == '+')
{add( number1 ,  number2);}
if (op =='-')
{subtract(number1,number2);}
if (op == '/')
{divide(number1,number2);}
if (op == '*'){
multiply(number1 , number2);}}


}
void add(int number1 , int number2)

{ 
 int add;
 add= number1+ number2;
cout<< "sum is " << add <<endl;}


void multiply(int number1 , int number2){

 int multiply;
 multiply= number1* number2;
cout<< "multiply is "<< multiply<< endl;}

void divide(int number1 , int number2){
 
 int divide;
 divide= number1 / number2;
 cout<< "divide is "<< divide<< endl;}

void subtract(int number1 , int number2){

 int sub;
 sub= number1 - number2;
 cout<< "sub is "<< sub<< endl;}