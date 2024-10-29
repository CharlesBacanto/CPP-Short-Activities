#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<std::vector<std::string>> subjectUnits = {{"English", "Science", "Math"},
                                                         {"OOP", "Arduino"},
                                                         {"C++", "UIPath RPA", "Research"}
                                                 
    };

    // For loop for each Vector
    // Example to simplify the visualization
    // 0 = {"English", "Science", "Math"}
    // 1 = {"OOP", "Arduino"}
    // 2 = {"C++", "UIPath RPA", "Research"}
    for(size_t i = 0; i < subjectUnits.size(); i++){

        // For loop for each vector memory allocation
        // Example to simplify the visualization
        // subjectUnits[0] 0 = English
        // subjectUnits[0] 1 = Science
        // subjectUnits[0] 2 = Math
        // subjectUnits[1] 0 = OOP
        // subjectUnits[1] 1 = Arduino
        for(size_t j = 0; j < subjectUnits[i].size(); j++){
            std:: cout << subjectUnits[i][j] << std:: endl; /* Print out each memory allocation*/
        }
    }
}