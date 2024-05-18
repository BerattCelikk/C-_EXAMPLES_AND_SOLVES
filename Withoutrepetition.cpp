//WRITE A METHOD THAT CLEANS THE SAME ELEMENTS IN AN ARRAY.(WITHOUT REPETİTİON.)
//EX: 3 5 7 7 5 2 -> 3 5 7 2


#include <iostream>
#include <vector>

int main() {
  int n;
  std::cout << "Enter length of the array: ";
  std::cin >> n;

  std::vector<int> array(n);
  std::vector<int> deletedArray(n);
  int deletedNumber = 0;

  for (int i = 0; i < n; i++) {
    std::cout << "Enter a number: ";
    std::cin >> array[i];
  }

  for (int i = 0; i < n; i++) {
    bool isUnique = true;
    for (int j = 0; j < deletedNumber; j++) {
      if (array[i] == deletedArray[j]) {
        isUnique = false;
        break;
      }
    }

    if (isUnique) {
      deletedArray[deletedNumber] = array[i];
      deletedNumber++;
    }
  }

  std::cout << "New Array: ";
  for (int i = 0; i < deletedNumber; i++) {
    std::cout << deletedArray[i] << " ";
  }

  return 0;
}
