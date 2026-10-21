#include <iostream>

int main(){
    int counter, n, max;
    std::cout<< "Please enter your number: " << std::endl;
    std::cin >> n;
    max = n;
    std::cout<< "Current maximum is: " << n <<std::endl;
    counter = 0;
    while(n != 1){
        if(n>max){
            max = n;
        }
        if(n % 2 == 0){
            n = n/2;
            std::cout << n;
            std::cout << "\t";
            
        } else{
            n = 3*n +1;
            std::cout << n;
            std::cout << "\t";
            
        }
        counter = counter + 1;

    }
    std::cout << "Took " << counter << " operations" << std::endl;
    std::cout << "Current maximum is: " << max;
    
}