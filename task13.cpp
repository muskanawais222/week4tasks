# include <iostream>
using namespace std;
main()
{
 int holidays;
 float workingDays;
 float timeForGame;
 int difference;
 int hours;
 int min;
 
 cout<< "Enter number of holidays ";
 cin >> holidays;
 workingDays = (365-holidays);
 cout<<  "Working days are "<<workingDays<<endl;
  
 timeForGame = ((workingDays * 63) + (holidays * 127));
 cout<< "Time for game is "<< timeForGame<< endl; 
 difference = ( timeForGame - 30000 );
 if (timeForGame< 30000)
{
   hours = difference/60;
   min = hours%60;
   cout<< "He can sleep ="<< difference << " minutes per year. "<<endl;
   cout<< "he can sleep= "<< hours << "hours and "<< min <<" minutes";
}
 
 if (timeForGame > 30000)
{ 
   hours= difference/60;
   min = hours%60;
   cout<< "Tom will run away . " <<endl;
   cout<< "He can sleep =" << difference << " minute per year."<< endl;
   cout<< "He can sleep = " << hours << "  hours and"<< min << " minutes";
  
 }
 }