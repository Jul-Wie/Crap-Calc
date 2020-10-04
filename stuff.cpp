#include <iostream>
#include "stuff.h"
bool continue_ = false;
void lowerCase(std::string& strToConvert)
{

   for(int i=0;i<strToConvert.length();i++)
   {
      strToConvert[i] = tolower(strToConvert[i]);
   }
}
int program(){

    std::cin.clear();
    std::string start = "a";
    if(!continue_){
    std::cout << "Enter anything to start: ";
    std::cin >> start;
    std::cout << std::endl;
    }
    if(start != "Z8+YE[EZ^Dy8=wj>DUvkwpp?@dz8G!U?zpMUd9^}<s6%M6S&}$:v:>"){
    std::cout << "You have the options: square, double, half and sixnine. Enter 'exit' to exit." << std::endl;
    std::string input;
    std::cin >> input;
    lowerCase(input);
    if(input == "square"){
        square();
    }
    else if(input == "double"){
        doubled();
    }
    else if(input == "half"){
        half();
    }

    else if(input == "6ix9ine"){
        sixnine();
    }
    else if (input == "exit"){
    return 0;
    }
    else {
    std::cout << input << " was not an option." << std::endl;
    continue_ = true;
    program();

        }
    }
}

 int square(){
    int in;
    std::cout << "Please specify what to square, or enter 'exit' to exit." << std::endl;
    std::cin >> in;
    if(std::cin.fail())
        {
            std::cin.clear();

            std::cout << "Invalid input " << std::endl;
            continue_ = false;
            program();
        }else{
    in = in * in;
    std::cout << in << std::endl;
    continue_ = true;
    program();
    }
}
 int doubled(){
    int in;
    std::cout << "Please specify what to double, or enter 'exit' to exit." << std::endl;
    std::cin >> in;
    if(std::cin.fail())
        {
            std::cin.clear();

            std::cout << "Invalid input " << std::endl;
            continue_ = false;
            program();
        }else{
    in = in * 2;
    std::cout << in << std::endl;
    continue_ = true;
    program();
    return 0;}
}
 int half(){
    int in;
    std::cout << "Please specify what to half, or enter 'exit' to exit." << std::endl;
    std::cin >> in;
    if(std::cin.fail())
        {
            std::cin.clear();

            std::cout << "Invalid input " << std::endl;
            continue_ = false;
            program();
        }else{
    in = in / 2;
    std::cout << in << std::endl;
    continue_ = true;
    program();
    return 0;}
}
 int sixnine(){
    int in;
    std::cout << "Please specify what to 6ix9ine, or enter 'exit' to exit." << std::endl;
    std::cin >> in;
    if(std::cin.fail())
        {
            std::cin.clear();

            std::cout << "Invalid input " << std::endl;
            continue_ = false;
            program();
        }else{
    in = in * 69;
    std::cout << in << std::endl;
    continue_ = true;
    program();
    return 0;}
}

