# include <iostream>
using namespace std;
void maximum(int number1 , int number2);
void minimum(int number1 ,int number2);
void isequal (int number1 , int number2);
main()
{
  int number1;
  int number2;
  int choice;
  while (true)
 {
   cout<<"Enter 1st number: ";
   cin>> number1;
   cout<< " enter 2nd number: ";
   cin>> number2;
   cout<< "Enter choice (1-3)";
   cin>> choice;
  if (choice == 1)
 {
   maximum ( number1 , number2);
 }
 if (choice == 2)
 {
   minimum ( number1 , number2);
  }
 if (choice == 3)
 {

   isequal(number1 ,number2);
 }
 }

}

void maximum(int number1 , int number2)
{ 
  if (number1 > number2)
  { 
    cout<< number1 << "is maximum number"<<endl;
  }
 if (number1< number2)
 {
 cout<< number2 << " is maximum number"<<endl;
 }
}
void minimum(int number1 ,int number2)
 { if (number1 < number2)
   { 
    cout<< number1   << "is minimum "<< endl;
   }
  if ( number1> number2)
  {
  
    cout<< number2<<" is minimum "<< endl;

  }

}
void isequal (int number1 , int number2)
{
 if (number1 == number2)
 { 
  cout<< " numbers are equal"<<endl;
 }
 if (number1 != number2)
 {
 cout<< " numbers are not  equal"<<endl;
 }
 
}

