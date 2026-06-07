#include<iostream>
using namespace std;
class student{
  public :
    int id;
    double gpa;
student(int x , double y){
  id =x;
  gpa =y;
}
student(){
  cout<<"Default constructor "<<endl;
  id =0;
  gpa =0;
}
    
void display(){
  cout<<"GPA is"<<gpa<<endl<<"ID"<<id<<endl;
}
};


int main(){ 
student Alim(4657,3.44);
Alim.display();
  student s1;
  s1.display();
}

