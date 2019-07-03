#include <iostream>

using namespace std;

void BubbleSort(int* arr, int len) {
	for (int i = len-1; i > 0; i--) {
		int flag = 0;//��ʾ����ð�������Ƿ��������ı�־
		for (int j = 0; j < i; j++) {//һ��ð������
			if (arr[j] > arr[j+1]) {//��Ϊ����
				swap(arr[j], arr[j+1]);//����˳��
				flag = 1;
			}
		}
		if (flag == 0) {
			break;//��ʾ������û�з���������˵�������Ѿ�����
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