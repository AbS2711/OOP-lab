//#include <iostream>
//#include <string>
//using namespace std;
//class Person {
//protected:
//	string name;
//public:
//	Person(string n) : name(n) {}
//	void display() {
//		cout << "Name: " << name << endl;
//
//	}
//};
//class Employee : virtual public Person {
//public:
//	Employee(string n) : Person(n) {}
//	void display() {
//		cout << "Employee Name: " << name << endl;
//	}
//};
//class Student : virtual public Person {
//public:
//	Student(string n) : Person(n) {}
//	void display() {
//		cout << "Student Name: " << name << endl;
//	}
//};
//class Intern : public Employee, public Student {
//public:
//	Intern(string n) : Person(n), Employee(n), Student(n) {}
//	void display() {
//		cout << "Intern Name: " << name << endl;
//	}
//	
//};
//int main() {
//	Intern i("Jawad");
//	i.display();
//		return 0;
//}