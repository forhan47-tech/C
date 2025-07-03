#include <iostream>
using namespace std;

int main() {
    int num, positive = 0, negative = 0;

    cout << "Enter 10 integers:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "Number " << i << ": ";
        cin >> num;

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
    }

    cout << "\nTotal Positive Numbers = " << positive << endl;
    cout << "Total Negative Numbers = " << negative << endl;

    return 0;
}
