#include<iostream>
using namespace std;
int main(){
  float n,sum=0;
  cout<<"write a n float number";
  cin>>n;
  for (float i = 1.5; i <=n; i=i+1.5) {
    sum=sum+i;
  }
  cout<<sum;
}
