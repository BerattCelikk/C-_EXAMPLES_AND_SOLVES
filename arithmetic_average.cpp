//  FIND ARITHMETIC AVERAGE

#include <iostream>
#include <vector>
int main(){
    int n;
    std::cout << "enter length of the array : " << std::endl;
    std::cin >> n;
    std::vector<int> array(n) ;
    int sum=0;
    for(int i=0;i<n;i++){
        std::cout << "enter a number : " << std::endl;
        std::cin >> array[i];
        sum+=array[i];
    }
    double avg=(double)sum/n;
    std::cout << "Arithmetic Average = "<<avg;
    return 0 ;
}