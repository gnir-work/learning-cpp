#include <iostream>
#include <string>
#include "myMath.h"
#include "consts.h"

int getValueFromUser(const std::string &userPrompt);

int main() {
    int userValue = getValueFromUser("Please enter a value");
    int secondUserValue = getValueFromUser("Please enter a second value");
    std::cout << "output: " << add(userValue, secondUserValue) << std::endl;
    std::cout << "output as char: " << static_cast<char>(add(userValue, secondUserValue)) << std::endl;
    std::string testString{"hello there my friend"};
    std::cout << testString;
}

int getValueFromUser(const std::string &userPrompt) {
    int userInput{0};
    std::cout << userPrompt << HelloWorldConsts::userPromptSuffix;
    std::cin >> userInput;
    return userInput;
}

