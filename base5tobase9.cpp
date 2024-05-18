//  PROGRAM THAT CONVERTİNG BASE-5 SYSTEM NUMBERS TO BASE-9 SYSTEM.


#include <iostream>

int main(){
    int base5,counter=0,digit=0,base10=0;
    std::cout << "enter a number in base5 system :" << std::endl;
    std::cin >> base5;
    int temp=base5;
    while(temp>0){
        temp/=10;
        counter++;
    }
    temp=base5;
    for(int i=0;i<counter;i++){
        for(int j=0;j<i;j++){
            temp/=10;
        }
        int exponential=1;
        for(int k=0;k<i;k++){
            exponential=exponential*5;
        }
        base10=base10+exponential*(temp%10);
    }
    std::cout << "this number in base10 system = "<<base10 << std::endl;
    counter=0;
    temp=base10;
    while(temp>0){
        temp/=10;
        counter++;
    }
    temp=base10;
    std::cout << "this number in base9 system = ";
    for(int i=counter;i>0;i--){
        for(int j=counter;j>1;j--){
            temp=temp/9;
        }
        std::cout << temp%9 ;
        temp=base10;
    }
    return 0 ;
}