#include <iostream>

int main(){
    int remainder,b,c,counter;
    std::cout<< "Number: "<<std::endl;
    std::cin >> c;
    std::cout<< "Quotient: "<<std::endl;
    std::cin >> b;
    remainder = c;
    counter = 0;
    while(remainder>=b){
        remainder = remainder - b;
        std::cout<< "remainder is " << remainder << std::endl;
        counter += 1;
    }
    std::cout<< c << " divided by " << b << " is " << counter;
}