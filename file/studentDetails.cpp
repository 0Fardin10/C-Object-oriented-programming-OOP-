#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
string name;
int age;
ofstream file;
file.open("details.txt",ios::out|ios::app);
   cout<<"Only 3 student name and age"<<endl;

  for (int i = 1; i <= 3; i++) {
     cout<<"Enter your name : "<<endl;
    getline(cin,name);
    cout<<"Enter the age: "<<endl;
    cin>>age;
    file<<name<<age<<endl;
    cin.ignore();
  }
   file.close();
}
