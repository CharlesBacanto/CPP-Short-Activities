#include <iostream>

std::string getClone(char c, int duplicate); //Function Header

int main(){
    int maxQuantity;
    char character = '*';

    std::cout << "Please enter the max quantity: ";
    std:: cin >> maxQuantity;

    //Print out the pyramid rightside up
    std::cout << "Rightside up" << std:: endl;
    for(size_t i = 0; i <= maxQuantity; i++){
         std:: cout << getClone(character,i) << std:: endl;
    }

    //Print out the pyramid upside down 
    std::cout << std:: endl <<"Upside down" << std:: endl << std:: endl;
    for(size_t i = maxQuantity; i >= 0; i--){
        std::cout << getClone(character,i) << std:: endl;
    }

}

//Function to duplicate the character base on the quantity
std::string getClone(char c, int duplicate){
    std::string clone;
    for(size_t i=0; i < duplicate; i++){
        clone += c;
    } 
    return clone;
}