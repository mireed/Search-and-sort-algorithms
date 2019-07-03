#include <iostream>

using namespace std;

void SelectSort(int* arr, int n) {
	int i, j, min;
	for (i = 0; i < n-1; i++) {//一共进行n-1趟排序
		min = i;//记录最小元素位置
		for (j = i + 1; j < n; j++) {//在arr[i...n-1]选择最小元素
			if (arr[min] > arr[j]) {
				min = j;//更新最小元素位置
			}
		}
		if (min != i) {
			swap(arr[i], arr[min]);//与第i个位置交换
		}
	}
}

int main()
{
	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int len = 8;
	SelectSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}