/*Searching for Elements in the Array*/

/*#include <iostream>
#include <vector>
int main(){
    int n;
    std::cout << "enter length of the array:" << std::endl;
    std::cin >> n;
    std::vector<int> array(n) ;
    for(int i=0;i<n;i++){
        std::cout << "enter a number" << std::endl;
        std::cin >> array[i];
    }
    std::cout << "Your array =" << std::endl;
    for(int i=0;i<n;i++){
        std::cout << array[i] <<"  ";
    }
    std::cout <<"\n";
    int number;
    std::cout << "choose a number" << std::endl;
    std::cin >> number;
    int found=0,found_index=0;
    for(int i=0;i<n;i++){
        if(number==array[i]){
            found=1;
            found_index=i;
            break;
        }
    }
    if(found==1){
        std::cout << "Your number is in "<<found_index+1<<"th.";
    }else{
        std::cout << "Your number is not in this array" << std::endl;
    }
    return 0 ;
}*/