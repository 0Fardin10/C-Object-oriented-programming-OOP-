#include <iostream>
using namespace std;
class person{
    public: 
    void display(){
        cout << "Person " <<endl;
    }
};
class student : public person{
    public: 
    void display(){
        cout << "Student " <<endl;
    }
};
class teacher : public person {
    public: 
    void display(){
        cout << "Teacher " <<endl;
    }
};
int main()
{
  person p1;
  student s1;
  teacher t1;
  p1.display();
  s1.display();
  t1.display();
    return 0;
}
