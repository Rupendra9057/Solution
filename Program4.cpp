#include <iostream>
#include <vector>
#include <unordered_map>

std::unordered_map<int, int> countMultiples(const std::vector<int>& numbers) {
    std::vector<int> multiples = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::unordered_map<int, int> counts;

    for (int number : numbers) {
        for (int multiple : multiples) {
            if (number % multiple == 0) {
                counts[multiple]++;
            }
        }
    }

    return counts;
}

int main() {
    std::vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    std::unordered_map<int, int> counts = countMultiples(numbers);

    for (const auto& entry : counts) {
        std::cout << entry.first << ": " << entry.second << ", ";
    }
    std::cout << std::endl;

    return 0;
}
