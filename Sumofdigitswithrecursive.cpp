//WRITE A METHOD THAT FINDS THE SUM OF THE DIGITS OF THE ENTERED NUMBER.(WITH USING RECURSIVE FUNCTION).

#include <iostream>
int main(){
    int n,digit=0,counter=0,sum=0;
    std::cout << "enter a number: " << std::endl;
    std::cin >> n;
    int temp=n;
    while(temp>0){
        temp/=10;
        counter++;
    }
    temp=n;
    for(int i=0;i<counter;i++){
        digit=temp%10;
        sum+=digit;
        digit=0;
        temp/=10;
    }
    std::cout << "sum of digit = "<<sum;
    return 0;
}
