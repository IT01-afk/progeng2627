#include <iostream>

int main(){
    double max, min, n;
    std::cout << "Please enter number: " << std::endl;
    std::cin >> n;
    max = n;
    min = n;
    std::cout<< "Current maximum is " << max << std::endl;
    std::cout<< "Current minimum is " << min << std::endl;
    while(n != 0){
        std::cout<< "Please enter number: " << std::endl;
        std::cin >> n;
        if(n > max){
            max = n;
        } else if(n < min){
            min = n;
        }
        std::cout<< "Current maximum is " << max << std::endl;
        std::cout<< "Current minimum is " << min << std::endl;
    }
}