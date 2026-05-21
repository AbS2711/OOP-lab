//#include <iostream>
//using namespace std;
//
//class BiggerInt {
//private:
//    int* big_int_; // Pointer to dynamically store the big integer as an array
//    int int_length_; // Variable to store the length of the big integer
//
//public:
//    // Default constructor initializes big_int_ to nullptr and int_length_ to 0
//    BiggerInt() : big_int_(nullptr), int_length_(0) {}
//
//    // Overloaded constructor to initialize object with an integer array (Deep Copy)
//    BiggerInt(const int* obj, int size) {
//        int_length_ = size;
//        big_int_ = new int[int_length_]; // Allocate memory for the array
//        for (int i = 0; i < int_length_; i++) {
//            big_int_[i] = obj[i]; // Perform deep copy of elements
//        }
//    }
//
//    // Copy constructor for Shallow Copy
//    BiggerInt(const BiggerInt& obj) {
//        big_int_ = obj.big_int_; // Shallow copy (just copying the pointer)
//        int_length_ = obj.int_length_;
//    }
//
//    // Function to perform deep copy from another BiggerInt object
//    void assign(const BiggerInt& obj) {
//        delete[] big_int_; // Deallocate previous memory (if any) to prevent memory leaks
//        int_length_ = obj.int_length_;
//        big_int_ = new int[int_length_]; // Allocate new memory
//        for (int i = 0; i < int_length_; i++) {
//            big_int_[i] = obj.big_int_[i]; // Deep copy elements from obj
//        }
//    }
//
//    // Overloaded assign function to assign values from an integer array (Deep Copy)
//    void assign(const int* big_int, int size) {
//        delete[] big_int_; // Deallocate previous memory (if any)
//        int_length_ = size;
//        big_int_ = new int[int_length_]; // Allocate new memory
//        for (int i = 0; i < int_length_; i++) {
//            big_int_[i] = big_int[i]; // Deep copy elements from given array
//        }
//    }
//
//    // Function to append another BiggerInt object to this one (Deep Copy of elements)
//    void append(const BiggerInt& obj) {
//        int new_size = int_length_ + obj.int_length_; // Compute new size
//        int* temp = new int[new_size]; // Allocate memory for the new array
//
//        // Copy elements from current object
//        for (int i = 0; i < int_length_; i++) {
//            temp[i] = big_int_[i];
//        }
//
//        // Copy elements from the passed object (Deep Copy)
//        for (int i = 0; i < obj.int_length_; i++) {
//            temp[int_length_ + i] = obj.big_int_[i];
//        }
//
//        delete[] big_int_; // Deallocate old memory
//        big_int_ = temp; // Update pointer
//        int_length_ = new_size; // Update length
//    }
//
//    // Overloaded append function to append values from an integer array (Deep Copy of elements)
//    void append(const int* big_int, int size) {
//        int new_size = int_length_ + size; // Compute new size
//        int* temp = new int[new_size]; // Allocate new memory
//
//        // Copy existing elements
//        for (int i = 0; i < int_length_; i++) {
//            temp[i] = big_int_[i];
//        }
//
//        // Append new elements (Deep Copy)
//        for (int i = 0; i < size; i++) {
//            temp[int_length_ + i] = big_int[i];
//        }
//
//        delete[] big_int_; // Deallocate old memory
//        big_int_ = temp; // Update pointer
//        int_length_ = new_size; // Update length
//    }
//
//    // Function to compare current BiggerInt object with another object
//    // Returns 0 if equal, 1 if this object is less, and 2 if greater
//    int compareTo(const BiggerInt& obj) {
//        if (int_length_ < obj.int_length_) return 1;
//        if (int_length_ > obj.int_length_) return 2;
//
//        for (int i = 0; i < int_length_; i++) {
//            if (big_int_[i] < obj.big_int_[i]) return 1;
//            if (big_int_[i] > obj.big_int_[i]) return 2;
//        }
//        return 0; // Objects are equal
//    }
//
//    // Overloaded compareTo function to compare with an integer array
//    int compareTo(const int* big_int, int size) {
//        if (int_length_ < size) return 1;
//        if (int_length_ > size) return 2;
//
//        for (int i = 0; i < int_length_; i++) {
//            if (big_int_[i] < big_int[i]) return 1;
//            if (big_int_[i] > big_int[i]) return 2;
//        }
//        return 0; // Arrays are equal
//    }
//
//    // Function to display the big integer
//    void display() {
//        if (big_int_ == nullptr || int_length_ == 0) {
//            cout << "No Value Assigned" << endl;
//            return;
//        }
//
//        for (int i = 0; i < int_length_; i++) {
//            cout << big_int_[i] << " ";
//        }
//        cout << endl;
//    }
//
//    // Destructor to deallocate dynamically allocated memory (Avoid Memory Leak)
//    ~BiggerInt() {
//        delete[] big_int_; // Free memory
//    }
//};
//
//// Driver function to test the class functionality
//int main() {
//    int arr1[] = { 1, 2, 3, 4, 5 };
//    int arr2[] = { 6, 7, 8 };
//
//    BiggerInt b1(arr1, 5); // Create object using an array (Deep Copy in Constructor)
//    BiggerInt b2;
//    b2.assign(arr2, 3); // Assign values from an array (Deep Copy in assign function)
//    BiggerInt b3 = b1; // Create b3 as a shallow copy of b1
//    BiggerInt b4(b1); // Another shallow copy using copy constructor
//
//    cout << "BiggerInt 1: ";
//    b1.display(); // Display first object
//    cout << "BiggerInt 2: ";
//    b2.display(); // Display second object
//    cout << "BiggerInt 3 (Shallow Copy of B1): ";
//    b3.display();
//    cout << "BiggerInt 4 (Shallow Copy of B1 via Copy Constructor): ";
//    b4.display();
//
//    b1.append(b2); // Append b2 to b1 (Deep Copy in append function)
//    cout << "After Append: ";
//    b1.display(); // Display after append
//
//    int comp = b1.compareTo(arr1, 5); // Compare b1 with arr1
//    cout << "Comparison Result: " << comp << endl;
//
//    return 0;
//}