#include<iostream>
using namespace std;
int main()
{
int n,sum=0,avar;
cout<<"how many numbers do you want: ";
cin>>n;

int num[n];
//input

for (int i = 0; i < n; i++) {
  cin>>num[i];
}
//outputs
for (int i = 0; i < n; i++) {
  cout<<"numbers are : "<<num[i]<<endl;
}
//sum 
for (int i = 0; i < n; i++) {
  sum=sum+num[i];
}
//sum outputs
cout<<"sum are : "<<sum<<endl;
//avarage 
for (int i = 0; i < n; i++) {
   avar=sum/n;
}
cout<<"avarage are :"<<avar;
}
