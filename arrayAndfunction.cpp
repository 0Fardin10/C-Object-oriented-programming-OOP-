#include<iostream>
using namespace std;
void displayArray(int numbers[],int n){
  for (int  i = 0; i < n; i++) {
    cout<<numbers[i]<<" "<<endl;
    
  }
}

int main(){
int numbers[5]={10,20,30,40,50};
displayArray(numbers,5);
}
