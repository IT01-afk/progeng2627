#include <iostream>

int main(){
    int a,b,n;
    std::cin >> n;
    a = 0;
    
    while(a<n){
        a++;
        b = 0;
        while(b<n){
            b++;
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}