#include <iostream>

int main(){
    double a,b,c;
    std::cout << "First side: ";
    std::cin >> a;
    std::cout << "Second side: ";
    std::cin >> b;
    std::cout << "Third side: ";
    std::cin >> c;

    if((a + b < c) || (b + c < a) || (c + a < b)){
        std::cout << "Not a triangle.";
    } else {
        if(a == b && b == c){
            std::cout << "Equilateral";
        } else if(((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a))){
            std::cout << "Isosceles";
        } else if(a != b && b != c){
            std::cout << "Scalene";
        }
    }
}