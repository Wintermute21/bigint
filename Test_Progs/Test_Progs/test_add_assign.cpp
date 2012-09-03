/*  BigInt Test Program
 *
 * Tests: addAssign
 */

//===========================================================================
#include "../../bigint.h"

#include <iostream>
#include <string>
#include <cassert>
using std::cerr;
using std::cout;
using std::string;

//===========================================================================
int main ()
{
    // test add assign 0 0
    {
        // Setup fixture
        const string RESULT_A  = "0";

        BigInt  lhs_0(0);
        BigInt  rhs_0(0);

        // Test
        lhs_0 += rhs_0;

        // Verify
        assert(lhs_0.to_string() == RESULT_A);
        assert(rhs_0.to_string() == "0");
    }

    // test add assign int 0
    {
        // Setup fixture
        const int    LHS_ARB  = 43;
        const string RESULT_B = "43";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_0(0);

        // Test
        lhs_arb += rhs_0;

        // Verify
        assert(lhs_arb.to_string() == RESULT_B);
        assert(rhs_0.to_string()   == "0");
    }

    // test add assign 0 int
    {
        // Setup fixture
        const string  RHS_ARB  = "987";
        const string  RESULT_C = "987";

        BigInt lhs_0(0);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_0 += rhs_arb;

        // Verify
        assert(lhs_0.to_string()   == RESULT_C);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign int int
    {
        // Setup fixture
        const string  LHS_ARB  = "3";
        const string  RHS_ARB  = "9";
        const string  RESULT_F = "12";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_F);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign int int
    {
        // Setup fixture
        const string  LHS_ARB  = "3";
        const string  RHS_ARB  = "999";
        const string  RESULT_G = "1002";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_G);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign int int
    {
        // Setup fixture
        const string  LHS_ARB  = "9998";
        const string  RHS_ARB  = "8";
        const string  RESULT_H = "10006";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_H);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign large int + small int
    {
        // Setup fixture
        const string  LHS_ARB  = "99999999999999999999999999999";
        const string  RHS_ARB  = "2";
        const string  RESULT_J = "100000000000000000000000000001";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_J);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign large int + small int
    {
        // Setup fixture
        const string  LHS_ARB  = "11111199999999999999999999999";
        const string  RHS_ARB  = "2";
        const string  RESULT_J = "11111200000000000000000000001";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_J);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign small int + large int
    {
        // Setup fixture
        const string  LHS_ARB  = "2";
        const string  RHS_ARB  = "99999999999999999999999999999";
        const string  RESULT_J = "100000000000000000000000000001";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_J);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test add assign small int + large int
    {
        // Setup fixture
        const string  LHS_ARB  = "2";
        const string  RHS_ARB  = "11111199999999999999999999999";
        const string  RESULT_J = "11111200000000000000000000001";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb += rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_J);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

}

