#include <iostream>
using namespace std;

int main() {
    long long num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) num = -num;

    while (num > 0) {
        if (num % 10 == 3)
            count++;
        num /= 10;
    }

    cout << "Digit 3 appears " << count << " time(s)." << endl;
    return 0;
}
