#include <iostream>

int main (){

    int num1 = 10
    int num2 = 20
    int num3 = 30
    std::cin >> num1 >> num2 >> num3
    if(num1 > num2 && num1 > num3){
        std::cout<< num1
    else if(num2 > num3)
        std::cout<<num2 
    else
        std::cout<<num3
    return 0
    }
}