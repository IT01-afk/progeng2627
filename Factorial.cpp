#include <iostream>

int main(){
    int a,n;
    std::cin >> n;
    a=1;
    for(int i = 1; i <=n; i++){
        a = a * i;
    }
    std::cout << a;
}