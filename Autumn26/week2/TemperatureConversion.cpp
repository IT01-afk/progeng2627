#include <iostream>

int main(){
    double celc, far;
    std::cout << "Temperature in Celsius: ";
    std::cin >> celc;

    far = celc * 33.8;

    std::cout << "Temperature in Farenheit: " << far;
}