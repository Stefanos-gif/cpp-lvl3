#include <iostream>
#include <string>

int main() {
    // Declare and initialize variables
    int age = 15;
    float height = 6.9f;
    double distance = 123456.789;
    char initial = 'S';
    std::string name = "Stefanos";
    bool isStudent = true;
    long population = 7800000000;

    // Perform operations
    int yearOfBirth = 2024 - age;
    std::string fullName = name + " " + initial + ".";
    bool isTall = height > 6.0f;

    // Output the results
    std::cout << "Name: " << fullName << std::endl;
    std::cout << "Year of Birth: " << yearOfBirth << std::endl;
    std::cout << "Is Tall: " << std::boolalpha << isTall << std::endl;
    std::cout << "World Population: " << population << std::endl;

    return 0;
}
