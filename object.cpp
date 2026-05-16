#include<iostream>
using namespace std;
class student {
  public:
  int id;
  double gpa;
};
int main (){
student alim,moon;
alim.gpa = 3.50;
alim.id=4657;
cout<<"alim info"<<alim.gpa<<endl<<alim.id<<endl;
moon.id=4687;
moon.gpa=4.00;
cout<<"moon info"<<moon.id<<endl<<moon.gpa;
}
