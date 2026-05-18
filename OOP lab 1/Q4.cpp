//#include <iostream>
//using namespace std;
//int StrLen(const char* str) {
//	int len = 0;
//	while (str[len] != '\0') {
//		len++;
//	}
//	return len;
//}
//void strConcat( char*firstName,  char*lastName, char*& fullName) {
//	int firstLen = StrLen(firstName);
//	int lastLen = StrLen(lastName);
//	fullName = new char[firstLen + lastLen + 2];
//
//	int index = 0;
//	for (int i = 0; i < lastLen; i++) {
//		fullName[index] = lastName[i];
//		index++;
//	}
//	fullName[index++] = ' ';
//	for (int i = 0; i < firstLen; i++) {
//		fullName[index] = firstName[i];
//		index++;
//	}
//	fullName[index] = '\0';
//}
//void Print(const char* const& name) {
//	cout << "Output: " << name << endl;
//}
//int main() {
//	char firstName[] = "Lionel";
//	char lastName[] = "Messi";
//	char* fullName = nullptr;
//	
//	strConcat(firstName, lastName, fullName);
//	Print(fullName);
//	delete[] fullName;
//	fullName = NULL;
//
//}