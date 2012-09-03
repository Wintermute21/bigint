#include "bigint.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <limits>
using std::copy;
using std::stringstream;
using std::vector;
using std::string;

BigInt::BigInt() {
    digits.push_back  (0);
}
BigInt::BigInt(const BigInt& x) {
init(x.to_string());
}
BigInt::BigInt(int x) {
	BigInt::init(x);
}
void BigInt::init (int x) {
	if (x == 0)
	{	digits.clear();
		digits.push_back  (0);
		return;
	}
	for (int i = 0; x != 0; ++i) {
		int digit = x % 10;
		x /= 10;
		digits.push_back  (digit);
	}
	reverse  (digits.begin  (),digits.end  ());
}

BigInt::BigInt(const string str) {
BigInt::init(str);
}

void BigInt::init(const string str) {
	digits.clear();
    for( unsigned int i = 0; i<str.size(); i++ )
    {
        char digit = static_cast<char>(str[i] - '0');
        digits.push_back  (digit);
        
    }
 
}

string BigInt::to_string  () const {
	string str;
	for(unsigned int i =0; i<digits.size  (); ++i) {
		char digit = static_cast<char>(digits[i] + '0');
		str += digit;
	}
	
	return str;
}

BigInt& BigInt::operator+= ( BigInt& rhs) {
	*this = *this + rhs;
	return *this;
}

BigInt BigInt::operator+(const BigInt& tmp) const {
	string result;
	int carry = 0;
	int this_digit_index = this->digits.size()-1;
	int tmp_digit_index = tmp.digits.size()-1;

	// set count to the larger of the two vector sizes
	int count = this->digits.size();
	if(tmp.digits.size() > count)
		count = tmp.digits.size();

	// loop for every digit
	for(int i = 0; i<count; i++)
	{
		int this_digit = 0;
		int tmp_digit = 0;

		if(this_digit_index > -1)
			this_digit = this->digits[this_digit_index--];
		if(tmp_digit_index > -1)
			tmp_digit = tmp.digits[tmp_digit_index--];

		// add the digits from each
		int result_digit = this_digit + tmp_digit + carry;

		// handle our carry.
		if(result_digit >= 10)
		{
			result_digit -= 10;
			carry = 1;
		}
		else
			carry = 0;

		result = (char)('0'+result_digit) + result;
	}

	if(carry != 0)
		result = '1' + result;

	return BigInt(result);
}

int BigInt::operator[](int idx) const
{
    return digits[idx];
}

int& BigInt::operator[](int idx) {
return digits[idx];
}

istream& operator>>(istream& in, BigInt& num)
{
	string str;
	in >> str;
	num.init(str);
    return in;
}

ostream& operator<< (ostream& out,BigInt& num) {
    for (int i = 0; i< num.digits.size  (); ++i) {
		out << num.digits[i];
	}
    return out;

}

BigInt BigInt::times_10(const int num)
{
	if (digits.size() == 1 && digits[0] == 0) return *this;
	for (int i = 0; i<num; ++i) {
	digits.insert(digits.end(),0);
	}	
	// the code I commented out does the following:
	//     shifts all the digits to the right "num" places
	//     adds "num" 0's to the left-hand-side of the vector of digits
	// is there an easier way to do this?
	// I think so
	// consider using insert function
	// if you do "digits.insert(0, 0)" it will add a 0 to the left and shift everything else
	// so then you would do that "num" times (and increment "used_space")
	// and then you're done!
	// -Nicholas
	/*
	int j=0;
	while(j<used_space)
	{	
		result.digits[j+num]=digits[j];
		++j;
	}	

	result.used_space = used_space + num;

	j=0;
	while(j<num)
		result.digits[j++] = 0;
	*/

	return *this;
}

void BigInt::times_single_digit(const int x)
{
    int spot_value = 0,
        carry = 0;
	if (x == 0) {
	digits.clear();
	digits.push_back(0);
	return;
	}
    for (int i = digits.size()-1;  i>=0; --i) {
        spot_value = ((x * digits[i]) + carry) % 10;
        carry = ((x * digits[i]) + carry) / 10;
        digits[i] = spot_value;
    }
	if(carry !=0) {
	digits.insert(digits.begin(),carry);
	}
}

BigInt BigInt::operator*(const BigInt& rhs)
{
    BigInt partial,
        result;

    for (int i = rhs.digits.size()-1; i >=0; --i) {
        partial = *this;
        partial.times_single_digit(rhs.digits[i]);
        partial.times_10(rhs.digits.size()-1-i);
        result = result + partial;
    }

    return result;
}
BigInt operator*(int& lhs, BigInt& rhs) {
BigInt x(lhs);
return x * rhs;
}
BigInt& BigInt::operator*=(BigInt& rhs) {
	*this = *this * rhs;
	return *this;
}
bool BigInt::operator==(const BigInt& x) {
	{
		for (int i = 0; i < x.digits.size  (); i++) {
			if (x.digits[i] != digits[i]) return false;
		}

		return true;
	}
}
BigInt& BigInt::operator=(const BigInt& x) {
init(x.to_string());
return *this;
}
BigInt operator+(const int& s, const BigInt& b) {
		BigInt result(s);
		return (result+ b);
}

BigInt& BigInt::operator++() {
	BigInt plus;
	*this = *this+ 1;
	return *this;
}

BigInt BigInt::operator++(int) {

	BigInt postinc_old = *this;
	*this = *this + 1;	
	return postinc_old;
	
}

int BigInt::size () {
return digits.size();
}