//  PROGRAM THAT FINDS STANDARD DEVIATION OF ARRAY.

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, sum = 0;
    std::cout << "Enter the length of the array: " << std::endl;
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "Array length must be positive." << std::endl;
        return 1;           //IF n<=0 it must give error.(return 1)
    }

    std::vector<int> array(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> array[i];
        sum += array[i];
    }

    double avg = static_cast<double>(sum) / n;
    double sum_squared_diff = 0;

    for (int i = 0; i < n; i++) {
        sum_squared_diff += std::pow(array[i] - avg, 2);
    }

    double variance = sum_squared_diff / n;
    double stddev = std::sqrt(variance);

    std::cout << "Standard deviation of the array = " << stddev << std::endl;

    return 0;
}

