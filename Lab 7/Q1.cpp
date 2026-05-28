//#include <iostream>
//using namespace std;
//class Window {
//	int width, height;
//public:
//	Window() :width(0), height(0) {
//	}
//	Window(int w, int h) : width(w), height(h) {
//	}
//	void setDimensions(int w, int h) {
//		width = w;
//		height = h;
//	}
//	void printDimensions() {
//		cout << "Width: " << width << ", Height: " << height << endl;
//	}
//};
//// Light class - heap object
//class Light {
//	string type;
//public:
//	Light() : type("default") {
//	}
//
//	Light(string t) : type(t) {
//	}
//	void setType(string t) {
//		type = t;
//	}
//	void printType() const {
//		cout << "Light Type: " << type << endl;
//	}
//};
//class Room {
//	Window window; // composition on stack
//	Light* light; // composition on heap
//public:
//	Room() : window(), light(new Light()) {
//	}
//	Room(int w, int h, string lightType) : window(w, h), light(new Light(lightType)) {
//	}
//	~Room() {
//		delete light;
//	}
//	void setRoomDetails(int w, int h, string lightType) {
//		window.setDimensions(w, h);
//		light->setType(lightType);
//	}
//	void printRoomDetails()  {
//		window.printDimensions();
//		light->printType();
//	}
//};
//int main() {
//	Room r1(50, 100, "LED");
//	r1.printRoomDetails();
//	r1.setRoomDetails(60, 120, "CFL");
//	r1.printRoomDetails();
//	return 0;
//}