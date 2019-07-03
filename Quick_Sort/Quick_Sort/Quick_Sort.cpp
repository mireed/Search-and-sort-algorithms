#include <iostream>

using namespace std;

void QuickSort(int *Array, int Begin, int End)
{
	if (Begin < End)//边界条件，即递归跳出的条件
	{
		int Left = Begin;
		int Right = End;
		int Pivot = Array[Begin];//将当前表中的第一个元素当做基准，对数组进行划分

		while (Left < Right)//循环跳出条件
		{
			while (Left < Right && Array[Right] >= Pivot)
			{
				Right--;
			}
			if (Left < Right) Array[Left++] = Array[Right];//将比基准值小的元素移到左端

			while (Left < Right && Array[Left] <= Pivot)
			{
				Left++;
			}
			if (Left < Right) Array[Right--] = Array[Left];//将比基准值大的元素移到右端
		}
		Array[Left] = Pivot;//基准元素放到最终位置
		QuickSort(Array, Begin, Left - 1);//递归，对两个子表进行快速排序
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