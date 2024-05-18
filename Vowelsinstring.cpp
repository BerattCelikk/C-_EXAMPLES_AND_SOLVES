//PROGRAM THAT FINDS VOWELS IN STRING.

#include <iostream>
#include <string>

bool isVowel(char c) {
    char lowercaseChar = tolower(c);
    return (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u');
}

int main() {
    std::cout << "Enter a character or a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "Vowels = ";
    if(input.length() == 1) {
        if(isVowel(input[0])) {
            std::cout << input[0] << " ";
        }
    } else {
        for(char c : input) {
            if(isVowel(c)) {
                std::cout << c << " ";
            }
        }
    }

    return 0;
}

