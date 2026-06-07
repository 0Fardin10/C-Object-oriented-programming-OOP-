#include<iostream>
using namespace std;
int main(){
    cout<<"write number : ";
    int n;
    cin>>n;
    if (n>=80)
    {
        cout<<"your grade is A+";
    }
    else if (n>=60)
    {
       cout<<"your number is A-";
    }
    else if (n>=50){
        cout<<"your grade is B";
    }
    else if (n>=32){
        cout<<"Pass";
    }
    else{
        cout<<"fali";
    }
    
}