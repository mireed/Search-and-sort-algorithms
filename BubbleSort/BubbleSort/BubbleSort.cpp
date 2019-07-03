#include <iostream>

using namespace std;

void BubbleSort(int* arr, int len) {
	for (int i = len-1; i > 0; i--) {
		int flag = 0;//表示本趟冒泡排序是否发生交换的标志
		for (int j = 0; j < i; j++) {//一趟冒泡排序
			if (arr[j] > arr[j+1]) {//若为逆序
				swap(arr[j], arr[j+1]);//交换顺序
				flag = 1;
			}
		}
		if (flag == 0) {
			break;//表示遍历后没有发生交换，说明数组已经有序
		}
	}
}

int main()
{
	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int len = 8;
	BubbleSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}