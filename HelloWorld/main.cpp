#include <iostream>

int getValueFromUser(const std::string &userPrompt);

int add(int x, int y);

int main() {
    int userValue = getValueFromUser("Please enter a value");
    int secondUserValue = getValueFromUser("Please enter a second value");
    std::cout << "output: " << add(userValue, secondUserValue);
}

int getValueFromUser(const std::string &userPrompt) {
    int userInput{0};
    std::cout << userPrompt << ": ";
    std::cin >> userInput;
    return userInput;
}

