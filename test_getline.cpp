/**  string - Test: getline
 *
 *     Note: See the makefile for the input
 */

#ifdef STD_STRING
  #include <string>
  using std::string;
#else
  #include "string.h"
  using cs33001::string;
#endif

#include <iostream>
#include <cassert>
#include <sstream>
using std::cin;
using std::cout;
using std::cerr;

void test_getline();

int main()
{
    test_getline();
}

void test_getline()
{
    // Setup fixture
    string result("apples, peaches");
    string more("watermelon");
    string input = result + "\n" + more;
    std::istringstream in_stream(input.c_str());

    string fruit;

    // Test
    getline(in_stream, fruit);

    // Verify
    assert(fruit == result);
    assert(fruit.size() == 15);
}

