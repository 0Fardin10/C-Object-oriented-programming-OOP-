#include<iostream>
using namespace std;
void values(int *num ){
   *num = 20;
}
int main(){
int x =10;
cout<<"Before calling the function x ="<<x<<endl;
//afrter calling function
//values(x);
values(&x);
  cout<<"After calling the functon is  = "<<x<<endl;

}
