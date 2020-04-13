#include "pch.h"
#include <iostream>;
using namespace std;

bool find(int value, int* arr, size_t size) {
	if (size == 0)
		return false;
	size_t middle = size / 2;

	if (value == arr[middle])return true;
	if (value < arr[middle])
		return find(value, arr, middle);
	else
		return find(value, arr + 1, middle+1);
}

int main()
{
	int test_value = 2;
	int test_value2 = 5;
	int arr[3] = { 1,2,3 };
	size_t size = 3;
	bool result= false;

	for (size_t i = 0; i < 3; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	result = find(test_value, arr, size);
	cout << result;
	cout << endl;
	result = find(test_value2, arr, size);
	cout << result;
	return 0;
}
