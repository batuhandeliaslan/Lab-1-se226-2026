#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string name, student_id;
    std::cout << "What is your name?" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "." << std::endl;
    std::cout << "What is your Student ID?" << std::endl;
    std::cin >> student_id;
    std::cout << "Your ID is " << student_id << "." << std::endl;

    long total_seconds;
    std::cout << "\nEnter total seconds: ";
    std::cin >> total_seconds;
    std::cout << total_seconds << " seconds is " << total_seconds / 3600 << " hours, " 
              << (total_seconds % 3600) / 60 << " minutes, and " << total_seconds % 60 << " seconds." << std::endl;

    double x1, y1, x2, y2;
    std::cout << "\nEnter x1, y1, x2, y2: ";
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << "Distance: " << std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2)) << std::endl;

    std::cout << "\n*******\n *****\n  ***\n   *" << std::endl;

    return 0;
}
