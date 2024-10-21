#include <iostream>
#include <string>
//Counting characters in a string activity
int main(){
    std:: string stringInput;
    char characterInput;
    int charcount;

    //Prompts the user to enter a word
    std::cout << "Please enter a word or phrase: " << std:: endl;
    //Stores the input word
    std:: getline(std::cin, stringInput);
    //Prompts the user to enter a character to count
    std::cout << "Please enter a character to count: " << std:: endl;
     //Stores the input letter/character
    std:: cin >> characterInput;

    for(char c : stringInput){
        if(c == characterInput)
        charcount++;
    }

    std:: cout << "Character Count: " << charcount << std::endl;

}