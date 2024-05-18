/*Calculating the average of odd and even numbers from 10 random numbers*/

#include <iostream>
#include <vector>
int main(){
    std::vector<int> array(10) ;
    for(int i=0;i<10;i++){
        std::cout << "enter"<<i<<". number :" << std::endl;
        std::cin >> array[i];
    }
    std::vector<int> odd(10) ;
    std::vector<int> even(10) ;
    int evennumbers=0,oddnumbers=0;
    for(int i=0;i<10;i++){
        if(array[i]%2==0){
            even[evennumbers]=array[i];
            evennumbers++;
        }else{
            odd[oddnumbers]=array[i];
            oddnumbers++;
        }
    }
    std::cout << "Even Numbers =" << std::endl;
    for(int i=0;i<evennumbers;i++){
        std::cout << even[i] <<"  ";
    }
    std::cout << std::endl;
    std::cout << "Odd Numbers =" << std::endl;
    for(int i=0;i<oddnumbers;i++){
        std::cout << odd[i] <<"  ";
    }
    return 0 ;
}