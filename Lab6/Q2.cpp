#include <iostream>
using namespace std;
class Matrix {
private:
int mat[2][2];
public:
Matrix() {
	mat[0][0] = 0;
	mat[0][1] = 0;
	mat[1][0] = 0;
	mat[1][1] = 0;
}
Matrix(int a, int b, int c, int d) {
	mat[0][0] = a;
	mat[0][1] = b;
	mat[1][0] = c;
	mat[1][1] = d;
}
Matrix(const Matrix& m) {
	mat[0][0] = m.mat[0][0];
	mat[0][1] = m.mat[0][1];
	mat[1][0] = m.mat[1][0];
	mat[1][1] = m.mat[1][1];
}
friend Matrix operator + (const Matrix& m1, const Matrix& m2);
friend Matrix operator - (const Matrix& m1, const Matrix& m2);
friend Matrix operator * (const Matrix& m1, const Matrix& m2);
friend ostream& operator << (ostream& os, const Matrix& m);
friend istream& operator >> (istream& is, Matrix& m);
Matrix& operator = (const Matrix& m) {
	if (this == &m) return *this;
	mat[0][0] = m.mat[0][0];
	mat[0][1] = m.mat[0][1];
	mat[1][0] = m.mat[1][0];
	mat[1][1] = m.mat[1][1];
	return *this;
}
   int& operator [] (int i) {
   if (i == 0) return mat[0][0];
   else if (i == 1) return mat[0][1];
   else if (i == 2) return mat[1][0];
   else if (i == 3) return mat[1][1];
   throw out_of_range("Index out of range");
   }
};
Matrix operator + (const Matrix& m1, const Matrix& m2) {
Matrix temp;
temp.mat[0][0] = m1.mat[0][0] + m2.mat[0][0];
temp.mat[0][1] = m1.mat[0][1] + m2.mat[0][1];
temp.mat[1][0] = m1.mat[1][0] + m2.mat[1][0];
temp.mat[1][1] = m1.mat[1][1] + m2.mat[1][1];
return temp;
}
Matrix operator - (const Matrix& m1, const Matrix& m2) {
Matrix temp;
temp.mat[0][0] = m1.mat[0][0] - m2.mat[0][0];
temp.mat[0][1] = m1.mat[0][1] - m2.mat[0][1];
temp.mat[1][0] = m1.mat[1][0] - m2.mat[1][0];
temp.mat[1][1] = m1.mat[1][1] - m2.mat[1][1];
return temp;
}

Matrix operator * (const Matrix& m1, const Matrix& m2) {
Matrix temp;
temp.mat[0][0] = m1.mat[0][0] * m2.mat[0][0] + m1.mat[0][1] * m2.mat[1][0];
temp.mat[0][1] = m1.mat[0][0] * m2.mat[0][1] + m1.mat[0][1] * m2.mat[1][1];
temp.mat[1][0] = m1.mat[1][0] * m2.mat[0][0] + m1.mat[1][1] * m2.mat[1][0];
temp.mat[1][1] = m1.mat[1][0] * m2.mat[0][1] + m1.mat[1][1] * m2.mat[1][1];
return temp;
}
ostream& operator << (ostream& os, const Matrix& m) {
os << m.mat[0][0] << " " << m.mat[0][1] << endl;
os << m.mat[1][0] << " " << m.mat[1][1] << endl;
return os;
}
istream& operator >> (istream& is, Matrix& m) {
is >> m.mat[0][0] >> m.mat[0][1] >> m.mat[1][0] >> m.mat[1][1];
return is;
}

int main() {
Matrix A, B, C;
cin >> A >> B;
C = A + B;
cout << C;
}
