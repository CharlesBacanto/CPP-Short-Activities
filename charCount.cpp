#include <iostream>
#include <string>

int main(){
    std:: string stringInput;
    char characterInput;
    int charcount;

    std::cout << "Please enter a word or phrase: " << std:: endl;
    std:: getline(std::cin, stringInput);
    std::cout << "Please enter a character to count: " << std:: endl;
    std:: cin >> characterInput;

    for(char c : stringInput){
        if(c == characterInput)
        charcount++;
    }

    std:: cout << "Character Count: " << charcount << std::endl;

}