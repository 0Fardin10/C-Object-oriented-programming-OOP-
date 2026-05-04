#include<iostream>
using namespace std;
int main(){
  int array[5];
  
  for (int i = 0; i < 5; i++) {
  cout<<"student marks are "<<i+1<<endl;
    cin>>array[i];
  }
  for (int i = 0; i < 5; i++) {
    cout<<"all marks are : "<<array[i]<<endl;
  }
}
