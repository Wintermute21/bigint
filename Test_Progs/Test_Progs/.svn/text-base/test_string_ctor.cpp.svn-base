/*  BigInt Test Program
 *
 *  Tests: string ctor
 */

//==============================================================================
#include "bigInt.h"

#include <iostream>
#include <string>
#include <cassert>
using std::cout;
using std::cerr;
using std::string;

//==============================================================================
int main()
{
    // Test small arbitrary value
    {
        // Setup fixture
        const string ARB_SMALL_VALUE("456");

        // Test
        BigInt construct_with_arb_small_value(ARB_SMALL_VALUE);

        // Verify
        assert(construct_with_arb_small_value.to_string() == ARB_SMALL_VALUE);
    }

    // Test 0
    {
        // Setup fixture
        string ZERO("0");

        // Test
        BigInt construct_with_0(ZERO);

        // Verify
        assert(construct_with_0.to_string() == ZERO);
    }

    // Test 1
    {
        // Setup fixture
        string ONE("1");

        // Test
        BigInt construct_with_1(ONE);

        // Verify
        assert(construct_with_1.to_string() == ONE);
    }

    // Test two digit value
    {
        // Setup fixture
        string two_digit("53");

        // Test
        BigInt construct_with_1(two_digit);

        // Verify
        assert(construct_with_1.to_string() == two_digit);
    }

    // Test large value
    {
        // Setup fixture
        string ARB_LARGE_VALUE("12345678901234567890");

        // Test
        BigInt construct_with_arb_large_value(ARB_LARGE_VALUE);

        // Verify
        assert(construct_with_arb_large_value.to_string() == ARB_LARGE_VALUE);
    }

    // Test very large value
    {
        // Setup fixture
        string ARB_LARGE_VALUE("12345678901234567890123456789012345678901234567890123456789012345678901234567890");

        // Test
        BigInt construct_with_arb_large_value(ARB_LARGE_VALUE);

        // Verify
        assert(construct_with_arb_large_value.to_string() == ARB_LARGE_VALUE);
    }

}

