#include <stdio.h>
#include <string.h>

void reverse(char *);
void strCount(char *);
void compareStr(char *, char *);
void upperCaseStr(char *);
void lowerCaseStr(char *);
void fullName(char *, char *);

int main()
{
    char strval[] = {"Habeba"};
    char strval2[] = {"Habeba is an Engineer"};
    char strval3[] = {"habeba"};
    char strval4[] = {"AHMED"};
    compareStr(strval, strval3);
    printf("\n");
    upperCaseStr(strval3);
    printf("\n");
    lowerCaseStr(strval4);
    printf("\n");
    fullName(strval3, strval4);
    printf("\n");
    strCount(strval2);
    printf("\n");
    reverse(strval);
    printf("\n");

    return 0;
}

void strCount(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        if (str[i] == 27)
        {
            count++;
        }
        i++;
    }
}
void reverse(char *str)
{
    int i = strlen(str);
    while (i >= 0)
    {
        printf("%c", *(str + i));
        i--;
    }
}
void compareStr(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] == str2[i])
            continue;
        else
        {
            printf("Not Equal \n");
            break;
        }
        i++;
        printf("Equal \n");
    }
}
void upperCaseStr(char *str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] >= 97 && str1[i] <= 122)
        {
            str1[i] -= 32;
            printf("%c", str1[i]);
        }
        else
            printf("%c", str1[i]);
        i++;
    }
}
void lowerCaseStr(char *str1)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] >= 65 && str1[i] <= 90)
        {
            str1[i] += 32;
            printf("%c", str1[i]);
        }
        else
            printf("%c", str1[i]);
        i++;
    }
}
void fullName(char *str1, char *str2)
{
    int i = 0;
    printf("Full Name is :");
    while (str1[i] != '\0')
    {
        printf("%c", str1[i]);
        i++;
    }
    i = 0;
    printf(" ");
    while (str2[i] != '\0')
    {
        printf("%c", str2[i]);
        i++;
    }
}
