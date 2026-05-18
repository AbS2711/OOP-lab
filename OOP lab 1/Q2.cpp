//#include<iostream>
//using namespace std;
//int* getFactors(const int& v)
//{
//	int count = 0;
//	for (int i = 1; i <= v; i++)
//	{
//		if (v % i == 0)
//			count++;
//	}
//	int* temp = new int[count + 1];
//	for (int i = 1, j = 0; i <= v; i++)
//	{
//		if (v % i == 0)
//		{
//			*(temp + j) = i;
//			j++;
//		}
//	}
//	*(temp + count) = -1;
//	return temp;
//}
//void print(int* const* const& ptr, int  size, int arr[]) {
//	for (int i = 0; i < size; i++)
//	{
//
//		cout << "factors of " << arr[i] << ": ";
//		for (int j = 0; ptr[i][j] != -1; j++)
//		{
//			cout << ptr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void clearMemory(int**& data, int r)
//{
//	for (int i = 0; i < r; i++)
//	{
//		delete[] * (data + i); 
//	}
//	delete[] data; 
//	data = nullptr; 
//}
//int main()
//{
//	
//	const int size = 5;
//	int elem[size] = { 10, 7, 12, 8, 50 };
//	
//	int** factors = new int* [size];
//
//	for (int i = 0; i < size; i++)
//	{
//	
//		factors[i] = getFactors(elem[i]);
//		
//	}
//	print(factors, size, elem);
//	clearMemory(factors, size);
//}