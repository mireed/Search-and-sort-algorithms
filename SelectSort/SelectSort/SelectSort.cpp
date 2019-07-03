#include <iostream>

using namespace std;

void SelectSort(int* arr, int n) {
	int i, j, min;
	for (i = 0; i < n-1; i++) {//һ������n-1������
		min = i;//��¼��СԪ��λ��
		for (j = i + 1; j < n; j++) {//��arr[i...n-1]ѡ����СԪ��
			if (arr[min] > arr[j]) {
				min = j;//������СԪ��λ��
			}
		}
		if (min != i) {
			swap(arr[i], arr[min]);//���i��λ�ý���
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