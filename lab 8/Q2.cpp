//#include<iostream>
//using namespace std;
//class Product {
//private:
//	string productName;
//	float price;
//public:
//	Product(string n, float p) : productName(n), price(p) {}
//	void displayProduct() {
//		cout << "Product Name: " << productName << ", Price: " << price << endl;
//	}
//};
//class Electronics : public Product {
//private:
//	int warrantyPeriod;
//public:
//	Electronics(string n, float p, int wp) : Product(n, p), warrantyPeriod(wp) {}
//	void displayWarranty() {
//		cout << "Warranty Period: " << warrantyPeriod << " months" << endl;
//	}
//};
//class WashingMachine : public Electronics {
//private:
//	int loadCapacity;
//public:
//	WashingMachine(string n, float p, int wp, int lc) : Electronics(n, p, wp), loadCapacity(lc) {}
//	void startWashCycle() {
//		cout << "Starting wash cycle with load capacity: " << loadCapacity << " kg" << endl;
//	}
//};
//class microwave : public Electronics {
//private:
//	int maxTemp;
//public:
//	microwave(string n, float p, int wp, int mt) : Electronics(n, p, wp), maxTemp(mt) {}
//	void startBakeMode() {
//		cout << "Starting baking at max temp: " << maxTemp << " degrees" << endl;
//	}
//	void setBakeTime(int time) {
//		cout << "Setting bake time to: " << time << " minutes" << endl;
//	}
//};
//int main() {
//	WashingMachine wm("LG TurboWash", 599.99, 2, 7.5);
//	microwave oven("Samsung BakePro" , 349.99, 1, 220);
//
//	wm.displayProduct();
//	wm.displayWarranty();
//	wm.startWashCycle();
//
//	cout<< "\n";
//
//	oven.displayProduct();
//	oven.displayWarranty();
//	oven.startBakeMode();
//	oven.setBakeTime(30);
//
//	return 0;
//}