#include <iostream>

using namespace std;

void AdjustDown(int* arr, int start, int end) {
	int tmp;
	int low = start;
	int high = end;
	int k = 2 * low + 1;
	tmp = arr[low];
	for (; k <= end; low = k, k = 2*k+1) {
		if (k < end && arr[k] < arr[k + 1]) {
			k++;
		}
		if (tmp >= arr[k]) {
			break;
		}
		else {
			arr[low] = arr[k];
			low = k;
		}
	}
	arr[low] = tmp;
}

void HeapSort(int* arr, int len) {
	for (int i = len / 2 - 1; i >= 0; i--) {
		AdjustDown(arr, i, len - 1);
	}
	for (int i = len - 1; i > 0; i--) {
		swap(arr[i], arr[0]);
		AdjustDown(arr, 0, i - 1);
	}
}

int main()
{
	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int len = 8;
	HeapSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}