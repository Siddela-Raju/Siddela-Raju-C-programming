#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter the value: ");
    scanf("%d %s", &i, str);


    printf("\n You entered value is: %d and %s\n", i, str);
    return 0;
}