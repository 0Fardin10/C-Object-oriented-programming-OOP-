#include<iostream>
using namespace std;
int main(){
  int num1 = 5;
  int num2 =5;
  int sum ; 
  int *p1= &num1; 
  int *p2= &num2;
  sum =*p1 + *p2;
  cout<<sum;
}
