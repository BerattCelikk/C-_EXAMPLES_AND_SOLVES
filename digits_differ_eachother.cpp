/*Displaying three-digit digits on the screen of all numbers that differ from each other and in accordance with this rule
write the C program that tells you how many appropriate numbers there are. */


#include <iostream>

int main(){
    for(int i=100;i<=999;i++){
        int hundreds=i/100;
        int tens=(i/10)%10;
        int ones=(i%10);
        
        if((hundreds!=tens)&&(hundreds!=ones)&&(tens!=ones)){
            std::cout << i <<"   ";
        }    
    }
    
    return 0 ;
}
