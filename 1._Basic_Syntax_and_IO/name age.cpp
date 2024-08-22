#include <iostream>

int main() {
    char name[30];
    int age;

    std::cout << "What's your name: ";
    std::cin.getline(name, 30);

    std::cout << "What's your age: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}
