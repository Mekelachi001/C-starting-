#include <iostream>
#include <fstream>

int main (){
    std::ofstream File;

    File.open("code.cpp ",'A');
    File<<"Date";
    File.close();
    

    return 0;
}