#include <iostream>

int main(){
    double height, weight, BMI;
    std::cout << "What is your height in metres?" << std::endl;
    std::cin >> height;

    std::cout << "What is your weight in Kilograms?" << std::endl;
    std::cin >> weight;

    BMI = weight/(height*height);

    std::cout << "Your BMI is " << BMI;
}