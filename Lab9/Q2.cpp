//#include <iostream>
//using namespace std;
//class ElectricVehicle {
//public:
//	float batteryCapacity;
//	void chargeBattery() {
//		cout << "Charging battery..." << endl;
//	}
//	ElectricVehicle(float capacity) : batteryCapacity(capacity) {}
//	ElectricVehicle() : batteryCapacity(0) {}
//	
//};
//class AutonomousVehicle {
//public:
//	string softwareVersion;
//	void updateSoftware() {
//		cout << "Updating software..." << endl;
//	}
//	AutonomousVehicle(string version) : softwareVersion(version) {}
//	AutonomousVehicle() : softwareVersion("1.0") {}
//
//};
//class SmartCar : public ElectricVehicle, public AutonomousVehicle {
//public:
//	string model;
//	SmartCar(string m, float capacity, string version) : ElectricVehicle(capacity), AutonomousVehicle(version), model(m) {}
//	SmartCar() : ElectricVehicle(), AutonomousVehicle() {
//		model = "Default";
//	}
//	void displayInfo() {
//		cout << "Model: " << model << endl;
//		cout << "Battery Capacity: " << batteryCapacity << endl;
//		cout << "Software Version: " << softwareVersion << endl;
//	}
//};
//int main() {
//	SmartCar car("Tesla Model Z", 75.5, "3.2.1");
//	car.displayInfo();
//	car.chargeBattery();
//	car.updateSoftware();
//	return 0;
//}