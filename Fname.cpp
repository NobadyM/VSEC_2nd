#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible (Age is 18 or above).";
    } else {
        cout << "You are not eligible (Below 18).";
    }

    return 0;
}
