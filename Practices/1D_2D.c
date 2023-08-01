#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1001], str2[101][1001];
    int count = 0, k = 0, n = 0;
    gets(str1);

    n = strlen(str1);
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == ',' || str1[i+1] == '\0') count++;
    }

    for (int i = 0; i < count; i++)
    {
        int j = 0;
        while (str1[k] != ',' && str1[k] != '\0')
        {
            str2[i][j++] = str1[k++];
        }

        str2[i][j] = '\0';
        k++;
    }

    for (int i = 0; i < count; ++i) 
    {
        printf("%s\n", str2[i]);
    }
    return 0;
}