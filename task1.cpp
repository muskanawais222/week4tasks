# include <iostream>
using namespace std;
void iselegible(int age);
main()
{
  int age;
  while (true)  
  {
    cout<< "enter age ";
    cin>> age;
  
     iselegible(age);}
  
}




   void iselegible(int age)
{ if (age >= 18)
 { cout<< "eligible to vote "<<endl; }
   if (age < 18)
 {cout<< "not eligible to vote"<<endl; }
}
