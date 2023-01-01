# include <iostream>
using namespace std;
void calculatebill(string day , int amount);
main()
{
 string day;
 int amount;
 float bill;
 cout<< "Enter a day";
 cin >> day;
 cout<< "Enter amount";
 cin >> amount;
 calculatebill (day , amount);
} 
void calculatebill(string day , int amount)
{
  float payableAmount;
 
  
  if (day=="sunday")
 {
 
  payableAmount = amount -(amount/100 *10);
 }
if (day!="sunday")
 {
 
  payableAmount =amount - (amount/100 *5 );
 }

 cout<<"payableAmount is "<< payableAmount<<endl;
} 