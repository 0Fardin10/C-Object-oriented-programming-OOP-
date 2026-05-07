#include <iostream>                                              
using namespace std;                                             
int main(){                                                      
  int array[2][3];    
  //input
  for (int  row= 0; row <2; row++) {
    for (int col = 0; col < 3; col++) {                          
       cout << "Array[" << row << "][" << col << "] : ";     
      cin>>array[row][col];                                      
    }
    cout<<"\nMatrix is "<<endl;
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {                                  
cout<<array[i][j];
  }                                                              
}                                                                
  }                                                              
}  
