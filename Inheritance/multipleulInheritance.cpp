#include<iostream>
using namespace std;
class A{
  public:
    void display(){
      cout<<"Exit"<<endl;
    }
};
class B : public A{
  public:
};
class C : public B{
 public:
};
int main(){
C a1;
a1.display();
}
