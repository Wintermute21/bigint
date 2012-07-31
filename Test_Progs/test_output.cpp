/*  BigInt Test Program
 *
 * Tests: output
 */

//===========================================================================
#include "bigInt.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cassert>
using std::cin;
using std::cerr;
using std::cout;
using std::ostringstream;
using std::string;

//===========================================================================
int main ()
{
    //---------------------------------------------------------------------------
    // test output 1
    {
        // Setup fixture
        const string NUM_1 = "234";
        std::ostringstream out_stream;

        BigInt b1(NUM_1);

        // Test 
        out_stream << b1;

        // Verify
        string output_string = out_stream.str();
        assert(output_string == NUM_1);
    }

    //---------------------------------------------------------------------------
    // test output 2
    {
        // Setup fixture
        const string NUM_2 = "98765";
        const string NUM_3 = "222";
        std::ostringstream out_stream;

        BigInt b2(NUM_2);
        BigInt b3(NUM_3);

        // Test 
        //output(out_stream, b1);
        out_stream << b2 << b3 << "\n";

        // Verify
        string output_string = out_stream.str();
        assert(output_string == NUM_2 + NUM_3 + "\n");
    }

}

