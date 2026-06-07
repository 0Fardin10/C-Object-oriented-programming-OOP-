#include<iostream>
using namespace std;
class student{
  public:
    int id;
    double gpa;
void display(){
  cout<<id<<endl<<gpa<<endl;
}
};
int main(){
student Alim;
Alim.gpa=3.33;
Alim.id=4576;
Alim.display();

}
