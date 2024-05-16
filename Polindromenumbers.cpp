//  PROGRAM THAT FINDS POLINDROME NUMBERS (EX: 14641 , 1001 , 32123) (remains same when its digits are reversed.)

/*#include <iostream>
int main(){
    int n,digit=0,counter=0,sum=0;
    std::cout << "enter a number: " << std::endl;
    std::cin >>n ;
    int temp=n;
    while(temp >0){
        temp/=10;
        counter++;
    }
    temp=n;
    for(int i=0;i<counter;i++){
        digit=temp%10;
        sum=sum*10+digit;
        digit=0;
        temp/=10;
    }
    if(sum==n){
        std::cout << "this number is a polindrome number" << std::endl;
    }else{
        std::cout << "this number is not a polindrome number" << std::endl;
    }
    
    
    
    return 0 ;
}*/