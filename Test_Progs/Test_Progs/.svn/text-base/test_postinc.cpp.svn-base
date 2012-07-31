/*  BigInt Test Program
 *
 * Tests: postinc
 */

#include "bigInt.h"

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
void test_postinc_A();
void test_postinc_B();
void test_postinc_C();
void test_postinc_D();

//===========================================================================
int main ()
{
    test_postinc_A();
    test_postinc_B();
    test_postinc_C();
    test_postinc_D();
}

//===========================================================================
void test_postinc_A()
{
    // Setup fixture
    BigInt  num_A(6);

    // Test
    BigInt result = num_A++;

    // Verify
    assert(result.to_string() == "6");
    assert(num_A.to_string()  == "7");
}

//---------------------------------------------------------------------------
void test_postinc_B()
{
    // Setup fixture
    BigInt  num_B(0);

    // Test
    BigInt result = num_B++;

    // Verify
    assert(result.to_string() == "0");
    assert(num_B.to_string()  == "1");
}

//---------------------------------------------------------------------------
void test_postinc_C()
{
    // Setup fixture
    BigInt  num_C(9999);

    // Test
    BigInt result = num_C++;

    // Verify
    assert(result.to_string() == "9999");
    assert(num_C.to_string()  == "10000");
}

//---------------------------------------------------------------------------
void test_postinc_D()
{
    // Setup fixture
    BigInt  num_D("999999999999");

    // Test
    BigInt result = num_D++;

    // Verify
    assert(result.to_string() == "999999999999");
    assert(num_D.to_string()  == "1000000000000");
}

