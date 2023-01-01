# include <iostream>
using namespace std;

void name(string a);

main()
{
  string a;
  name (a);// function call
  while(true)
  {
   name (a);
  }
}
void name(string a)
{string name;
cout << "Enter your name ";
cin>> name;
 cout<< "name is "<< name << endl;
}