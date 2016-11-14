#include <iostream>
#include <string>

using namespace std;

int f(int number) {
    if (number) {
        f(number/2);
        number % 2 ? cout << "1" : cout << "0";
    }
}


int main() {
    string test = "test";
    cout << test << endl;
    f(1023);
    return 0;
}