/*Code the program that creates an array with the digits of a long int number that has more
than 10 numbers*/

/*#include <iostream>
#include <vector>

int main() {
    long int number = 12345678910;
    std::vector<int> array(11); 

    long int temp = number;
    int counter = 0;

    while (temp > 0) {
        temp /= 10;
        counter++;
    }

    temp = number;

    for (int i = counter - 1; i >= 0; i--) {
        array[i] = temp % 10;
        temp /= 10;
    }

    std::cout << "Array: ";
    for (int i = 0; i < counter; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}*/

