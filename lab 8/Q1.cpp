//#include <iostream>
//using namespace std;
//class Vehicle {
//private: 
//	 string brand;
//	int speed;
//public:
//	Vehicle(string b, int s) : brand(b), speed(s) {}
//	void start() {
//		cout << "Vehicle started" << endl;
//	}
//};
//class Car : public Vehicle {
//private:
//	int doors;
//public:
//	Car(string b, int s, int d) : Vehicle(b, s), doors(d) {}
//	void playMusic() {
//		cout << "Playing music" << endl;
//	}
//};
//class Truck : public Vehicle {
//private:
//	float loadCapacity;
//public:
//	Truck(string b, int s, float lc) : Vehicle(b, s), loadCapacity(lc) {}
//	void loadCargo() {
//		cout << "Loading cargo" << endl;
//	}
//};
//class Bike : public Vehicle {
//private:
//	bool hasSelfStart;
//public:
//	Bike(string b, int s, bool hss) : Vehicle(b, s), hasSelfStart(hss) {}
//	void doWheelie() {
//		cout << "Doing a wheelie" << endl;
//	}
//};
//int main() {
//	Car myCar("Toyota", 120, 4);
//	Truck myTruck("Volvo", 90, 12.5);
//	Bike myBike("Yamaha", 100, true);
//	myCar.start();
//	myCar.playMusic();
//	myTruck.start();
//	myTruck.loadCargo();
//	myBike.start();
//	myBike.doWheelie();
//	return 0;
//}