#include <iostream>

using namespace std;

void ShellSort(int* arr, int n) {
	for (int gap = n / 2; gap >= 1; gap = gap / 2) {//�����仯��gapÿ�α�Ϊԭ����һ��
		for (int i = 0; i < gap; i++) {//��gap���飬��ÿһ��ִ��ֱ�Ӳ�������
			for (int j = i + gap; j < n; j = j + gap) {
				if (arr[j] < arr[j - gap]) {//���С�ڣ���Ѱ����λ�ã�������������λ�ö�����
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