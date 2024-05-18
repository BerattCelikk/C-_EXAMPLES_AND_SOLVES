//BODY MASS INDEX CALCULATOR

#include <iostream>

int main(){
    double height;
    std::cout << "enter your height in meter :" << std::endl;
    std::cin >> height;
    double weight;
    std::cout << "enter your weight " << std::endl;
    std::cin >> weight;
    double bodymass=weight/(height*height);
    std::cout << "Your body-mass index = "<<bodymass;
    
    return 0 ;
}