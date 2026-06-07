//#include <iostream>
//using namespace std;
//class Appliance {
//public:
//	virtual void powerConsumption() const = 0; 
//};
//class WashingMachine : public Appliance {
//public:
//	void powerConsumption() const override {
//		cout << "Washing Machine: 500W" << endl;
//	}
//	// TODO: Implement powerConsumption() for WashingMachine
//};
//class Refrigerator : public Appliance {
//
//public:
//	void powerConsumption() const override {
//		cout << "Refrigerator: 200W" << endl;
//	}
//
//	// TODO: Implement powerConsumption() for Refrigerator
//};
//class Microwave : public Appliance {
//
//
//public:
//	void powerConsumption() const override {
//		cout << "Microwave: 800W" << endl;
//	}
//	// TODO: Implement powerConsumption() for Microwave
//};
//
//	
//    int main() {
//        Appliance* appliances[] = {
//            new WashingMachine(),
//            new Refrigerator(),
//            new Microwave()
//        };
//
//        for (const auto& appliance : appliances) {
//            appliance->powerConsumption();
//        }
//
//        // Clean up dynamically allocated memory
//        for (const auto& appliance : appliances) {
//            delete appliance;
//        }
//
//        return 0;
//    }
