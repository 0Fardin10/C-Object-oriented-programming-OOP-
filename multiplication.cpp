#include<iostream>
using namespace std;
int main(){
  cout<<"enter a int number ";
  int num;
  cin>>num;
  for (int  i = 0; i < 10; i++) {
    cout<<num<<"x"<<i<<"="<<(num*i)<<endl;
    
  }
}
