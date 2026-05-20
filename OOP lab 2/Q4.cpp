#include <iostream>
using namespace std;
char** AllocateMemory(int& rows, int& cols) {
	char** Matrix;
	Matrix = new char*[rows];
	for (int i = 0; i < rows; i++) {
		Matrix[i] = new char[cols];

	}
	return Matrix;
}
void inputMatrix(char** matrix,  int& rows,  int& cols) {
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "enter data to input " << endl;
			cin >> matrix[i][j];
			
			
		}
	}

}
char* ExtractAlpha(char** data, int& rows, int& cols) {
	int count=0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			
			if ((data[i][j] >= 'A' && data[i][j] <= 'Z') || (data[i][j] >= 'a' && data[i][j] <= 'z')) {
				count++;
			}
			

		}
	}
	char* alpha = new char[count + 1];
	alpha[count] = '\0';
	int index = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			
			if ((data[i][j] >= 'A' && data[i][j] <= 'Z') || (data[i][j] >= 'a' && data[i][j] <= 'z')) {
				alpha[index++] = data[i][j];
			}
			

		}
	}
	return alpha;

}
char* ExtractNum(char** data, int& rows, int& cols) {
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			if ((data[i][j] >= '1' && data[i][j] <= '9') ) {
				count++;
			}


		}
	}
	char* num = new char[count + 1];
	num[count] = '\0';
	int index = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			if ((data[i][j] >= '1' && data[i][j] <= '9') ) {
				num[index++] = data[i][j];
			}


		}
	}
	return num;

}
char* ExtractSpecial(char** data, int& rows, int& cols) {
	int count = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			if ((data[i][j] >= '!' && data[i][j] <= '/') || (data[i][j] >= ':' && data[i][j] <= '@')) {
				count++;
			}


		}
	}
	char* special = new char[count + 1];
	special[count] = '\0';
	int index = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			if ((data[i][j] >= '!' && data[i][j] <= '/') || (data[i][j] >= ':' && data[i][j] <= '@')) {
				special[index++] = data[i][j];
			}


		}
	}
	return special;

}
void print(char* arr) {
	int i = 0;
	cout << "\n********************************************************************************************************\n";
	while (arr[i] != '\0') {
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;

}
int main() {
	
	int rows, cols;
	
	cout << "Enter rows" << endl;
	cin >> rows;
	cout << "enter cols" << endl;
	cin >> cols;
	char** Matrix = AllocateMemory(rows, cols);
	inputMatrix(Matrix, rows, cols);
	char* alpha = ExtractAlpha(Matrix, rows, cols);
	char* num = ExtractNum(Matrix, rows, cols);
	char* special = ExtractSpecial(Matrix, rows, cols);
	print(alpha);
	print(num);
	print(special);
	for (int i = 0; i < rows; i++) {
		delete[] Matrix[i];
	}
	delete[] Matrix;
	delete[] alpha;

	return 0;
}