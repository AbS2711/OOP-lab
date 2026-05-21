#include<iostream>
using namespace std;
int** GetFactors(int count) {
	int** factors = new int* [count];
	for (int i = 0; i < count; i++) {
		int n;
		while (true) {
			cout << "Enter the number of factors you want to find: ";
			cin >> n;
			if (n > 6 && n < 100) {
				break;
			}
			else {
				cout << "Invalid input. Please enter a number between 6 and 100." << endl;
			}
		}
		int facor[100];
		int factor_count = 0;
		for (int j = 1; j <= n;j++) {
			if (n % j == 0) {
				facor[factor_count] = j;
				factor_count++;
			}
		}
		
		factors[i] = new int[factor_count + 2];
		factors[i][0] = n;
		factors[i][factor_count+1] = -1;
		for (int k = 1; k <= factor_count; k++) {
			factors[i][k] = facor[k - 1];
		}

	}
	return factors;
}
void print(int** factors, int count) {
	for (int i = 0; i < count; i++) {
		for (int j = 0; factors[i][j] != -1; j++) {
			cout << factors[i][j] << " ";
		}
		cout << endl;
	}
}
void freeMemory(int** factors, int count) {
	for (int i = 0; i < count; i++) {
		delete[] factors[i];
	}
	delete[] factors;
}
int main() {
	int count = 0;
	int n = 0;
	while (true) {
		cout << "Enter the number of test cases you want to run: ";
		cin >> count;
		if (count > 0 && count < 10) {
			break;
		}
		else {
			cout << "Invalid input. Please enter a number between 1 and 10." << endl;
		}
	}
	int** factors = GetFactors(count);
	print(factors, count);
	freeMemory(factors, count);
	return 0;

}