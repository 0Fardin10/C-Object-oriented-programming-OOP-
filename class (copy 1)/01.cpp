#include <iostream>
using namespace std;
int main(){
  int num[3];
  cout<<"Enter 3 numbers:";
  for (int i = 0; i <3; i++) {
      cin>>num[i];
  }
  int max= num[0];
 int min = num[0];
for (int i = 0; i < 3; i++) {
  if (num[i]>max) {
max=num[i];
if (num[i]<min) {
  min=num[i];
}
}
}
cout<<"Largest number is : "<<max<<endl;
}
