#include <iostream>
using namespace std;
int* GetData(int xyz)
{
	int* ptr = 0;
	if (xyz % 2 == 0)
	{
		ptr = new int[5];
		for (int i = 0; i < 5; i++)
			ptr[i] = i + 1;
	}
	return ptr;
}
int main() {
	int* array1[10];
	for (int i = 0; i < 10; i++)
	{
		array1[i] = GetData(i);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array1[i][j] = array1[i][j] * 2;
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}
	//Assume we have Deallocation code here that
	//successfully deallocates the memory.
}