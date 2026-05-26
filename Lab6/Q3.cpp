#include <iostream>
using namespace std;
class Polynomial {
private:
	int a, b, c;
public:
	Polynomial() {
		a = 0;
		b = 0;
		c = 0;
	}
	Polynomial(int a, int b, int c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	Polynomial(const Polynomial& p) {
		a = p.a;
		b = p.b;
		c = p.c;
	}
	bool operator == (const Polynomial& p) {
		if (a == p.a && b == p.b && c == p.c) return true;
		return false;
	}
	bool operator != (const Polynomial& p) {
		if (a != p.a || b != p.b || c != p.c) return true;
		return false;
	}
	
	friend Polynomial operator + (const Polynomial& p1, const Polynomial& p2);
	friend Polynomial operator - (const Polynomial& p1, const Polynomial& p2);
	friend Polynomial operator * (const Polynomial& p1, const Polynomial& p2);
	friend ostream& operator << (ostream& os, const Polynomial& p);
	friend istream& operator >> (istream& is, Polynomial& p);
	Polynomial& operator = (const Polynomial& p) {
		if (this == &p) return *this;
		a = p.a;
		b = p.b;
		c = p.c;
		return *this;
	}
	
};
Polynomial operator + (const Polynomial& p1, const Polynomial& p2) {
	Polynomial temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	temp.c = p1.c + p2.c;
	return temp;
}
Polynomial operator - (const Polynomial& p1, const Polynomial& p2) {
	Polynomial temp;
	temp.a = p1.a - p2.a;
	temp.b = p1.b - p2.b;
	temp.c = p1.c - p2.c;
	return temp;
}
Polynomial operator * (const Polynomial& p1, const Polynomial& p2) {
	Polynomial temp;
	temp.a = p1.a * p2.a;
	temp.b = p1.b * p2.b;
	temp.c = p1.c * p2.c;
	return temp;
}
ostream& operator << (ostream& os, const Polynomial& p) {
	os << p.a << "x^2 + " << p.b << "x + " << p.c;
	return os;
}
istream& operator >> (istream& is, Polynomial& p) {
	is >> p.a >> p.b >> p.c;
	return is;
}


int main() {
	Polynomial p1(2, 3, 5), p2(1, -4, 2);
	Polynomial p3 = p1 + p2;
	cout << p3;
}