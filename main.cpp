#include <iostream>

int main() {
    std::string name;
    int age;

    // Taking input from the user
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // Use getline to read a full line of text

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Printing the output
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}
