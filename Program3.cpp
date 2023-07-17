#include <iostream>

void generateSeries(int a) {
    int x = 1;
    std::cout << x << std::endl;
    int count = 1;

    while (count < a) {
        x += 2;
        std::cout << x << std::endl;
        count++;
    }
}

int main() {
    // Example usage:
    generateSeries(5);

    return 0;
}
