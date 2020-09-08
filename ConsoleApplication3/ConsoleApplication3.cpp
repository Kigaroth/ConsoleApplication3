// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

int main()
{
    std::string rows[4] = { "A", "B", "C", "D" };

    // Column headingQ
    std::cout << "   ";
    for (int i = 1; i <= 6; i++) {
        std::cout << " " << i << "  ";
    }
    std::cout << "\n";

    // Horizontal line
    std::cout << "   ";
    for (int j = 0; j < 6; j++) {
        std::cout << "--- ";
    }
    std::cout << "\n";

    // Printing rows
    for (int i = 0; i < sizeof(rows) / sizeof(rows[0]); i++) {

        // Print 6 columns
        std::cout << rows[i] << " |";
        for (int j = 0; j < 6; j++) {
            // Set textcolor to red
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            std::cout << " * ";
            // Set textcolor to white
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            std::cout << "|";
        }
        std::cout << " " << rows[i] << "\n";

        // Horizontal line
        std::cout << "   ";
        for (int j = 0; j < 6; j++) {
            std::cout << "--- ";
        }
        std::cout << "\n";
    }

    std::cout << "   ";
    for (int i = 1; i <= 6; i++) {
        std::cout << " " << i << "  ";
    }
    std::cout << "\n";
}
