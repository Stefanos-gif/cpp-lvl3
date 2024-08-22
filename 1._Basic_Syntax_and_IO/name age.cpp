#include <iostream>

int main(){

    char na[30];
    std::cout << "Whats your name and age: " ;
    std::cin.getline(na, 30);
    
    std::cout << na;


    return 0;
}
