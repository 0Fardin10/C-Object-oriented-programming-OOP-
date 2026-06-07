#include<iostream>
using namespace std;
class MobileUser{
  public:
    void call(){
      cout<<"Called func"<<endl;
    }
    virtual void sendMessage() = 0;
};
class Rahim : public MobileUser{
  public : 
     void sendMessage(){
   cout<<"Rahim is called"<<endl;
    }
};
class Karim : public MobileUser{
  public:
    void sendMessage(){
      cout<<"Karim is called"<<endl;
    }
};
int main(){
  MobileUser *m;
  Rahim r;
  m = &r;
  m->call();
  m->sendMessage();
  MobileUser *n;
  Karim k;
  n =&k;
  n->sendMessage();
}
