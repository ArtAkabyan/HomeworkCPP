#include <iostream>

int main() {


    int heigth = 0;
    // int length = 0;
    std::cin>> heigth;
  

    std::cout << std::endl;
    for(int i = 0; i <= heigth; i++ ){
        for(int j = 0; j < i; j++)
        {   
            std::cout<< '*';
            
        }
            std::cout<< std::endl;

};


    return 0;
}