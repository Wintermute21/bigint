/*  BigInt Test Program
 *
 * Tests: preinc
 */

//===========================================================================
#include "bigint.h"

#include <iostream>
#include <string>
#include <sstream>
#include <cassert>
using std::cin;
using std::cerr;
using std::cout;
using std::istringstream;
using std::string;

//===========================================================================
int main ()
{

    //---------------------------------------------------------------------------
    // Test single digit number
    {
        // Setup fixture
        BigInt  num_A(6);

        // Test
        int result = num_A.size();

        // Verify
        assert(result             ==  1 );
        assert(num_A.to_string()  == "6");
    }

    //---------------------------------------------------------------------------
    // Test 0
    {
        // Setup fixture
        BigInt  num_B(0);

        // Test
        int result = num_B.size();

        // Verify
        assert(result             ==  1 );
        assert(num_B.to_string()  == "0");
    }

    //---------------------------------------------------------------------------
    // Test multidigit number
    {
        // Setup fixture
        BigInt  num_C(9999);

        // Test
        int result = num_C.size();

        // Verify
        assert(result             ==     4);
        assert(num_C.to_string()  == "9999");
    }

    //---------------------------------------------------------------------------
    // Test big multidigit number
    {
        // Setup fixture
        BigInt  num_D("1234567890123456789012345678901234567890");

        // Test
        int result = num_D.size();

        // Verify
        assert(result             ==  40 );
        assert(num_D.to_string()  == "1234567890123456789012345678901234567890");
    }

}

