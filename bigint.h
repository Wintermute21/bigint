#ifndef bigint_h
#define bigint_h
#include <iostream>
#include <vector>
#include <istream>
#include <iostream>
#include <string>
using std::string;
using std::ostream;
using std::istream;
using std::vector;

class BigInt {
public:
	BigInt();
	BigInt(const BigInt &);
	BigInt(vector<int>);
	BigInt(int);
	BigInt(const string);
	bool operator==(const BigInt&);
	bool operator==(int);
	bool operator==(vector<int>);
	BigInt& operator++();
	friend BigInt operator+(const int&, const BigInt&);
	BigInt operator++(int);
	BigInt& operator+=(BigInt&);
	BigInt times_10(int);
	void times_single_digit(const int);
	BigInt operator*(const BigInt&);
	int operator[](const int);
	BigInt operator+(const BigInt&) const;
	string operator+(const string&) const;
	string to_string  () const;
	friend ostream& operator<< (ostream&,BigInt&);
	friend istream& operator>>(istream&, BigInt&);
	BigInt& operator*=(BigInt&);
	BigInt& operator=(const BigInt&);
	int size(int);
private:
	vector<int> digits;
	void zero ();
	void init(int);
	void init(const string);
	void init(vector<int>);
};
BigInt operator*(int&, BigInt&);
#endif // bigint_h__