/*  BigInt Test Program
 *
 * Tests: test multAssign
 */

//===========================================================================
#include "bigint.h"

#include <iostream>
#include <string>
#include <cassert>
using std::cerr;
using std::cout;
using std::string;

//===========================================================================
int main ()
{
    // test mult assign 0 0
    {
        // Setup fixture
        BigInt       lhs_0(0);
        BigInt       rhs_0(0);

        // Test
        lhs_0 *= rhs_0;

        // Verify
        assert(lhs_0.to_string() == "0");
        assert(rhs_0.to_string() == "0");
    }

    // test mult assign int 0
    {
        // Setup fixture
        const string LHS_ARB  = "432";
        const string RESULT_B = "0";

        BigInt       lhs_arb(LHS_ARB);
        BigInt       rhs_0(0);

        // Test
        lhs_arb *= rhs_0;
		std::cout << rhs_0.to_string() << std::endl;
		std::cout << lhs_arb.to_string() << std::endl;
        // Verify
        assert(lhs_arb.to_string() == RESULT_B);
        assert(rhs_0.to_string()   == "0");
    }

    // test mult assign 0 int
    {
        // Setup fixture
        const string RHS_ARB  = "987";
        const string RESULT_C = "0";

        BigInt       lhs_0(0);
        BigInt       rhs_arb(RHS_ARB);

        // Test
        lhs_0 *= rhs_arb;

        // Verify
        assert(lhs_0.to_string()   == RESULT_C);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test mult assign int int
    {
        // Setup fixture
        const string LHS_ARB  = "3";
        const string RHS_ARB  = "9";
        const string RESULT_D = "27";

        BigInt  lhs_arb(LHS_ARB);
        BigInt  rhs_arb(RHS_ARB);

        // Test
        lhs_arb *= rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_D);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test mult assign int int
    {
        // Setup fixture
        const string  LHS_ARB  = "2000000000000";
        const string  RHS_ARB  = "5";
        const string  RESULT_E = "10000000000000";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb *= rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_E);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

    // test mult assign int int
    {
        // Setup fixture
        const string  LHS_ARB  = "2";
        const string  RHS_ARB  = "999999999999999999";
        const string  RESULT_F = "1999999999999999998";

        BigInt lhs_arb(LHS_ARB);
        BigInt rhs_arb(RHS_ARB);

        // Test
        lhs_arb *= rhs_arb;

        // Verify
        assert(lhs_arb.to_string() == RESULT_F);
        assert(rhs_arb.to_string() == RHS_ARB);
    }

}

