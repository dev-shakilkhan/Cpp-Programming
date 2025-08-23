#include <iostream>
#include <string>
using namespace std;

// Generic template for swapping
template <typename T>
void swapp(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

// Specialization for string
template <>
void swapp<string>(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 20, y = 50;
    string firstName = "Shakil";
    string lastName = "Khan";

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    cout << "Before swap: firstName = " << firstName << ", lastName = " << lastName << endl;

    swapp(x, y);
    swapp(firstName, lastName);

    cout << "After swap: x = " << x << ", y = " << y << endl;
    cout << "After swap: firstName = " << firstName << ", lastName = " << lastName << endl;

    return 0;
}
