#include <iostream>
#include <string>
#include <vector>


int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<std::string> names = {"sensor", "motor", "controller"};

    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;

}