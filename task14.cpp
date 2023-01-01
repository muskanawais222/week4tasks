# include <iostream>
using namespace std;
void printMenu();
void aggregate1(float matricMarks, float interMarks, float ecatMarks);
void aggregate2(float matricMarks1, float interMarks1, float ecatMarks1);
void compare(float ecatMarks, float ecatMarks1, string name1, string name2);

main()
{
 int choice;
 string name1,name2;
 char key;
 float matricMarks;
 float interMarks;
 float ecatMarks; 
 float matricMarks1;
 float interMarks1;
 float ecatMarks1;
 float agg1; 
 float agg2;

 printMenu();
 cout<< "Enter choice . ";
 cin>> choice;
 cout<< "You choose"<< choice;
 if (choice == 1)
 { 
   cout<< "Enter name of first student : ";
   cin>>name1;
   cout<< "Enter your matric marks (out of 1100): ";
   cin>> matricMarks;
   cout<< "Enter your inter marks (out of 550): ";
   cin >> interMarks;
   cout<< "Enter your ecat marks";
   cin>> ecatMarks;
   cout << "Press any key to continue...";
   cin >> key;
   system("cls");
   printMenu();
   cout<< "Enter choice: ";
   cin >> choice;
}


if (choice ==2 )
{ 
   cout<< "Enter name of second student :  " ;
   cin >> name2;
   cout<< "Enter your matric marks (out of 1100): ";
   cin>> matricMarks1;
   cout<< "Enter your inter marks (out of 550): ";
   cin >> interMarks1;
   cout<< "Enter your ecat marks";
   cin>> ecatMarks1;
   cout << "Press any key to continue...";
   cin >> key;
   system("cls");
   printMenu();
   
}
if("choice == 3")
 {
  system ("cls");
  aggregate1(matricMarks, interMarks ,ecatMarks);
  cout<<"To continue press any key..";
  cin>>key;
  system("cls");
  printMenu();
}
 if (choice == 4)
{
  system("cls");
  
  aggregate2( matricMarks1,  interMarks1, ecatMarks1);
  cout<<"To continue press any key..";
  cin>>key;
  system("cls");
  printMenu();
}

if ("choice == 5")

{
  system ("cls");
  compare(ecatMarks ,ecatMarks1,name1,name2);
  cout<<"To continue press any key..";
  cin>>key;
  system("cls");
  printMenu();
}

}

void printMenu()
{
 
 cout<< "**************************"<<endl;
 cout<< "**      UET  LAHORE     **"<<endl;
 cout<< "**************************"<<endl;
 cout<< endl;
 cout<< endl;
 cout<< endl;
 
 cout<< "    WELCOME TO UET ADMISSION MANAGEMENT SYSTEM   ";
 cout<< endl;
 cout<< endl;
 cout<< "Press 1 to enter detail of first student."<<endl;
 cout<< "Press 2 to enter detail of second student."<< endl;
 cout<< "press 3 to calculate the aggregate of first student ."<<endl;
 cout<< "Press 4 to calculate the aggregate of second student ."<< endl;
 cout<< "Press 5 to display the student with roll number 1."<< endl;
}
 
void aggregate1(float matricMarks, float interMarks, float ecatMarks)
{
  float agg1= (matricMarks/1100)*30 +(interMarks/550)*30 + (ecatMarks/400)*40;
   cout<<"Aggregate of forst student is "<< agg1<<endl;
}

void aggregate2(float matricMarks1, float interMarks1, float ecatMarks1)
{
   float agg2= (matricMarks1/1100)*30 +(interMarks1/550)*30 + (ecatMarks1/400)*40;
   cout<<"Aggregate of second student is "<< agg2<<endl;

}


void compare(float ecatMarks, float ecatMarks1, string name1, string name2)
{
  if (ecatMarks>ecatMarks1)
 { cout << name1 << endl;
   cout<< name2 <<endl;
}
if (ecatMarks<ecatMarks1)
 { cout << name1 << endl;
   cout<< name2 <<endl;
}
}


