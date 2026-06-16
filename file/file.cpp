#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
  string name;
ofstream file;
file.open("student.txt",ios::out|ios::app);
//file<<"iam  fardin . iam a human ";
cout<<"Enter your name:";
getline(cin,name);
file<<"Welcome"<<name<<endl;
cout<<"data is store";
file.close();
}
