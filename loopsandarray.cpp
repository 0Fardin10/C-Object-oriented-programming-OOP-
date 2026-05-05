
#include <iostream>
using namespace std;
int main()
{
    std::cout<<"Write of arry number how many do you want to add : ";
    int n;
    cin >> n;
    int num[n];
    for(int i =0;i<n;i++){
        cout<<"number adding "<<i+1<<endl;
        cin>>num[i];
    }
    for(int i =0;i<n;i++){
        cout<<"numbers are :"<<num[i]<<endl;
    }

    return 0;
}

