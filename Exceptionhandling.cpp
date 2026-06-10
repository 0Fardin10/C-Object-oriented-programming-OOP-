#include<iostream>
using namespace std;
int main(){
  while(1)
  try{
int num1,num2;                     
cout<<"Enter number 1 :";          
cin>>num1;                         
cout<<"Enter number 2 :";          
cin>>num2;
if (num2==0) {
  throw -1;
}
double result=(double)num1/num2;   
cout<<"result :"<<result;          

  }
catch( int x){
  cout<<"not div try again";
}
}
