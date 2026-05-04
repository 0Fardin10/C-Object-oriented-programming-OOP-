#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,sum=0;
  cout<<"write power number";
  cin>>n;
  for (int i = 1; i <=n; i++) {
    sum=sum+(int)pow(i,5);
  }
  cout<<sum;
  return 0;
}
