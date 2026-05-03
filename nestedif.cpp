#include<iostream>
using namespace std;
 int main (){
   int mark;
   cout << "enter mark:";
       cin>>mark;
    if (mark>=80) {
      cout<<"A+";
         if (mark>=70){
           cout<<"A";}
           else if (mark>=60) {
             cout<<"B";}
             else if (mark>=40) {
               cout<<"B-";
             }
           
         
       }   
    else{
      cout<<"fail";
    }
  return 0;
}
