#include<iostream>
using namespace std;
class student {
  public : 
  int id;
  double cgpa;
  void display(){
    cout<<id<<"  "<<cgpa<<endl;
  }

};


int main(){

  student alim,moon;
  alim.id=4657;
  alim.cgpa=3.44;
  alim.display();
  moon.id=4667;
  moon.cgpa=3.60;
  moon.display();
}
