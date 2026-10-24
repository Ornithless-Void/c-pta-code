#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    // 读数据
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 冒泡核心
    // i：一共跑 n-1 趟
    for (int i = 0; i < n - 1; i++)
    {
        // j：相邻对比，后面i个已经排好，不用再比
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // 交换
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}