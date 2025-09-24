#include <stdio.h>

int main()
{
    int arr[4][4] = {{1, 2, 3,4}, {5, 6,7,8}, {9,10,11,12} ,{13,14,15,16}};

    int top = 0, bott = 3;
    int left = 0, right = 3;

    while (top <= bott && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", arr[top][i]);
        }
        top++;

        for (int i = top; i <= bott; i++)
            printf("%d ", arr[i][right]);
        right--;

        for (int i = right; i >= left; i--)
            printf("%d ", arr[bott][i]);
        bott--;

        for (int i = bott; i >= top; i--)
            printf("%d ", arr[i][left]);
        left++;
    }

    return 0;
}