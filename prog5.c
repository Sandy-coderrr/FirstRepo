//Program to print first n non-fobo numbers.

#include <stdio.h>

int isFibonacci(int data) {
    int num1 = 0, num2 = 1, temp, flag = 0;

    if (data == num1 || data == num2) {
            return 1;
    }
    while (num2 <= data) {
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        if (num2 == data) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i, n, flag;
    scanf("%d", &n);
    int count = 0;
    for (i = 1; count<n; i++) {
        flag = isFibonacci(i);
        if (!flag){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");

    return 0;
}
