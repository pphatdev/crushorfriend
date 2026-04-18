#include <iostream>
#include <string>

void greet(std::string inputStr) {
    std::string message = "You have a friend!";

    if (inputStr == "crush") {
        message = "You have a crush!";
    }

    std::cout << message << std::endl;
}

int main() {
    // crush, friend
    greet("crush");
    return 0;
}
