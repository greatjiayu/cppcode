#include<stdio.h>
#include<stdlib.h>

int main() {
    char* str;
    str = (char*)(malloc(20));
    int length = 0;
    scanf("%s", str);
    char* temp = str;
    while (*temp != '\0') {
        length++;
        temp++;
    }
    temp = NULL;
    printf("%s 's length is %d", str, length);

    return 0;
}