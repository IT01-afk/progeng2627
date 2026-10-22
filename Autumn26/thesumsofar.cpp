#include <iostream>
#include <string>

int main(){
    int n = 0, a = 1;
    while(a!=0){
        std::cout << "enter a number:" << std::endl;
        std::cin >> a;
        n = a + n;
        if(a == 0){
            std::cout << "";
        } else{
            std::cout << "the sum so far is: " << std::endl;
            std::cout << n << std::endl;
        }
    }  
}