//#include <iostream>
//#include <memory>
//using namespace std;
//int main() {
////	int x = 50;
////	unique_ptr<int>u1(new int(x));
////	*u1 += 10;
////	cout << *u1;
////	cout << endl;
////
////	unique_ptr<int>u2;
////	//u1 = u2; // this gives an error as only one unique pointer can point to one memory location at a time. Having the same address be pointed by multiple pointers gives an error
////	u2 = move(u1);
////	cout << *u2 << " "<<  * u1; // the reason for *u1 not being printed is because it has given up the memory location of the variable x and is now pointing to a null pointer automatically
//	shared_ptr<int[]>s1(new int[5]  { 4,7,9,11,13 }) ;
//	shared_ptr<int[]>s2;
//	shared_ptr<int[]>s3;
//	cout << "the contents of s1 before: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//	s2 = s1;
//	for (int i = 0; i < 5; i++) {
//		s2[i] = s2[i]+7;
//	}
//	cout << "the contents of s1 after: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout <<s1[i] << " ";
//	}
//	cout << endl;
//	cout << "The number of pointers pointing to the location at s1 are: " << s1.use_count() << endl;
//	s3 = move(s1); // the compiler is not giving an error hence the transfer is taking place
//	cout << " use count at s1: " << s1.use_count() << endl;
//	cout << " use count at s2: " << s2.use_count() << endl;
//	cout << " use count at s3: " << s3.use_count() << endl;
//	// s1 has a different value which is 0 as s1 is currently pointing to nothing as it gave over the ownership to s3
//	cout << "s1 becomes invalid after transfer: " << endl;
//	
//	cout << endl;// since s1 is currently not pointing to any memory location, nothing is output
//	s1.reset(new int[3] {2,3,5});
//	cout << "the contents of s3: " << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << s3[i] << " ";
//	}
//	cout << endl;
//	cout << "the contents of s1: " << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//}