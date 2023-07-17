#include <iostream>
using namespace std;

void generateSeries(int a) {
    for (int i = 1; i <= a; i++) {
        cout << 2 * i - 1 << " ";
    }
    cout << endl;
}

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    generateSeries(a);

    return 0;
}
