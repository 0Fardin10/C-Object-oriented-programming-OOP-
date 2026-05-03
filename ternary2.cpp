#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a number";
cin>>x;
cout << (x % 2 == 0 ? "Even" : "Odd");
cout<<x;
return 0;
}
