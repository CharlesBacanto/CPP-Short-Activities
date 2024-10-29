#include <iostream>
#include <string>

class shirt{
    
    private:
        std:: string size;

    public:


        //Get Size Function
        std::string getSize(){
            return size;
        }

        //Set Size Function to restrict and set specific size inputs
        void setSize(std::string aSize){
            if(aSize == "XS" || aSize == "S" || aSize == "M" || aSize == "L" || aSize == "XL"){
                size=aSize;
            }else{ /* Else statement for inputs that are not similar to the given specific inputs*/
                size="Size is not applicable";
            }
        }

};

int main(){
    shirt shirtOne;
    shirtOne.setSize("XL");
    std:: cout << shirtOne.getSize() << std:: endl;

    shirt shirtTwo;
    shirtTwo.setSize("Super Small");
    std:: cout << shirtTwo.getSize() << std:: endl;

}