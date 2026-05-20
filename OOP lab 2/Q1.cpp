//#include <iostream>
//using namespace std;
//int charactercount(char data[]) {
//	int count = 0;
//	while (data[count] != '\0') {
//		count++;
//
//	}
//	return count;
//}
//int subcount(char data[]) {
//	int wordcount = 0;
//	for (int i = 0; i < charactercount(data); i++) {
//		if (data[i] == ',') {
//			wordcount++;
//		}
//	}
//	return wordcount+1;
//}
//char** extract(char data[]) {
//	int wordcount = subcount(data);
//	char** info = new char* [wordcount];
//	int subjectlen = 0;
//	int wordIndex = 0;
//	while (subjectlen < charactercount(data)) {
//		int commaIndex = subjectlen; 
//		while (commaIndex < charactercount(data) && data[commaIndex] != ',' && data[commaIndex] != '\0') {// a loop to check where the comma is placed
//			// it continues incrementing the index till a valid location is found
//			commaIndex++;
//		}
//		int length = commaIndex - subjectlen;// we begin by having the subject len at 0 so that we can update it later on in the code
//		info[wordIndex] = new char[length + 1];//makes a 1D array of the length of the word
//		for (int j = 0; j < length; j++) {
//			info[wordIndex][j] = data[subjectlen + j];
//
//		}
//		info[wordIndex][length] = '\0';
//		subjectlen = commaIndex + 1;
//		wordIndex++;
//	}
//	return info;
//}
//int Search(char** info, int wordcount, char search[]) {
//	int occurrences = 0;
//	for (int i = 0; i < wordcount; i++) {
//		if (strcmp(info[i], search) == 0) {
//			occurrences++;
//		}
//	}
//	return occurrences;
//}
//
//int main (){
//	char data[] = " programming fundamentals, object-oriented programming, digital logic design, applied programming.";
//	char search[] = "programming";
//	int wordcount = subcount(data);
//	char** info = extract(data);
//	for (int i = 0; i < wordcount; i++) {
//		cout << info[i] << endl;
//	}
//	int occurences = Search(info, wordcount, search);
//	cout << "The number of occurences of the string are: " << occurences << endl;
//
//	for (int i = 0; i < wordcount; i++) {
//		delete[] info[i];
//	}
//	delete[] info;
//	return 0;
//}