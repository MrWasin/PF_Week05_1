#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int count = 0;
    char str[50], * p;
    p = str;
    scanf("%s", str);

    while (*p != '\0') {
        count++;
        p++;
    }

    for (int j = count - 1; j >= 0; j--) {
        for (int i = 0; i <= j; i++) {
            printf("%c", str[i]);
        }

        if (j > 0) {
            printf("\n");
        }
    }
    return 0;
}