#include <iostream>
#include <vector>
#include <string>
//#include <map>
#include <algorithm>
//#include <stdexcept>

std::string inputString();
std::string get_middle(std::string);

int main()
{
    std::string input = inputString();
    std::string str = get_middle(input);
    std::cout << str << std::endl;
    return 0;
}

std::string inputString() {
    std::string str;
    std::cout << "Input string: " << std::endl;
    std::cin >> str;
    return str;
};

std::string get_middle(std::string input) {
    if (input.size() % 2 == 0) { return std::string() + input[(input.size() / 2) - 1] + input[(input.size() / 2)]; }
    else return std::string() + input[(input.size() / 2)];
}