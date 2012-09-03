/*  BigInt Test Program
 *
 * Tests: input
 */

//===========================================================================
#include "bigint.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cassert>
using std::cout;
using std::string;
using std::istringstream;

//===========================================================================
int main()
{
    //---------------------------------------------------------------------------
    // test input 1
    {
        // Setup fixture
        const string IN = "234";
        string num_str_1(IN);
        string num_str = num_str_1;
        std::istringstream in_str_stream(num_str_1.c_str());

        BigInt b1;

        // Test
        //input(in_str_stream, b1);
        in_str_stream >> b1;
		std::cout << b1.to_string() << std::endl;
        // Verify
        assert(b1.to_string() == IN);
    }

}

