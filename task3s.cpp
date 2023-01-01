# include <iostream>
using namespace std;

void checkResult(int marks);

main(){

int marks;
cout << " enter marks";
cin>> marks;

checkResult(marks);

}




void checkResult (int marks)
{
 if (marks>=50){ 
 	cout<< "you are pass"<<endl;
 }



 if (marks< 50){
cout<<"you are fail"<<endl;
}
}


