#include<iostream>
using namespace std;
class Employee {
public:
	string name;
	int id;
	Employee(string n, int i) : name(n), id(i) {}
	virtual int calculatePay() {
		cout << "Calculating pay for employee..." << endl;
		return 0;
	}
	virtual ~Employee() {
		cout << "Employee destructor called" << endl;
	}
};
class FullTimeEmployee : public Employee {
private:
	float monthlySalary;
public:
	FullTimeEmployee(string n, int i, float salary) : Employee(n, i), monthlySalary(salary) {}
	int calculatePay() {
		cout << "Calculating pay for full-time employee..." << endl;
		return monthlySalary;
	}
};
class PartTimeEmployee : public Employee {
private:
	float hourlyRate;
	int hoursWorked;
public:
	PartTimeEmployee(string n, int i, float rate, int hours) : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}
	int calculatePay() {
		cout << "Calculating pay for part-time employee..." << endl;
		return hourlyRate * hoursWorked;
	}
};

int main() {
	Employee* emp1 = new FullTimeEmployee("Sarah", 301, 50000);
	Employee* emp2 = new PartTimeEmployee("Tom", 302, 1000, 20);
	cout << "Full-Time Employee Pay: " << emp1->calculatePay()
		<< endl;
	cout << "Part-Time Employee Pay: " << emp2->calculatePay()
		<< endl;
	delete emp1; // Virtual destructor ensures correct deletion 
	delete emp2;
	return 0;
}