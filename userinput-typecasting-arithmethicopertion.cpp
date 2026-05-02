#include<iostream>
using namespace std;
int main(){
  cout<< "write two number:"<< endl;
  int a,b;
  cin>>a>>b;
  // addition
  int sum = a+b;
  cout<<sum<<endl;
  //sub   
  int sub = a-b;
  cout<<sub<<endl;
  //div 
float flo=(float)a/b;//type conv
  cout<<flo<<endl;
  //mod
  double mod= a%b;
  cout<<mod<<endl;
return 0;
}

