/*ch[ ] = {'a', 'S', 'd', '*', '1', ........'+'} is a char array with random letters, numbers and special
characters. Create another array just with the special characters of ch[ ]*/


/*#include <iostream>
#include <vector>
int main(){
    int n;
    std::cout << "enter length of the array : "  << std::endl;
    std::cin >> n;
    std::vector<char> array(n) ;
    for(int i=0;i<n;i++){
        std::cout << "enter a character : " << std::endl;
        std::cin >> array[i];
    }
    std::vector<char> specialarray(n) ;
    int specialcounter=0;
    for(int i=0;i<n;i++){
        if(!(array[i] >= 'a' && array[i] <= 'z') && !(array[i] >= 'A' && array[i] <= 'Z') && !(array[i] >= '0' && array[i] <= '9')){
            specialarray[specialcounter]=array[i];
            specialcounter++;
        }
    }
    std::cout << "Special Array :" << std::endl;
    for(int i=0;i<specialcounter;i++){
        std::cout << specialarray[i]<< "   ";
    }
    
    return 0 ;
}*/