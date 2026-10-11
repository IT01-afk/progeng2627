#include <iostream>

int main(){
    double pound, euro, rate;
    std::cout << "Value in Pounds: ";
    std::cin >> pound;
    std::cout << "Exchange rate: ";
    std::cin >> rate;

    euro = pound * rate;

    std::cout << "Value in Euros: " << euro;
}