#include <iostream>
using namespace std;
class fz {
    public:
    void display(){
        cout<<"display is called"<<endl;
    }
};
int main()
{
fz s1;
fz *p=&s1;
s1.display();
p->display();

    return 0;
}
