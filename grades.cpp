/* In a class of 20 students, the grades taken by students from a course will be entered from the keyboard. Notes
Once entered, it finds the average of the class, the highest and lowest grade in the class, and appears on the screen.
Write the code of the display program in C++ language */

/*#include <iostream>
#include <vector>
int main(){
    int sum=0;
    std::vector<int> array(20) ;
    for(int i=1;i<=20;i++){
        std::cout << "enter "<<i<<". student's grade = " << std::endl;        
        std::cin >> array[i];
        sum+=array[i];
    }
    double avg=(double)sum/20.0;
    int max=array[1],min=array[1];
    for(int i=2;i<=20;i++){
        if(max<array[i]){
            max=array[i];
        }else if(min>array[i]){
            min=array[i];
        }
    }
    std::cout << "average of grades = "<<avg<< std::endl;
    std::cout << "max grade = "<<max<<" and min grade = "<<min<< std::endl;
    return 0 ;
}*/