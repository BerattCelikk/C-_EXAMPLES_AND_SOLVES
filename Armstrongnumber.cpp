//  PROGRAM THAT FINDS ARMSTRONG NUMBERS(EX: 1^3+5^3+3^3=153)(digit x number of digits)

/*#include <iostream>
#include <cmath>
int main(){
    int n,digit=0,counter=0,sum=0;
    std::cout << "enter a number :" << std::endl;
    std::cin >> n;
    int temp=n;
    
    while(temp >0 ){
        temp/=10;
        counter++;
    }
    temp=n;
    for(int i=0;i<counter;i++){
        digit=temp%10;
        sum=sum+std::pow(digit,counter);
        digit=0;
        temp/=10;
    }
    if(sum==n){
        std::cout << "this number is an armstrong number" << std::endl;
    }else{
        std::cout << "this number is not an armstrong number" << std::endl;
    }
    
    
    
    
    return 0 ;
}*/