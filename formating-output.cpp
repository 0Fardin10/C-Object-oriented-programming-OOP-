#include<iostream>
#include<iomanip>
using  namespace std;
int main(){
    cout<<"writeing a and b valuse";
    
int a,b;
cin >> a >> b;
cout<<fixed<<setprecision(3);
//cout<<noshowpoint
//cout<<showpoint;
float add=a+b;


cout<<setw(20)<<add<<endl;
float sub=a-b;

cout<<setw(20)sub<<endl;

float multi=a*b;
cout<<setw(20)<<multi<<endl;
float div=(float)a/b;
cout<<setw(20)<<div<<endl;
return 0;
}