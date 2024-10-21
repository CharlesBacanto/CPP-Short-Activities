#include <iostream>
//FizzBuzz Activity using C++
// Divisible by both 2 and 5 = FizzBuzz
// Divisible by 2 = Fizz
// Divisible by 5 = Buzz

int main(){
    
    //For loop that starts from initial 1 and increment up to 100
    for(size_t i = 1; i <= 100; i++){
        if(i %2 == 0 && i %5 == 0){ /*Divisible by both 2 and 5*/
            std::cout << "FizzBuzz" << std::endl;
        }else if(i %2 == 0){ /*Divisible by 2 */
            std::cout << "Fizz" << std::endl;
        }else if(i %5 == 0){ /*Divisible by 5 */
            std::cout << "Buzz" << std::endl;
        }else{ /*If not divisible by 2 nor 5 print the current number*/
            std::cout << i << std::endl;
        }
    }
}