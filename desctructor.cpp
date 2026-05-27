#include <iostream>
using namespace std;
class c1{
  public: 
  c1(){
      cout<<"Default consctructor is called"<<endl;
  };//default consctructor 
  ~c1(){
      cout<<"Default desctructor is called"<<endl;
  };
  void display(){
      cout<<"Display function is called"<<endl;
  }
};
int main()
{
c1 ob;
ob.display();
    return 0;
}
