#include<iostream>
using namespace std;
int main (){
    cout<<"write a number :";
    int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<"number is even";
    }
    else if (n%2!=0)
    {
        cout<<"number is odd";
    }
    else{
        cout<<"other things";
    }
    
    
}