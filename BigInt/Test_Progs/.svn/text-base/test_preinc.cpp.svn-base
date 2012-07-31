/*  BigInt Test Program
 *
 * Tests: preinc
 */

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
void test_preinc_A();
void test_preinc_B();
void test_preinc_C();
void test_preinc_D();

//===========================================================================
int main ()
{
    test_preinc_A();
    test_preinc_B();
    test_preinc_C();
    test_preinc_D();
}

//===========================================================================
void test_preinc_A()
{
    // Setup fixture
    BigInt  num_A(6);

    // Test
    BigInt result = ++num_A;

    // Verify
    assert(result.to_string() == "7");
    assert(num_A.to_string()  == "7");
}

//---------------------------------------------------------------------------
void test_preinc_B()
{
    // Setup fixture
    BigInt  num_B(0);

    // Test
    BigInt result = ++num_B;

    // Verify
    assert(result.to_string() == "1");
    assert(num_B.to_string()  == "1");
}

//---------------------------------------------------------------------------
void test_preinc_C()
{
    // Setup fixture
    BigInt  num_C(9999);

    // Test
    BigInt result = ++num_C;

    // Verify
    assert(result.to_string() == "10000");
    assert(num_C.to_string()  == "10000");
}

//---------------------------------------------------------------------------
void test_preinc_D()
{
    // Setup fixture
    BigInt  num_D("999999999999");

    // Test
    BigInt result = ++num_D;

    // Verify
    assert(result.to_string() == "1000000000000");
    assert(num_D.to_string()  == "1000000000000");
}

