#include <iostream>

using namespace std;

void ShellSort(int* arr, int n) {
	for (int gap = n / 2; gap >= 1; gap = gap / 2) {//步长变化，gap每次变为原来的一半
		for (int i = 0; i < gap; i++) {//共gap个组，对每一组执行直接插入排序
			for (int j = i + gap; j < n; j = j + gap) {
				if (arr[j] < arr[j - gap]) {//如果小于，则寻找其位置，并将后面数据位置都后移
					int tmp = arr[j];
					int k = j - gap;
					while (k >= 0 && arr[k] > tmp) {
						arr[k + gap] = arr[k];
						k = k - gap;
					}
					arr[k + gap] = tmp;
				}
			}
		}
	}
}

int main()
{
	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int len = 8;
	ShellSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}