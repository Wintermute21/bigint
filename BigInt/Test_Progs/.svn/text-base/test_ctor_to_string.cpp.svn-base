/*  BigInt Test Program
 *
 *  Tests: to_string, default constructor, int constructor
 */

//===========================================================================
#include "bigint.h"

#include <iostream>
#include <string>
#include <cassert>
using std::cout;
using std::cerr;
using std::string;

//===========================================================================
int main ()
{
    // test default constructor
    {
        // Setup fixture

        // Test 
        BigInt default_construct;

        // Verify
        assert(default_construct.to_string() == "0");
    }

    // test construct with 0
    {
        // Setup fixture

        // Test 
        BigInt construct_with_0(0);

        // Verify
        assert(construct_with_0.to_string() == "0");
    }

    // test construct with 1
    {
        // Setup fixture

        // Test 
        BigInt construct_with_1(1);

        // Verify
        assert(construct_with_1.to_string() == "1");
    }

    // test construct with 99
    {
        // Setup fixture

        // Test 
        BigInt construct_with_99(99);

        // Verify
        assert(construct_with_99.to_string() == "99");
    }

    // test construct with arbitrary int
    {
        // Setup fixture
        const int    ARBITRARY_INT = 876543;
        const string ARBITRARY_INT_STR ("876543");

        // Test 
        BigInt construct_with_arb_int(ARBITRARY_INT);

        // Verify
        assert(construct_with_arb_int.to_string() == ARBITRARY_INT_STR);
    }

}

