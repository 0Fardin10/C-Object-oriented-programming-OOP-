#include<iostream>
using namespace std;
int main(){
int a=32,b=12,c;
//and &
c=a&b;
cout<<c<<endl;
//or |
c=a|b;
cout<<c<<endl;
//xor ^
c=a^b;
cout<<c<<endl;
//right shift
c=a>>b;
cout<<c<<endl;
//left shift
c=a<<b;
cout<<c<<endl;
//~not 
c=(~a);
cout<<c<<endl;
}