#include <iostream>

using namespace std;

void QuickSort(int *Array, int Begin, int End)
{
	if (Begin < End)//�߽����������ݹ�����������
	{
		int Left = Begin;
		int Right = End;
		int Pivot = Array[Begin];//����ǰ���еĵ�һ��Ԫ�ص�����׼����������л���

		while (Left < Right)//ѭ����������
		{
			while (Left < Right && Array[Right] >= Pivot)
			{
				Right--;
			}
			if (Left < Right) Array[Left++] = Array[Right];//���Ȼ�׼ֵС��Ԫ���Ƶ����

			while (Left < Right && Array[Left] <= Pivot)
			{
				Left++;
			}
			if (Left < Right) Array[Right--] = Array[Left];//���Ȼ�׼ֵ���Ԫ���Ƶ��Ҷ�
		}
		Array[Left] = Pivot;//��׼Ԫ�طŵ�����λ��
		QuickSort(Array, Begin, Left - 1);//�ݹ飬�������ӱ���п�������
		QuickSort(Array, Right + 1, End);
	}
}

int main()
{
	int arr[] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	int len = 8;
	QuickSort(arr, 0, len - 1);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}