/*  BigInt Test Program
 *
 * Tests: preinc
 */

#include "bigint.h"

//===========================================================================
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
        int result = num_A[0];

        // Verify
        assert(result             ==  6 );
        assert(num_A.to_string()  == "6");
    }

    //---------------------------------------------------------------------------
    // Test 0
    {
        // Setup fixture
        BigInt  num_B(0);

        // Test
        int result = num_B[0];

        // Verify
        assert(result             ==  0 );
        assert(num_B.to_string()  == "0");
    }

    //---------------------------------------------------------------------------
    // Test multidigit number
    {
        // Setup fixture
        BigInt  num_C(9876);

        // Test
        int result_0 = num_C[0];
        int result_1 = num_C[1];
        int result_2 = num_C[2];
        int result_3 = num_C[3];
		std::cout << num_C.to_string() << std::endl;

        // Verify
        assert(result_0           ==  6 );
        assert(result_1           ==  7 );
        assert(result_2           ==  8 );
        assert(result_3           ==  9 );
        assert(num_C.to_string()  == "9876");
    }

    //---------------------------------------------------------------------------
    // Test big multidigit number
    {
        // Setup fixture
        BigInt  num_D("9876543210987654321098765432109876543210");

        // Test
        int result_0  = num_D[ 0];
        int result_10 = num_D[10];
        int result_20 = num_D[20];
        int result_30 = num_D[30];
        int result_38 = num_D[38];
        int result_39 = num_D[39];

        // Verify
        assert(result_0           ==  0 );
        assert(result_10          ==  0 );
        assert(result_20          ==  0 );
        assert(result_30          ==  0 );
        assert(result_38          ==  8 );
        assert(result_39          ==  9 );
        assert(num_D.to_string()  == "9876543210987654321098765432109876543210");
    }

    //---------------------------------------------------------------------------
    // Test return by reference
    {
        // Setup fixture
        BigInt  num_E(6);

        // Test
        int result = ++num_E[0];

        // Verify
        assert(result             ==  7 );
        assert(num_E.to_string()  == "7");
    }

    //---------------------------------------------------------------------------
    // Test const
    {
        // Setup fixture
        const BigInt  num_F(6);

        // Test
        int result = num_F[0];

        // Verify
        assert(result             ==  6 );
        assert(num_F.to_string()  == "6");
    }

}

