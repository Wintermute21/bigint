/*  BigInt Test Program
 *
 * Tests: add
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
    // test add 0 0
    {
        // Setup fixture
        BigInt  lhs_0(0);
        BigInt  rhs_0(0);
        BigInt  result_A;

        // Test
        result_A = lhs_0 + rhs_0;

        // Verify
        assert(lhs_0.to_string()    == "0");
        assert(rhs_0.to_string()    == "0");
        assert(result_A.to_string() == "0");
    }

    // test add int 0
    {
        // Setup fixture
        const string  LHS_ARB  = "43";
        const string  RESULT_B = "43";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_0(0);
        BigInt  result_B;

        // Test
        result_B = lhs_arb + rhs_0;

        // Verify
        assert(lhs_arb.to_string()  == LHS_ARB);
        assert(rhs_0.to_string()    == "0");
        assert(result_B.to_string() == RESULT_B);
    }

    // test add 0 int
    {
        // Setup fixture
        const string RHS_ARB  = "987";
        const string RESULT_C = "987";

        BigInt  lhs_0(0);
        BigInt  rhs_arb(RHS_ARB);
        BigInt  result_C;

        // Test
        result_C = lhs_0 + rhs_arb;

        // Verify
        assert(lhs_0.to_string()    == "0");
        assert(rhs_arb.to_string()  == RHS_ARB);
        assert(result_C.to_string() == RESULT_C);
    }

    // test add int int
    {
        // Setup fixture
        const string LHS_ARB  = "3";
        const string RHS_ARB  = "9";
        const string RESULT_F = "12";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_arb(RHS_ARB);
        BigInt  result_F;

        // Test
        result_F = lhs_arb + rhs_arb;

        // Verify
        assert(lhs_arb.to_string()  == LHS_ARB);
        assert(rhs_arb.to_string()  == RHS_ARB);
        assert(result_F.to_string() == RESULT_F);
    }

    // test add int int
    {
        // Setup fixture
        const string LHS_ARB  = "3";
        const string RHS_ARB  = "999";
        const string RESULT_G = "1002";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_arb(RHS_ARB);
        BigInt  result_G;

        // Test
        result_G = lhs_arb + rhs_arb;

        // Verify
        assert(lhs_arb.to_string()  == LHS_ARB);
        assert(rhs_arb.to_string()  == RHS_ARB);
        assert(result_G.to_string() == RESULT_G);
    }

    // test add int int
    {
        // Setup fixture
        const string LHS_ARB  = "99998";
        const string RHS_ARB  = "7";
        const string RESULT_H = "100005";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_arb(RHS_ARB);
        BigInt  result_H;

        // Test
        result_H = lhs_arb + rhs_arb;

        // Verify
        assert(lhs_arb.to_string()  == LHS_ARB);
        assert(rhs_arb.to_string()  == RHS_ARB);
        assert(result_H.to_string() == RESULT_H);
    }

    // test add int int
    {
        // Setup fixture
        const string  LHS_ARB  = "99999999999999999999999999999";
        const string  RHS_ARB  = "2";
        const string  RESULT_J = "100000000000000000000000000001";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_arb(RHS_ARB);
        BigInt  result_J;

        // Test
        result_J = lhs_arb + rhs_arb;

        // Verify
        assert(lhs_arb.to_string()  == LHS_ARB);
        assert(rhs_arb.to_string()  == RHS_ARB);
        assert(result_J.to_string() == RESULT_J);
    }

}

