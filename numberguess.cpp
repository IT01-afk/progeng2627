#include <iostream>
#include <string>

int main(){
    int low, high, n;
    std::cout<< "Please type in your range here: ";
    std::cin>>low>>high;
    bool guess = false;
    n = low + (high-low)/2;
    std::string a;
    while(guess == false){  
        std::cout<< n << std::endl;      
        std::cout<< "Is your number higher or lower?"<< std::endl;
        std::cin>>a;
        if(a == "Higher" || a == "higher"){
            n = n + n/2;
        } else if(a == "Lower" || a == "lower"){
            n = n/2;
        } else if(a == "correct"){ 
            guess == true;
        }
        
    }


}