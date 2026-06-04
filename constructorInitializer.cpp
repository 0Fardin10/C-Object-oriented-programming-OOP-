#include<iostream>
using namespace  std;
class student  {
public:
const int Fee;
const int examFee;
int id;
student(int x, int y,int z)
  :Fee(x),examFee(y)
{
  cout<<Fee<<endl;
  cout<<examFee<<endl;
  id =z;
  cout<<"Id"<<z<<endl;
}


  };
int main()
{
  student s1(15000,2100,4657);
}
