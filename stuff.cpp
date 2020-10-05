#include <iostream>
#include "stuff.h"
bool continue_ = false;
bool failed_ = false;
void checkinput(){

    if(std::cin.fail())
        {
            std::cin.clear();

            std::cout << "Invalid input " << std::endl;
            continue_ = false;
            program();
            failed_ = true;
        }
   else failed_ = false;
}
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
    std::cout << "You have the options: power, times and divide. Enter 'exit' to exit." << std::endl;
    std::string input;
    std::cin >> input;
    lowerCase(input);
    if(input == "power"){
        power();
    }
    else if(input == "times"){
        times();
    }
    else if(input == "divide"){
        divide();
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

 int power(){
    long long in1;
    long long in2;
    long long result;
    std::cout << "Please specify what to power, or enter 'exit' to exit." << std::endl;
    std::cin >> in1;
    result = in1;
    checkinput();
    if(!failed_){
            std::cout << "Okay, now what power? (still 'exit') to exit." << std::endl;
            std::cin >> in2;
            checkinput();
    if(!failed_){
            for(int i = in2; i > 1; i--){
            result = result * in1;
            std::cout << result << std::endl;
            }
    }
    continue_ = true;
    program();
    }
    }

 int times(){
    int in1;
    int in2;
    int result;
    std::cout << "Please specify what to times, or enter 'exit' to exit." << std::endl;
    std::cin >> in1;
   checkinput();
    if(!failed_){
            std::cout << "Okay, how many times that? (or 'exit' to exit.)" << std::endl;
            std::cin >> in2;
           checkinput();
    if(!failed_){
    result = in1 * in2;
    std::cout << result << std::endl;
    continue_ = true;
    program();
    return 0;
        }
    }
}
 int divide(){
    int in1;
    int in2;
    int result;
    std::cout << "Please specify what to divide, or enter 'exit' to exit." << std::endl;
    std::cin >> in1;
    checkinput();
    if(!failed_){
            std::cout << "okay, by what to divide that? (or 'exit' to exit.)" << std::endl;
            std::cin >> in2;
    result = in1 / in2;
        checkinput();
    if(!failed_){
    std::cout << result << std::endl;
    continue_ = true;
    program();
    return 0;
        }
    }
}

