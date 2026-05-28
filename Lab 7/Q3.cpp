#include <iostream>
using namespace std;
class Department {
	string name;
	int deptCode;
public:
	Department(string n, int code) : name(n), deptCode(code) {
	}
	string getName() const {
		return name;
	}
	int getCode() const {
		return deptCode;
	}

	void print() const {
		cout << "Department Name: " << name << ", Code: " << deptCode << endl;
	}
};
class Student {
	string studentName;
	int id;
	Department* dept; 
public:
	Student(string name, int id, Department* d) : studentName(name), id(id), dept(d) {
	}
	void print() const {
		cout << "Student Name: " << studentName << ", ID: " << id << endl;
		if (dept) {
			dept->print();
		}
		else {
			cout << "No department assigned." << endl;
		}
	}
};
int main() {
	Department CS("Computer Science", 101);
	Department EE("Electrical Engineering", 202);
	Student a1("Ali", 1, &CS);
	Student a2("Sara", 2, &EE);
	a1.print();
	a2.print();
}