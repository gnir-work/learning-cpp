#include <iostream>

int getValueFromUser(const std::string& userPrompt) {
    int userInput{0};
    std::cout << userPrompt;
    std::cin >> userInput;
    return userInput;
}

void printNumberTimesTwo(int number) {
    std::cout << number * 2;
}

int main() {
    int userValue = getValueFromUser("Please enter a value");
    printNumberTimesTwo(userValue);
}
