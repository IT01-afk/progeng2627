#include <iostream>

int main(){
    int a,b,c,n;
    std::cin >> n;
    a = 1;
    c = 1;
    b = c;
    for(int c0 = 0; c0 < n; c0++){
        for(int c1 = 0; c1 < n; c1++){
            std::cout << b;
            std::cout << "\t";
            b = b + c;         
    
        }
        c = c + 1;
        b = c;
        a++;
        std::cout << std:: endl;

    }
}