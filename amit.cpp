#include<iostream>
#include <cstring>
class StringOperations {
private:
    char inputString[100];

public:
    // Function to reverse a string
    void reverseString() {
        std::cout << "Reversed String: ";
        for (int i = strlen(inputString) - 1; i >= 0; --i) {
            std::cout << inputString[i];
        }
        std::cout << std::endl;
    }

    // Function to concatenate two strings
    void concatenateString() {
        char secondString[50];
        std::cout << "Enter the second string for concatenation: ";
        std::cin.ignore();
        std::cin.getline(secondString, 50);

        strcat(inputString, secondString);

        std::cout << "Concatenated String: " << inputString << std::endl;
    }

    // Function to check if a string is palindrome
    void checkPalindrome() {
        int len = strlen(inputString);
        bool isPalindrome = true;

        for (int i = 0; i < len / 2; ++i) {
            if (inputString[i] != inputString[len - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            std::cout << "The string is a palindrome." << std::endl;
        } else {
            std::cout << "The string is not a palindrome." << std::endl;
        }
    }

    // Function to copy a string
    void copyString() {
        char copiedString[100];
        strcpy(copiedString, inputString);
        std::cout << "Copied String: " << copiedString << std::endl;
    }

    // Function to get the length of a string
    void getStringLength() {
        std::cout << "Length of the string: " << strlen(inputString) << std::endl;
    }

    // Function to find the frequency of a character in a string
    void findCharFrequency() {
        char searchChar;
        std::cout << "Enter the character to find its frequency: ";
        std::cin >> searchChar;

        int frequency = 0;
        for (int i = 0; i < strlen(inputString); ++i) {
            if (inputString[i] == searchChar) {
                frequency++;
            }
        }

        std::cout << "Frequency of '" << searchChar << "': " << frequency << std::endl;
    }

    // Function to find the number of vowels and consonants in a string
    void findVowelsConsonants() {
        int vowels = 0, consonants = 0;

        for (int i = 0; i < strlen(inputString); ++i) {
            char ch = tolower(inputString[i]);
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        std::cout << "Number of vowels: " << vowels << std::endl;
        std::cout << "Number of consonants: " << consonants << std::endl;
    }

    // Function to find the number of blank spaces and digits in a string
    void findSpacesDigits() {
        int spaces = 0, digits = 0;

        for (int i = 0; i < strlen(inputString); ++i) {
            if (isspace(inputString[i])) {
                spaces++;
            } else if (isdigit(inputString[i])) {
                digits++;
            }
        }

        std::cout << "Number of blank spaces: " << spaces << std::endl;
        std::cout << "Number of digits: " << digits << std::endl;
    }

    // Function to display the menu and get user input
    void displayMenu() {
        int choice;

        do {
            std::cout << "\nString Operations Menu:\n";
            std::cout << "1. Reverse a string\n";
            std::cout << "2. Concatenate strings\n";
            std::cout << "3. Check palindrome\n";
            std::cout << "4. Copy a string\n";
            std::cout << "5. Get length of the string\n";
            std::cout << "6. Find character frequency\n";
            std::cout << "7. Find vowels and consonants\n";
            std::cout << "8. Find spaces and digits\n";
            std::cout << "9. Exit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    reverseString();
                    break;
                case 2:
                    concatenateString();
                    break;
                case 3:
                    checkPalindrome();
                    break;
                case 4:
                    copyString();
                    break;
                case 5:
                    getStringLength();
                    break;
                case 6:
                    findCharFrequency();
                    break;
                case 7:
                    findVowelsConsonants();
                    break;
                case 8:
                    findSpacesDigits();
                    break;
                case 9:
                    std::cout << "Exiting the program. Goodbye!\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please enter a valid option.\n";
            }

        } while (choice != 9);
    }

    // Function to get user input
    void getUserInput() {
        std::cout << "Enter a string: ";
        std::cin.ignore();
        std::cin.getline(inputString, 100);
    }
};

int main() {
    StringOperations stringApp;
    
    stringApp.getUserInput();
    stringApp.displayMenu();

    
}
