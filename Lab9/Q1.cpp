//#include <iostream>
//using namespace std;
//class LibaryMember {
//public:
//	string name;
//	int id;
//
//	LibaryMember(string n, int i) : name(n), id(i) {}
//	virtual void borrowBook() {
//		cout << "Borrowing book..." << endl;
//	}
//	virtual ~LibaryMember() {
//		cout << "LibaryMember destructor called" << endl;
//	}
//};
//class StudentMember : public LibaryMember {
//private:
//	const int maxBooks = 3;
//public:
//	StudentMember() : LibaryMember("Default", 0) {}
//	StudentMember(string n, int i) : LibaryMember(n, i) {}
//	void borrowBook()  {
//		cout << "Student " << name << " borrowing book..." << endl;
//	}
//
//};
//class TeacherMember: public LibaryMember {
//private:
//	const int maxBooks = 10;
//public:
//	TeacherMember(string n, int i) : LibaryMember(n, i) {}
//	TeacherMember() : LibaryMember("Default", 0) {}
//	void borrowBook() {
//		cout << "Teacher " << name << " borrowing book..." << endl;
//	}
//};
//
//int main() {
//	LibaryMember* members[2]; // Array of pointers to base class
//	members[0] = new StudentMember("Alice", 101);
//	members[1] = new TeacherMember("Mr. John", 202);
//	for (int i = 0; i < 2; i++) {
//		members[i]->borrowBook(); // Polymorphism in action 
//	}
//	// Cleanup 
//	for (int i = 0; i < 2; i++) {
//		delete members[i]; // Calls virtual destructor 
//	}
//	return 0;
//
//}