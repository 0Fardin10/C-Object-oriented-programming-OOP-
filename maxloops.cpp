#include <iostream>
using namespace std;
int main()
{
    cout<<"Write down how many number do you wants : ";
    int n;
    cin>>n;
    int array[n];
    for(int i =0;i<n;i++){
        cout<<"write number : "<<i+1<<endl;
    
        cin>>array[i];
    }
//showing array elements
for(int i =0;i<n;i++){
    cout<<"elements are in arrays : "<<array[i]<<endl;
}
// compering and max number
int max ;
max=array[0];
for(int i =1;i<n;i++){
    if(array[i]>max){
max = array[i];
    }
}
cout<<"max number is "<<max<<endl;
return 0;
}
