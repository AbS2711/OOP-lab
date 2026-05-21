//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//class Student {
//private:
//	char* name;
//	int rollNumber;
//	static int totalStudents;
//public:
//	Student(const char* n, int rollNumber) {
//		name = new char[strlen(n) + 1];
//		strcpy_s(name, strlen(n)+1, n);
//		this ->rollNumber = rollNumber;
//		totalStudents++;
//	}
//	Student( const Student & s) {
//		this->name = new char[strlen(s.name) + 1];
//		strcpy_s(this->name,strlen( s.name)+1, s.name);
//		this->rollNumber = s.rollNumber;
//		totalStudents++;
//	}
//	char* getName() const {
//		return name;
//	}
//	int getRollNumber() const {
//		return rollNumber;
//	}
//	static int getTotalStudents() {
//		return totalStudents;
//	}
//	~Student() {
//		cout << "Destructor called for " << name << endl;
//		delete[] name;
//		totalStudents--;
//		cout << "Total Students: " << totalStudents << endl;
//	}
//	void display() {
//		cout << name; 
//			cout << rollNumber;
//	}
//};
//int Student::totalStudents = 0;
//int main() {
//	Student s1("John", 1);
//	Student s2("Doe", 2);
//	Student s3 = s1;
//	cout << "Student 1: " << s1.getName() << " " << s1.getRollNumber() << endl;
//	cout << "Student 2: " << s2.getName() << " " << s2.getRollNumber() << endl;
//	cout << "Student 3: " << s3.getName() << " " << s3.getRollNumber() << endl;
//
//	cout << "Total Students: " << Student::getTotalStudents() << endl;
//}