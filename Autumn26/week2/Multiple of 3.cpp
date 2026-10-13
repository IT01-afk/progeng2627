#include <iostream>

int main(){
    int n, rem;
    std::cout << "What is your number?" << std::endl;
    std::cin >> n;
    rem = n % 3;
    if(rem == 0){
        std::cout << "Mulitple of 3.";
    
    } else{
        std::cout << "Not a multiple of 3.";
        
    }
    
}