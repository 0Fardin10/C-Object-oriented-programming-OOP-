#include<iostream>
using namespace std;
class A{
  public:
int ID;
int since;
void display1(){
  cout<<"ID:"<<ID<<endl;
  cout<<"Year:"<<since<<endl;
}
};
class B : public A{
  public:
string name;
void display2(){
display1();
cout<<"Name:"<<name<<endl;
}

};

int main(){
A a1;
a1.ID=1122;
a1.since=1982;
a1.display1();
}
