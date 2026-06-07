#include<iostream>
#include<string>
using namespace std;
class student{
  private:
    string name;
  public:
    int id;
    double gpa;
    void setValue(string x){
      name =x;;
    }
    string getValue(){
      return name;
    }
void display(){
  cout<<"Name :"<<getValue()<<endl<<"Id:"<<id<<endl<<"GPA:"<<gpa<<endl ;
}
};
int main(){
  student s1;
  s1.id = 4657;
  s1.gpa = 4.00;
  s1.setValue("Fardin Zabir");
  
s1.display();

}
