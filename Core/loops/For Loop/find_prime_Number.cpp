#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    cout << "\nPrime numbers between " << start << " and " << end << " are:\n";

    for (int n = start; n <= end; n++) {
        if (n <= 1) continue; // Skip numbers less than or equal to 1

        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }

    cout << endl;
    return 0;
}
