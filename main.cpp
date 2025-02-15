#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream inputFile("data.csv");

    if (!inputFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return 1;
    }

    std::string line;

    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string temp;
        int num1, num2;
        std::string word;

        std::getline(ss, temp, ',');
        num1 = std::stoi(temp);

        std::getline(ss, temp, ',');
        num2 = std::stoi(temp);

        std::getline(ss, word);

        int sum = num1 + num2;

        for (int i = 0; i < sum; i++) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }

    inputFile.close();
    return 0;
}
