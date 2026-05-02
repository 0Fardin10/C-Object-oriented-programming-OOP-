#include<iostream>
using namespace std;
int main(){
int n1,n2,n3;
 cout<<"write 3 number for compering them";
cin>>n1>>n2>>n3;
if (n1>n2&n2>n3&n1>n3) {
  cout<<n1<<"number is bigger"<<endl;
}
else if (n2>n1&n2>n3) {
  cout<<n2<<"number is bigger"<<endl;
}
else{
  cout<<n3<<"number is bigger"<<endl;
}

}
