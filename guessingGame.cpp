#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  while(1){
  int picNumber,randomNum;
  cout<<"Guess a random number between 1 to 5 : ";
  cin>>picNumber;
    randomNum=1+rand()%5;
    if (picNumber==randomNum) {
      cout<<"You won"<<endl<<endl;
    }
    else {
      cout<<"You lost ... try again"<<endl<<endl;
      cout<<"Random number was : "<<randomNum<<endl;
    }
  }


}
