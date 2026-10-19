#include <iostream>

int main(){
    int total = 0, a = 1;
    double n = 0;
    while(a != 0){
        std::cout << "enter a number:" << std::endl;
        std::cin >> a;
        total += 1;
        n = (a + n)/total;
        if(a == 0){
            std::cout<< "";
        } else{
            std::cout<< "the average so far is:" << std::endl;
            std::cout<< n<< std::endl;
        }
    }
}