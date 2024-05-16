//SPLIT EVEN AND ODD NUMBERS IN ARRAY.
/*#include <iostream>
#include <vector>
int main(){
    int n;
    std::cout << "enter length of the array: " << std::endl;
    std::cin >> n;
    std::vector<int> array(n) ;
    std::vector<int> even(n) ;
    std::vector<int> odd(n) ;
    int evennumber=0,oddnumber=0;
    for(int i=0;i<n;i++){
        std::cout << "enter a number :" << std::endl;
        std::cin >> array[i];
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            even[evennumber]=array[i];
            evennumber++;
        }else{
            odd[oddnumber]=array[i];
            oddnumber++;
        }
    }
    std::cout << "ODD NUMBERS :" << std::endl;
    for(int i=0;i<oddnumber;i++){
        std::cout << odd[i] << std::endl;
    }
    std::cout << "EVEN NUMBERS :" << std::endl;
    for(int i=0;i<evennumber;i++){
        std::cout << even[i] << std::endl;
    }
    
    
    
    return 0 ;
}*/