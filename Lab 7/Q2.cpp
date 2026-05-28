//#include <iostream>
//using namespace std;
//class Engine {
//	string model;
//public:
//	Engine(string model) : model(model) {
//	}
//	void printDetails() const {
//		cout << "Engine Model: " << model << endl;
//	}
//};
//class Wheel {
//	int size;
//public:
//	Wheel(int size) : size(size) {
//	}
//	void printDetails() const {
//		cout << "Wheel Size: " << size << endl;
//	}
//};
//class Car {
//	string name;
//	Engine& engine;
//	Wheel& wheel;
//public:
//	Car(string name, Engine& eng, Wheel& wh) : name(name), engine(eng), wheel(wh) {
//	}
//	void printDetails() const {
//		cout << "Car Name: " << name << endl;
//		engine.printDetails();
//		wheel.printDetails();
//	}
//};
//int main() {
//	Engine e1("V8");
//	Wheel w1(17);
//	Car car1("Mustang", e1, w1);
//	car1.printDetails();
//	Engine e2("Hybrid");
//	Wheel w2(15);
//	Car car2("Prius", e2, w2);
//	car2.printDetails();
//
//}
