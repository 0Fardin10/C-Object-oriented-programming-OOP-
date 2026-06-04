#include<iostream>
using namespace std;
class A{
  public:
void display(){
  cout<<"Exit"<<endl;
}
};
class B : public A{

};
class C : public A{

};
class D : public A{

};
int main(){
D a1;
a1.display();
}
