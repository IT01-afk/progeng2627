#include <iostream>

int main(){
    double l1,l2,per,area;
    std::cout << "What is the length? " << std:: endl;
    std::cin >> l1;

    std::cout << "What is the width? " << std:: endl;
    std::cin >> l2;

    per = 2*l1 + 2*l2;
    area = l1*l2;

    std::cout << "The perimeter is " << per << " and the area is " << area << ".";
}