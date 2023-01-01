# include <iostream>
# include <windows.h>
using namespace std;
main()
{
 int number1;
 int number2;
 int number3;
 float originalPrice;
 float priceAfterDiscount;
 cout << "enter number of red roses : ";
 cin>> number1;
 cout << " enter numberof white roses : ";
 cin >> number2;
 cout<< "enter number of tulips : ";
 cin >> number3;
 originalPrice = (number1 * 2.00) + (number2 * 4.10) + (number3 * 2.50);
 priceAfterDiscount =originalPrice- (originalPrice * 0.2) ;
 cout<< "Original price is "<< originalPrice << endl;
 cout<< "Price After Discount is :" << priceAfterDiscount;
 
}
