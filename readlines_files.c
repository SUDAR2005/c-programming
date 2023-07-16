#include <stdio.h>
int main() {
    FILE *fp;
    int num = 0;
    char filename[10], a;
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        printf("\nCan't open the file.");
        return 1;    
    }
    while ((a = getc(fp)) != EOF) {
        if (a == '\n')
            num++;
    }
    printf("The number of lines in the file is %d\n", num);
    fclose(fp); // Close the file
    return 0;
}
