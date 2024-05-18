/*C program containing integers from 1 to 999 whose sum of cubed digits is equal to itself*/


#include <iostream>
#include <cmath>
int main(){
    int digit=0,sum=0,temp;
    for(int i=100;i<=999;i++){
        sum=0;
        temp=i;
        while(temp>0){
            digit=temp%10;
            sum+=std::pow(digit,3);
            digit=0;
            temp/=10;
        }
        if(sum==i){
            std::cout << i <<"  ";
        }
    }
    
    
    
    return 0 ;    
}