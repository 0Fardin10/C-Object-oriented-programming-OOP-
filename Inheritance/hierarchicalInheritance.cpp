#include<iostream>
using namespace std;
class teacher{
  public :
    void display(){
      cout<<"Exit"<<endl;
    }
};
class student : public teacher{

};
class stuff : public teacher{};

int main(){
stuff a1;
a1.display();
}

