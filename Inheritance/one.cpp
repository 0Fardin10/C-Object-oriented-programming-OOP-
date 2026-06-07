#include<iostream>
using namespace std;
class person{
  public:
    int id;
    string name;
  void display1(){
    cout<<"Id"<<id<<endl;
    cout<<"Name"<<name<<endl;
  }
};
class student : public person{
  //id , namame,and display1
  public:
    float gpa;
    void display2(){
      display1();
      cout<<"gpa"<<gpa<<endl;
    }
};
int main(){
student s1;
s1.id=4456;
s1.name="Zabir";
s1.gpa=3.44;
s1.display2();
}
