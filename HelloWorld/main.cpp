#include <iostream>

int main() {
    std::cout << "Please enter a message to display: ";
    std::string message{};
    std::cin >> message;
    std::cout << "You entered: " << message;
    return 0;
}