#include <iostream>
#include <string>

int main(){
    std::string first_name;
    std::cout << "What is your name? "<< std:: endl;
    std::cin >> first_name;
    std::string surname;
    std::cout << "What is your surname? "<< std:: endl;
    std::cin >> surname;
    std::cout << "Hello " << first_name << " " << surname << '!' << std:: endl;
}