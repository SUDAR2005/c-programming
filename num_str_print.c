#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main() {
    char arr[100], temp[100];
    int i=0, j=0, num;
    printf("Enter the String as instructed: ");
    scanf("%s", arr);
    while (arr[i] != '\0') {
        if (isdigit(arr[i+1])) {
            if (isdigit(arr[i + 2])) {
                num = (arr[i+1] - '0') * 10 + (arr[i + 2] - '0');
                i += 3;
            }
            else {
                num = arr[i] - '0';
                i+=2;
            }
            for(int k = 0; k <=num; k++) {
                temp[j] = arr[i];
                j++;
            }
        }
        else {
            temp[j] = arr[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0';
    printf("The required string is: %s\n", temp);
}
