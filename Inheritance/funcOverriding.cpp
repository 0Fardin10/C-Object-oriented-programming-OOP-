#include <iostream>
using namespace std;
class person{
    public:
    void display(){
        cout<<"Person called"<<endl;
    }
};
class student : public person{
    public : 
    void display (){
        cout<<"Student called"<<endl;}
}; 
class teacher : public person{
    public:
    void display(){
        cout<<"Teacher called"<<endl;
    }
};
int main()
{
person p1;
p1.display();
student s1;
s1.display();
teacher t1;
t1.display();

    return 0;
}
