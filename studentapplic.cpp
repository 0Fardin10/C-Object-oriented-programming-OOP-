#include<iostream>
using namespace std;
int main(){
  int n,sum=0;
  //input
  cout<<"how many student :"<<endl;
  cin>>n;
  int student[n];
  for (int i = 0; i < n; i++) {
   cout<<"Marks for student : "<<i+1<<"=";
    cin>>student[i];
  sum= sum+student[i];
  }
  float avr=(float)sum/n;
cout<<"Sum of number is : "<<sum<<endl;
cout<<"avarage number is : "<<avr<<endl;
//maximum
int max=student[0];
int min=student[0];
 for(int i=1;i<n;i++){
   if (max<student[i]) {
     max=student[i];
   }
   if (min>student[i]) {
     min=student[i];
   }
 }
cout<<"maxium is "<<max<<endl;
cout<<"minium is "<<min<<endl;
  }

