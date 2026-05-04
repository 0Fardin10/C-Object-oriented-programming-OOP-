#include<iostream>
using namespace std;
int main(){
  int n,sum=0;
  cout<<"enter a number:";
  cin>>n;
  
  for (int i = 2; i <=n;i+=i+2) {
    sum += sum+i;
  }
  cout<<sum;
  return 0;
}
