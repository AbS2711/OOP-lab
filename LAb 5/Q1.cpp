#include <iostream>
using namespace std;
class Rectangle {
	int length, width;
	int* l = &length;
	int* w = &width;
	static int count;

public:
	Rectangle() {
		length = 0;
		width = 0;
		count++;
	}
	void setDimensions(int length, int width) {
		this->length = length;
		this->width = width;

	}
	Rectangle& setLength(int length) {
		this->length = length;
		return *this;
	}
	Rectangle& setWidth(int width) {
		this->width = width;
		return *this;
	}
	static int getCount() {
		return count;
	}

	void display() {
		cout << "Length: " << *l << endl;
		cout << "Width: " << *w << endl;

	}
	~Rectangle() {
		count--;
		delete[] l;
		delete[] w;

	}
};

int Rectangle::count = 0;

int main() {
	Rectangle s1, s2;
	s1.setLength(10).setWidth(5);
	s2.setDimensions(20, 10);
	s1.display();
	s2.display();
}