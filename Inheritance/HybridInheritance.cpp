#include<iostream>
using namespace std;
class A{
  public :
    void display(){
      cout<<"Class A"<<endl;}
};
class B : virtual public A{
  public:
    void display2(){
    cout<<"Class B"<<endl; }
};
class C : virtual public A,public B{
  public:
void display3(){
  display();
  display2();
  cout<<"Everything is "<<endl;
}
};
int main(){
C a1;
a1.display3();
};
