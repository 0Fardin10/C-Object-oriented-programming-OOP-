#include<iostream>
using namespace std;
class student{
  public:
    int id;
    double gpa;
    void display(){
      cout<<id<<endl<<gpa<<endl;
    }
    void setValue(int x , double y){
       id=x;
      gpa=y;
    }
};

int main(){
  student Alim;
  Alim.setValue(4657,3.44);
  Alim.display();


}
