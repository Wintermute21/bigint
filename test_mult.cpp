/*  BigInt Test Program
 *
 * Tests: mult
 */

//===========================================================================
#include "bigint.h"

#include <iostream>
#include <string>
#include <cassert>
using std::cerr;
using std::cout;

//===========================================================================
int main ()
{
    // test mult 0 0
    {
        // Setup fixture
        BigInt   lhs_0_A(0);
        BigInt   rhs_0_A(0);
        BigInt   result_A(0);

        // Test
        result_A = lhs_0_A * rhs_0_A;

        // Verify
        assert(lhs_0_A.to_string()  == "0");
        assert(rhs_0_A.to_string()  == "0");
        assert(result_A.to_string() == "0");
    }

    // test mult BigInt 0
    {
        // Setup fixture
        const string LHS_ARB_B = "43";
        const string RESULT_B  = "0";

        BigInt  lhs_arb_B(LHS_ARB_B);
        BigInt  rhs_0_B(0);
        BigInt  result_B(0);

        // Test
        result_B = lhs_arb_B * rhs_0_B;

        // Verify
        assert(lhs_arb_B.to_string() == LHS_ARB_B);
        assert(rhs_0_B.to_string()   == "0");
        assert(result_B.to_string()  == RESULT_B);
    }

    // test mult 0 BigInt
    {
        // Setup fixture
        const string RHS_ARB_C = "987";
        const string RESULT_C  = "0";

        BigInt  lhs_0_C(0);
        BigInt  rhs_arb_C(RHS_ARB_C);
        BigInt  result_C(0);

        // Test
        result_C = lhs_0_C * rhs_arb_C;

        // Verify
        assert(lhs_0_C.to_string()   == "0");
        assert(rhs_arb_C.to_string() == RHS_ARB_C);
        assert(result_C.to_string()  == RESULT_C);
    }

    // test mult BigInt BigInt
    {
        // Setup fixture
        const string LHS_ARB_F  = "3";
        const string RHS_ARB_F  = "9";
        const string RESULT_F   = "27";

        BigInt  lhs_arb_F(LHS_ARB_F);
        BigInt  rhs_arb_F(RHS_ARB_F);
        BigInt  result_F;

        // Test
        result_F = lhs_arb_F * rhs_arb_F;

        // Verify
        assert(lhs_arb_F.to_string() == LHS_ARB_F);
        assert(rhs_arb_F.to_string() == RHS_ARB_F);
        assert(result_F.to_string()  == RESULT_F);
    }

    // test mult BigInt BigInt
    {
        // Setup fixture
        const string LHS_ARB_G  = "3";
        const string RHS_ARB_G  = "999";
        const string RESULT_G  = "2997";

        BigInt  lhs_arb_G(LHS_ARB_G);
        BigInt  rhs_arb_G(RHS_ARB_G);
        BigInt  result_G;

        // Test
        result_G = lhs_arb_G * rhs_arb_G;

        // Verify
        assert(lhs_arb_G.to_string() == LHS_ARB_G);
        assert(rhs_arb_G.to_string() == RHS_ARB_G);
        assert(result_G.to_string()  == RESULT_G);
    }

    // test mult BigInt BigInt
    {
        // Setup fixture
        const string LHS_ARB_H = "99998";
        const string RHS_ARB_H = "7";
        const string RESULT_H  = "699986";

        BigInt  lhs_arb_H(LHS_ARB_H);
        BigInt  rhs_arb_H(RHS_ARB_H);
        BigInt  result_H;

        // Test
        result_H = lhs_arb_H * rhs_arb_H;

        // Verify
        assert(lhs_arb_H.to_string() == LHS_ARB_H);
        assert(rhs_arb_H.to_string() == RHS_ARB_H);
        assert(result_H.to_string()  == RESULT_H);
    }

    // test mult BigInt BigInt
    {
        // Setup fixture
        const string LHS_ARB_I = "1111111111111111111111";
        const string RHS_ARB_I = "2";
        const string RESULT_I  = "2222222222222222222222";

        BigInt  lhs_arb_I(LHS_ARB_I);
        BigInt  rhs_arb_I(RHS_ARB_I);
        BigInt  result_I;

        // Test
        result_I = lhs_arb_I * rhs_arb_I;

        // Verify
        assert(lhs_arb_I.to_string() == LHS_ARB_I);
        assert(rhs_arb_I.to_string() == RHS_ARB_I);
        assert(result_I.to_string()  == RESULT_I);
    }

    // test mult BigInt BigInt
    {
        // Setup fixture
        const string LHS_ARB_J = "99999999999999999999999999999999999";
        const string RHS_ARB_J = "7";
        const string RESULT_J  = "699999999999999999999999999999999993";

        BigInt  lhs_arb_J(LHS_ARB_J);
        BigInt  rhs_arb_J(RHS_ARB_J);
        BigInt  result_J;

        // Test
        result_J = lhs_arb_J * rhs_arb_J;

        // Verify
        assert(lhs_arb_J.to_string() == LHS_ARB_J);
        assert(rhs_arb_J.to_string() == RHS_ARB_J);
        assert(result_J.to_string()  == RESULT_J);
    }

    // test mult BigInt int
    {
        // Setup fixture
        const string LHS_ARB_K     =  "2";
        const int    RHS_ARB_K_int =  34 ;
        const string RESULT_K      = "68";

        BigInt  lhs_arb_K(LHS_ARB_K);
        int     rhs_arb_K(RHS_ARB_K_int);
        BigInt  result_K;

        // Test
        result_K = lhs_arb_K * rhs_arb_K;
		std::cout << lhs_arb_K.to_string() << std::endl;
		std::cout << result_K.to_string() << std::endl;
		std::cout << (BigInt(rhs_arb_K)).to_string() << std::endl;
        // Verify
        assert(lhs_arb_K.to_string() == LHS_ARB_K);
        assert(result_K.to_string()  == RESULT_K);
    }

    // test mult int BigInt 
    {
        // Setup fixture
        const int    LHS_ARB_K_int =  34 ;
        const string RHS_ARB_K     =  "2";
        const string RESULT_K      = "68";

        int     lhs_arb_K(LHS_ARB_K_int);
        BigInt  rhs_arb_K(RHS_ARB_K);
        BigInt  result_K;

        // Test
        result_K = lhs_arb_K * rhs_arb_K;
		
        // Verify
        assert(rhs_arb_K.to_string() == RHS_ARB_K);
        assert(result_K.to_string()  == RESULT_K);
    }

}

