#include <iostream>

int main(){
    double n,a,b;
    std::cin >> b >> n;
    a = b;
    for(double i = 1; i <n; i++){
        a = a*b;
    }
    std::cout << a;
}