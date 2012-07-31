// BigInt - driver 
//
//     * Add function to be run
// 

#include "bigint.h"

#include <iostream>
#include <string>
#include <sstream>
using std::cin;
using std::cerr;
using std::cout;
using std::istringstream;
using std::string;

//---------------------------------------------------------------------------
int main (int argc, char* argv[])
{
    // Two integer arguments are required
    if (argc != 3)
    {
        cerr << "Usage: " << argv[0] << " integer integer\n";
        exit(1);
    }

    // Convert the string to an int.
    string str1(argv[1]);
    string str2(argv[2]);
    string str = str1 + " " + str2;
    std::istringstream in_str_stream(str.c_str());
    int num1, num2;
    in_str_stream >> num1 >> num2;

    // Define BigInt objects from strings
    //BigInt b1(num1);
    //BigInt b2(num2);

    // Define BigInt objects from ints
    BigInt b1(num1);
    BigInt b2(num2);

    // Object to put a result in
    BigInt b3;

    // Output before
    cout << "Before, b1: " << b1.to_string() << "\n";
    cout << "Before, b2: " << b2.to_string() << "\n";
    cout << "Before, b3: " << b3.to_string() << "\n";

    // TEST - add function here

    // Output after
    cout << "After,  b1: " << b1.to_string() << "\n";
    cout << "After,  b2: " << b2.to_string() << "\n";
    cout << "After,  b3: " << b3.to_string() << "\n";
}

