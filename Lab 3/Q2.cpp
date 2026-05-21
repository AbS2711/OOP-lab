//#include <iostream>
//using namespace std;
//
//class Set {
//private:
//    int* data;    // Pointer to an array of integers
//    int size;     // Number of elements in the set
//    int capacity; // Maximum capacity of the set
//
//public:
//    // Default constructor
//    Set() : data(nullptr), size(0), capacity(0) {}
//
//    // Parameterized constructor
//    Set(int* elements, int s) : size(s), capacity(2 * s) {//member initialiser list
//        data = new int[capacity];
//        for (int i = 0; i < size; i++) {
//            data[i] = elements[i];
//        }
//        for (int i = size; i < capacity; i++) {
//            data[i] = 0; 
//        }
//    }
//
//    // deep copy
//    Set(const Set& obj) : size(obj.size), capacity(obj.capacity) {
//        data = new int[capacity];
//        for (int i = 0; i < capacity; i++) {
//            data[i] = obj.data[i];
//        }
//    }
//
//    
//    ~Set() {
//        delete[] data;
//    }
//
//    
//    Set& operator=(const Set& obj) {
//        if (this == &obj) return *this; 
//
//        delete[] data; 
//        size = obj.size;
//        capacity = obj.capacity;
//        data = new int[capacity];
//        for (int i = 0; i < capacity; i++) {
//            data[i] = obj.data[i];
//        }
//        return *this;
//    }
//
//    
//    void insert(int value) {
//        if (size == capacity) {
//            cout << "insufficient memory" << endl;
//            return;
//        }
//
//        
//        for (int i = 0; i < size; i++) {
//            if (data[i] == value) {
//                cout << "duplicate element" << endl;
//                return;
//            }
//        }
//
//        
//        data[size++] = value;
//    }
//
//    
//    void remove(int value) {
//        int index = -1;
//        for (int i = 0; i < size; i++) {
//            if (data[i] == value) {
//                index = i;
//                break;
//            }
//        }
//
//        if (index == -1) {
//            cout << "no such value exists" << endl;
//            return;
//        }
//
//        
//        for (int i = index; i < size - 1; i++) {
//            data[i] = data[i + 1];
//        }
//
//        data[--size] = 0; 
//    }
//
//    
//    void Union(const Set& s2) {
//        Set obj;
//        obj.capacity = size + s2.size;
//        obj.data = new int[obj.capacity];
//        obj.size = 0;
//
//       
//        for (int i = 0; i < size; i++) {
//            obj.data[obj.size++] = data[i];
//        }
//
//       
//        for (int i = 0; i < s2.size; i++) {
//            bool exists = false;
//            for (int j = 0; j < obj.size; j++) {
//                if (s2.data[i] == obj.data[j]) {
//                    exists = true;
//                    break;
//                }
//            }
//            if (!exists) {
//                obj.data[obj.size++] = s2.data[i];
//            }
//        }
//
//      
//        for (int i = obj.size; i < obj.capacity; i++) {
//            obj.data[i] = 0;
//        }
//
//        obj.print();
//    }
//
//
//    void intersection(const Set& s2) {
//        Set obj;
//        obj.capacity = size;
//        obj.data = new int[obj.capacity];
//        obj.size = 0;
//
//        for (int i = 0; i < size; i++) {
//            for (int j = 0; j < s2.size; j++) {
//                if (data[i] == s2.data[j]) {
//                    obj.data[obj.size++] = data[i];
//                    break;
//                }
//            }
//        }
//
//        for (int i = obj.size; i < obj.capacity; i++) {
//            obj.data[i] = 0;
//        }
//
//        obj.print();
//    }
//
//    
//    void print()  {
//        for (int i = 0; i < capacity; i++) {
//            cout << data[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    int arr1[] = { 7, 9, 1, 5, 8 };
//    int arr2[] = { 2, 7, 3, 9, 5 };
//
//    Set s1(arr1, sizeof(arr1) / sizeof(int));
//    Set s2(arr2, sizeof(arr2) / sizeof(int));
//    Set s3(s1);
//    Set s4 = s2;
//
//    s1.insert(8); // Duplicate value
//    s2.insert(3); // Duplicate value
//
//    for (int i = 0; i < 5; i++) {
//        s1.insert(i + 10);
//    }
//
//    s1.insert(50); // Insufficient memory
//    s2.remove(10); // No such value exists
//    s1.remove(10);
//
//    s3.Union(s4);        // Union: {7, 9, 1, 5, 8, 2, 3}
//    s3.intersection(s4); // Intersection: {7, 9, 5}
//
//    s1.print();
//    s2.print();
//
//    s2 = s1; // Deep copy
//    s2.insert(120);
//    s1.print();
//
//    return 0;
//}
//
///*
//Explanation:
//1. since we are using deepcopy, s2 gets a new set of data that is local to it alone. Any changes made to s1 object would not cause changes to be made to the s2 data set.
//2. destructor makes sure that the used memory blocks are freed so that memory leakage can be avoided
//3.union and intersection functions are implemented to find the union and intersection of two sets. They make sure that duplicate values are not added to the set.
//4. if instead of deep copy, shallow copy was implemented both s1 and s2 would be pointing to the same memory and any changes made to either would cause the valeus for both to be chaned
//*/