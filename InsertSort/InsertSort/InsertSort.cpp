#include <iostream>

using namespace std;

void InsertSort(int* arr, int n) {
	int i, j, k;
	for (i = 1; i < n; i++) {//���ν�arr[1]...n���뵽ǰ������������
		for (j = i - 1; j >= 0; j--) {//Ϊarr[i]��һ������λ��
			if (arr[j] < arr[i]) {
				break;
			}
		}
		if (j != i - 1) {//����ҵ���
			int tmp = arr[i];//����arr[i]���Ԫ��������
			for (k = i - 1; k > j; k--) {
				arr[k + 1] = arr[k];
			}
			arr[k + 1] = tmp;//arr[i]�ŵ���ȷ��λ��
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