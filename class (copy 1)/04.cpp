#include <iostream>
using namespace std;


int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;

    int result = sum(x, y, z); 

    cout << "Sum: " << result << endl;

    return 0;
}
