//#include <iostream>
//using namespace std;
//class Set {
//private:
//	int* data;
//	int size;
//	int capacity;
//public:
//	Set() {
//		data = nullptr;
//		size = 0;
//		capacity = 0;
//	}
//	Set(int* elements, int s) {
//		s = size;
//		capacity = s* 2;
//		data = new int[capacity];
//		elements = new int[capacity];
//		for (int i = 0; i < size; i++) {
//			elements[i] = data[i]; // store the data of elements in the main data array
//		}
//		for (int i = size; i < capacity; i++) {
//			data[i] = 0;
//
//		}
//	}
//	/*void insert(int val) {
//		if (size == capacity) {
//			cout << "There is insufficient memory to add data" << endl;
//		}
//		while ()
//
//	}*/
//	int getsize() {
//		return size;
//	}
//	int getcapacity() {
//		return size * 2;
//	}
//	void print() {
//		for (int i = 0; i < capacity; i++) {
//			cout << data[i] << " ";
//		}
//
//	}
//};
//int main() {
//	int array[] = { 0, 1, 2, 3, 4, };
//	Set s2(array, 5);
//	s2.print();
//
//
//}