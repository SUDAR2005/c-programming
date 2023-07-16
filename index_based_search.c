//C program to implement index based search
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int index_search(char* str, char ch)
{
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

char* array_generate(int size)
{
    char* array1 = malloc(size * sizeof(char));
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf(" %c", &array1[i]);
    }
    return array1;
}

int main()
{
    int size, index;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    char* array = array_generate(size);
    index = index_search(array, 'o');
    if (index == -1) {
        printf("The character was not found in the array.\n");
    } else {
        printf("The character was found at index %d.\n", index+1);
    }
    free(array);
    return 0;
}