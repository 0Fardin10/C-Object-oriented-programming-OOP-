#include <iostream>
#include "test.h"

using namespace std;

int main()
{
    test t1;
    //t1.display();
    test *p=&t1;
    p ->display();

    return 0;
}
