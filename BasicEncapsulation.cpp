#include<iostream>
using namespace std;
class student{
  private:
    string name;
    //setter function
  public:
    void setValue( string x){
      name = x;
    }
    //getter 
    string getter(){
      return name;
    }

};
int main(){
student s1;
s1.setValue("alim");
cout << s1.getter();
}
