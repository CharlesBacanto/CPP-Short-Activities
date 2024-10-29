#include <iostream>
#include <string>

class shirt{
    
    private:
        std:: string size;

    public:
        std:: string brand;
        std:: string color;

        //Constructor for a custom Shirt Product
        shirt(std::string aSize, std::string aBrand, std:: string aColor){
            setSize(aSize);
            brand = aBrand;
            color = aColor;
        }
        
        

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
    //Using constructor to declare a set of inputs instead of declaring multiple variables
    shirt shirtOne("L","Uniqlo","Black");
    std:: cout << shirtOne.getSize() << std:: endl;

    shirt shirtTwo("Super Small", "Oxygen", "Blue");
    std:: cout << shirtTwo.getSize() << std:: endl;

    shirt shirtThree("XL", "Nike", "White");
    shirtThree.setSize("M");/*Update input using setSize*/
    std:: cout << shirtThree.getSize() << std:: endl;

}