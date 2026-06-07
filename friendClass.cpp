#include<iostream>
using namespace std;
class A{
  private:
    int id= 4657;
    string name="Fardin Zabir";
    friend class B;
};
class B{
  public : 
    void display(A ob){
      cout<<ob.id<<endl;
      cout<<ob.name<<endl;
    }
};

int main(){
A o1;
B o2;
o2.display(o1);
}
