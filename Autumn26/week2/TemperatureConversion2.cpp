#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool valid = true;

    std::cin >> temp_in >> unit_in;
    if((unit_in == "F") || (unit_in == "f") || (unit_in == "Farenheit") || (unit_in == "farenheit")){
        unit_out = "C";
        temp_out = (temp_in - 32)/1.8;
    } else if((unit_in == "C") || (unit_in == "c") || (unit_in == "Celsius") || (unit_in == "celsius")){
        unit_out = "F";
        temp_out = (temp_in*1.8) + 32;
    } else{
        valid = false;
    }

    if(valid == true){
        std::cout << temp_out << " " << unit_out;
    } else{
        std::cout << "Not a valid unit.";
    }
}