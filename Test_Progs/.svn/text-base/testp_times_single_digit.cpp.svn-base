/*  BigInt Test Program
 *
 * Tests: times_single_digit
 */

//===========================================================================
#include "bigInt.h"

#include <iostream>
#include <string>
#include <cassert>
using std::cerr;
using std::cout;
using std::string;

//===========================================================================
int main ()
{
    // test times single digit arb 1
    {
        // Setup fixture
        const string ARB_A    = "12345";
        const int    DIGIT_A  =  1;
        const string RESULT_A = "12345";

        BigInt arb(ARB_A);

        // Test
        arb.times_single_digit(DIGIT_A);

        // Verfiy
        assert(arb.to_string() == RESULT_A);
    }

    // test times single digit arb 4
    {
        // Setup fixture
        const string ARB_B    = "12345";
        const int    DIGIT_B  =  4;
        const string RESULT_B = "49380";

        BigInt arb(ARB_B);

        // Test
        arb.times_single_digit(DIGIT_B);

        // Verfiy
        assert(arb.to_string() == RESULT_B);
    }

    // test times single digit arb 0
    {
        // Setup fixture
        const string ARB_C    = "12345";
        const int    DIGIT_C  =  0;
        const string RESULT_C = "0";
        BigInt arb(ARB_C);

        // Test
        arb.times_single_digit(DIGIT_C);

        // Verfiy
        assert(arb.to_string() == RESULT_C);
    }

    // test times single digit arb 9
    {
        // Setup fixture
        const string ARB_D    = "12345";
        const int    DIGIT_D  =  9;
        const string RESULT_D = "111105";

        BigInt arb(ARB_D);

        // Test
        arb.times_single_digit(DIGIT_D);

        // Verfiy
        assert(arb.to_string() == RESULT_D);
    }

    // test times single digit 5s 2
    {
        // Setup fixture
        const string ARB_E    = "555555555555555";
        const int    DIGIT_E  =  2;
        const string RESULT_E ("1111111111111110");

        BigInt       arb(ARB_E);

        // Test
        arb.times_single_digit(DIGIT_E);

        // Verfiy
        assert(arb.to_string() == RESULT_E);
    }

}

