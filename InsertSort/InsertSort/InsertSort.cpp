#include <iostream>

using namespace std;

void InsertSort(int* arr, int n) {
	int i, j, k;
	for (i = 1; i < n; i++) {//依次将arr[1]...n插入到前面已排序序列
		for (j = i - 1; j >= 0; j--) {//为arr[i]找一个合适位置
			if (arr[j] < arr[i]) {
				break;
			}
		}
		if (j != i - 1) {//如果找到了
			int tmp = arr[i];//将比arr[i]大的元素往后移
			for (k = i - 1; k > j; k--) {
				arr[k + 1] = arr[k];
			}
			arr[k + 1] = tmp;//arr[i]放到正确的位置
		}
	}
}

int main()
{
	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int len = 8;
	InsertSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}