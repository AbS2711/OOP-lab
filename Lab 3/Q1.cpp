//#include <iostream>
//using namespace std;
//class Rectangle {
//private:
//	int length, width, area;
//public:
//	Rectangle() {
//		cout << "parameterless constructor" << endl;
//		length = 1;
//		width = 1;
//	}
//	Rectangle(int l, int w) {
//		cout << "parameterized constructor" << endl;
//		length = l;
//		width = w;
//			
//	}
//	void set_length(int l) {
//		length = l;
//		if (length <= 0) {
//			cout << "Invalid length" << endl;
//		}
//	}
//	void set_width(int w) {
//		width = w;
//		if (width <= 0) {
//			cout << "Invalid width" << endl;
//		}
//	}
//	int get_length() {
//		return length;
//	}
//	int get_width() {
//		return width;
//	}
//	int get_area(int a) {
//		return area;
//	}
//	void calculate_area() {
//		area = length * width;
//		
//	}
//	bool is_square() {
//		if (length == width) {
//			return true;
//		}
//		else {
//			return false;	
//		}
//	}
//
//	void display() {
//		for (int i = 0; i < length; i++) {
//			for (int j = 0; j < width; j++) {
//				cout << "*";
//			}
//			cout << endl;
//		}
//	}
//};
//class cuboid {
//private:
//	int length, width, height, volume, surface_area;
//public:	
//	cuboid() {
//		cout << "parameterless constructor" << endl;
//		length = 1;
//		width = 1;
//		height = 1;
//	}
//	cuboid(int l, int w, int h) {
//		cout << "parameterized constructor" << endl;
//		length = l;
//		width = w;
//		height = h;
//	}
//	void set_length(int l) {
//		length = l;
//		if (length <= 0) {
//			cout << "Invalid length" << endl;
//		}
//	}
//	void set_width(int w) {
//		width = w;
//		if (width <= 0) {
//			cout << "Invalid width" << endl;
//		}
//	}
//	void set_height(int h) {
//		height = h;
//		if (height <= 0) {
//			cout << "Invalid height" << endl;
//		}
//	}
//	int get_length() {
//		return length;
//	}
//	int get_width() {
//		return width;
//	}	
//	int get_height() {
//		return height;
//	}	
//	int get_volume() {
//		volume = length * width * height;
//		
//		return volume;
//
//	}	
//	bool is_cube() {
//		if (length == width && width == height) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	void calculate_surface_area() {
//		surface_area = 2 * (length * width + width * height + height * length);
//	}
//	void display() {
//		cout << "Length: " << length << endl;
//		cout << "Width: " << width << endl;	
//		cout << "Height: " << height << endl;
//		cout << "Volume: " << volume << endl;
//		cout << "Surface Area: " << surface_area << endl;
//
//	}
//};
//
//int main() {
//	
//	Rectangle r1;
//	cuboid c1;
//	r1.display();
//	c1.display();
//	Rectangle r2(5, 10);
//	cuboid c2(5, 10, 15);
//	r2.display();	
//	c2.display();
//	r2.set_length(-1);
//	r2.set_width(-1);
//	c2.set_length(-1);
//	c2.set_width(-1);
//	c2.set_height(-1);
//	r2.set_length(20);
//	r2.set_width(20);
//	c2.set_length(20);
//	c2.set_width(20);
//	c2.set_height(20);
//	r2.calculate_area();
//	r2.display();
//	c2.calculate_surface_area();
//	c2.get_volume();
//	c2.display();
//	cout << r2.is_square() << endl;
//	cout << c2.is_cube() << endl;
//	return 0;
//
//
//
//
//}