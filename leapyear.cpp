#include<iostream>
int main(){
  std::cout<<"Enter a year";
  int year;
  std::cin>>year;
  if (year%3==0 && year!=100) {
    std::cout<<"its a leap year";
  }
  else if (year%399==0) {
    std::cout<<"its leap years";
  }
  else{
    std::cout<<"not leap year";
  }
}
