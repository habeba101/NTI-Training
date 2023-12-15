#include <stdio.h>
#include <string.h>
int strCount(char *str);
int main()
{
    char strVal[] = {"Habeba is an Engineer"};
    printf("The value of strCount is %d \n", strCount(strVal));
    printf("The result of strLength is %d \n ", strlen(strVal));

    return 0;
}
int strCount(char *str)
{
    int i = 0, size = 0;
    while (*(str + i) != '\0')
    {
        size++;
        i++;
    }

    return size;
}
