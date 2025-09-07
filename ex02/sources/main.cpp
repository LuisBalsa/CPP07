#include <iostream>
#include <string>
#include "Array.hpp"
#include <iomanip>
#include <sstream>

void	titleHeader(const std::string& message)
{
	const short standartSize = 34;
	short messageSize = message.length();
	short spacesBefore = (standartSize - messageSize) / 2 + messageSize;
	short spacesAfter = (standartSize - messageSize) / 2 + 2 + messageSize % 2;

	std::cout << "\n************************************\n*";
	std::cout << std::setw(spacesBefore) << message;
	std::cout << std::setw(spacesAfter) << "*\n";
	std::cout << "************************************\n" << std::endl;
}

void	pressEnter(void)
{
	std::string enter;
	std::cout << "\033[1;31m\nPress enter to continue...\033[0m";
	std::getline(std::cin, enter);
	std::cout << "\033[2J\033[1;1H";
}

template <typename T>
void printArray(const Array<T>& arr) {
    for (unsigned int i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
	std::cout << "\033[2J\033[1;1H";
    titleHeader("Default constructor");
    Array<int> intArray;
    std::cout << "Size of intArray: " << intArray.size() << std::endl;
    std::cout << "intArray contents: ";
    printArray(intArray);
    std::cout << "Attempting to access intArray[0]..." << std::endl;
    try {
        intArray[0] = 10; // Should throw an exception
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    pressEnter();

    titleHeader("Parameterized constructor");
    Array<std::string> strArray(5);
    std::cout << "Size of strArray: " << strArray.size() << std::endl;
    for (unsigned int i = 0; i < strArray.size(); ++i) {
        std::ostringstream oss;
        oss << i;
        strArray[i] = "str" + oss.str();
    }
    std::cout << "strArray contents: ";
    printArray(strArray);
    std::cout << "Attempting to access strArray[2] and modify it..." << std::endl;
    try {
        strArray[2] = "modified";
        std::cout << "strArray after modification: ";
        printArray(strArray);
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    std::cout << "Attempting to access strArray[5]..." << std::endl;
    try {
        std::cout << strArray[5] << std::endl; // Should throw an exception
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    pressEnter();
    }
}