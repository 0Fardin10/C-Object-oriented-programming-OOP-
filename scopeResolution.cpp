#include <iostream>
using namespace std;
int x=10;//global variable.
int main()
{
    int x =20;//local  variable
    cout<<::x;//using scope resolution acces for global variable
    return 0;
}
