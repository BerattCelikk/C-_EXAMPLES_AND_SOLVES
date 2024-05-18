//WRITE A METHOD THAT PRINTS THE SUM OF PRIME NUMBERS UP TO 1000.
#include <iostream>

int main() {
    int sum = 0;
    for (int i = 2; i <= 1000; ++i) {
        bool isPrime = true;
        if (i > 2 && i % 2 == 0) {
            isPrime = false;
        } else {
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            sum += i;
        }
    }
    std::cout << "sum of prime numbers up to 1000 = " << sum;
    return 0;
}

