//Combine Concepts: Write a program that asks the user for their name, age, and height. Then, it should output a summary of the input.
//Incorporate Multiple Data Types: Use int, float, std::string, and char in this program.
//Finalize: Ensure proper use of cin for input and cout for output, handle edge cases (like spaces in the name), and wrap it all up nicely.

#include <iostream>
#include <string>

int main(){

    int age;
    float height;
    std::string name;
    char initial;
    std::cout << "Whats your Name, your age, your height and initial: ";
    std::cin >> name; 
    std::cin >> age;
    std::cin >> height;
    std::cin >> initial;

    std::cout << "Hi " << name << " you are " << age << " years old, your height is " << height << " and your initial is: " << initial << std::endl;





    return 0;
}
