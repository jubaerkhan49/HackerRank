#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char s[1001], word[101];
    int i, j, length;
    bool is_word_started = false;

    gets(s);

    length = strlen(s);
    length++;
    for (i = 0, j = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (is_word_started == false)
            {
                is_word_started = true;
                word[j++] = s[i] - 32;
            }
            else
            {
                word[j++] = s[i];
            }
        }
        else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if (is_word_started = false)
            {
                is_word_started = true;
            }
            word[j++] = s[i];
        }
        else
        {
            if (is_word_started == true)
            {
                is_word_started = false;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }   
    }
    return 0;
}