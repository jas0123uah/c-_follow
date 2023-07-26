#include <iostream> // This adds std for printing
#include <boost/algorithm/string.hpp>
#include <iomanip>
/*

C++ Core features - The most basic rules for writing a valid C++ program

Standard Library - Ready to use components for your C++ programs (iostream, string)

STL - A collection of container types??


*/
//The main function is the starting point of the c++ progra
// endl prints a new line there is no default newline at the end of a print statement
int addNumbers(int first_num, int second_num){

    int result = first_num + second_num;
    return result;
}
int main(){
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
    std::cout << "NUM2" << std::endl;
    std::cout << addNumbers(25,7);
    double nu = 2.9;
    std::cout << nu << std::endl;
    std::cout << sizeof(nu) << std::endl; // 8 bytes in memory
    // unsigned === Positive integers only
    //unsigned int pos {-7}; // brace initialization Throws a compile error. Be careful how you assign a variable. Some types of assignment can make it past the compiler
    //std::cout << pos << std::endl;
    /*
    type     --- size --- precision --- comment
    float         4        7             -
    double        8        15            Recommended default
    long double   12       >double
    
    */

    /*
    Float / 0 === infinity
    0.0 / 0.0 === NaN 
   */
    //Pay attention to your suffixes. d is a default suffix
    float number1 { 1.12345678901234567890f};
    double number2 { 1.12345678901234567890};
    long double number3 { 1.12345678901234567890L};

    std::cout << "size of number1 : " << sizeof(number1) << std::endl; //4 bytes
    std::cout << "size of nummber2 : " << sizeof(number2) << std::endl; //8 bytes
    std::cout << "size of number3 : " << sizeof(number3) << std::endl;  //16 bytes
    std::cout << std::setprecision(20);
    std::cout << "number1 is : " << number1 << std::endl; //7 digits ONLY 1.123456 (7 digits) are valid everything thereafter is garbage
    std::cout << "number2 is : " << number2  << std::endl; //15'ish digits 1.1234567890123456 garbage after these numbers 
    std::cout << "number3 is : " << number3 << std::endl;  //15+ digits represents all of number 3 accurately

    bool red_light {true};
    //Conditionals use syntax like JS
    std::cout << std::boolalpha; // Setting to actually print out true/false instead of 1/0
    std::cout << std::noboolalpha; //reset back to showing 0/1
    if (red_light){
        std::cout << "Stop " << red_light << std::endl;
    }else{
        std::cout << "Go" << std::endl;
    }

    char value = 65;

    std::cout << "value : " << value << std::endl; //Prints A or 65in the ASCII table

    std::cout << "value (int): " << static_cast<int>(value) << std::endl;
    //Auto lets the compiler 'guess' the type of the var
    auto v1 {123u}; // unsigned 
    auto v2 {123ll}; //long long
    auto v3 {123ul}; //unsigned long

    int v4 = 5;

    std::cout << v4 << std::endl;

    // v4 is an int so the line below will throw compile errors 
    //v4 = "string";
    // evaluates to 3 Not a decimal. Int/int -> int
    std::cout << 31/10 <<std::endl;
    double numerator = 31;
    double denominator = 10
    ;
    std::cout << numerator/  denominator <<std::endl;
    //Postfix & prefix decrementing (incremnting also works w/ ++)
    numerator--;
    std::cout << numerator << std::endl; //30
    --numerator;
    std::cout << numerator << std::endl; //29 

    //Compound assignment +=, -=, /=, *=, %=
    numerator-=2;

    std::cout << numerator << std::endl; //27
    //use setw for padding. Use set fill for the character to fill with  justify left
    std::cout << std::left;
    //std::cout << std::setfill('-');
    std::cout << std::setw(10) <<"First Name" << std::setw(10) << "Last Name" << std::endl;
    std::cout << std::setw(10) <<"Jay" << std::setw(10) << "Spencer" << std::endl;
    std::cout << std::setw(10) <<"Gary" << std::setw(10) << "Oak" << std::endl;
    




    
}
