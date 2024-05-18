//  CODE THE PROGRAM THAT FINDS AND DISPLAYS THE TWIN PRIMES OF AN ARRAY.
//  TWIN PRIME NUMBER => THEY ARE PRIME NUMBERS WITH 2 DIFFERENCES BETWEEN THEM
//  EX => 41 43 OR 17 19

#include <iostream>

int main() {
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    int isprime = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isprime = 0;
            break;
        }
    }

    if (isprime == 1) {
        bool twinFound = false; 
        
        if (n - 2 > 1) {
            bool isTwinPrime = true;
            for (int i = 2; i * i <= (n - 2); i++) {
                if ((n - 2) % i == 0) {
                    isTwinPrime = false;
                    break;
                }
            }
            if (isTwinPrime) {
                std::cout << n - 2 << " and " << n << " are twin numbers." << std::endl;
                twinFound = true;
            }
        }
        
        if (!twinFound && n + 2 > 1) {
            bool isTwinPrime = true;
            for (int i = 2; i * i <= (n + 2); i++) {
                if ((n + 2) % i == 0) {
                    isTwinPrime = false;
                    break;
                }
            }
            if (isTwinPrime) {
                std::cout << n << " and " << n + 2 << " are twin numbers." << std::endl;
                twinFound = true;
            }
        }

        // İkiz asal sayı bulunamadıysa, bir mesaj yazdır.
        if (!twinFound) {
            std::cout << "this number is prime number, but doesn't have a twin prime number." << std::endl;
        }
    } else {
        std::cout << "this number is not a prime number." << std::endl;
    }

    return 0;
}



