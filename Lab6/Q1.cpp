#include <iostream>
using namespace std;
class RationalNumber {
private:
	int numerator;
	int denominator;
public:
	RationalNumber() {
		numerator = 0;
		denominator = 1;

	}
	RationalNumber(int n, int d) {
		numerator = n;
		denominator = d;
	}
	RationalNumber(RationalNumber& obj) {
		this->numerator = obj.numerator;
		this->denominator = obj.denominator;
	}
	void print() {
		cout << numerator << "/" << denominator;
	}
	RationalNumber& operator ++() {
		numerator += denominator;
		return *this;
	}
	RationalNumber& operator ++(int) {
		RationalNumber temp = *this;
		numerator += denominator;
		return *this;
	}
	RationalNumber& operator --() {
		numerator -= denominator;
		return *this;
	}
	RationalNumber& operator--(int) {
		RationalNumber temp = *this;
		numerator -= denominator;
		return *this;
	}
	friend RationalNumber operator + (RationalNumber& num1, RationalNumber& num2);
	friend RationalNumber operator / (RationalNumber& num1, RationalNumber& num2);
	friend RationalNumber operator * (RationalNumber& num1, RationalNumber& num2);
	friend RationalNumber operator - (RationalNumber& num1, RationalNumber& num2);
	friend istream& operator >> (istream& input, RationalNumber& r);

	friend ostream& operator << (ostream& output, RationalNumber& r);

};
RationalNumber operator + (RationalNumber& num1, RationalNumber& num2) {
	RationalNumber res;
	if (num1.denominator == num2.denominator) {
		res.numerator = num1.numerator + num2.denominator;
		res.denominator = num1.denominator;
	}
	else {
		res.numerator = (num1.numerator * num2.denominator) + (num2.numerator * num1.denominator);
		res.denominator = num1.denominator * num2.denominator;
	}
	return res;
}
RationalNumber operator - (RationalNumber& num1, RationalNumber& num2) {
	RationalNumber res;
	if (num1.denominator == num2.denominator) {
		res.numerator = num1.numerator - num2.denominator;
		res.denominator = num1.denominator;
	}
	else {
		res.numerator = (num1.numerator * num2.denominator) - (num2.numerator * num1.denominator);
		res.denominator = num1.denominator * num2.denominator;
	}
	return res;
}
RationalNumber operator * (RationalNumber& num1, RationalNumber& num2) {
	RationalNumber res;
	res.numerator = num1.numerator * num2.numerator;
	res.denominator = num1.denominator * num2.denominator;
	return res;

}

RationalNumber operator / (RationalNumber& num1, RationalNumber& num2) {
	RationalNumber res;
	res.numerator = num1.numerator * num2.denominator;
	res.denominator = num1.denominator * num2.numerator;
	return res;
}
istream& operator >> (istream& input, RationalNumber& r) {
	cout << "enter num" << endl;
	input >> r.numerator;
	cout << "Enter denominator" << endl;
	input >> r.denominator;
	return input;
}
ostream& operator<< (ostream& output, RationalNumber& r) {
	cout << r.numerator << "/" << r.denominator;
	return output;
}

int main() {
	RationalNumber r1(3, 4), r2(4, 5);
	RationalNumber r3, r4, r5, r6, r7;
	r3 = r1 + r2;
	r3.print();
	r4 = r1 - r2;
	cout << "\nSubtracted answer" << endl;
	r4.print();
	r5 = r1 * r2;
	cout << "\nMultiplied answer" << endl;
	r5.print();
	r6 = r1 / r2;
	cout << "\n Divided answer" << endl;
	r6.print();
	++r6;
	cout << "\n pre increment answer" << endl;
	r6.print();
	r7 = r6++ + r1;
	cout << endl;
	r7.print();
	cout << endl;
	r6.print();
	cout >> r1;
}	