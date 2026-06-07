#include<iostream>
using namespace std;
class student{
  public:
    int id;
    double gpa;
    void display(){
      cout<<"ID:"<<id<<endl<<"Gpa:"<<gpa<<endl;
    }
student(int x,double y){
  id =x;
  gpa=y;
}
};
int main(){
student alim(5657,3.22);
  alim.display();
}
