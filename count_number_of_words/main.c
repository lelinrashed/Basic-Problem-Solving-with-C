#include <stdio.h>

// Function declaration
int strLen(char str[]);
int countWord(char str[], int strLen);

int main()
{
    // Define variables
    char str[100];

    // Get user input
    gets(str);

    // Find string length
    int strLength = strLen(str);

    int words = countWord(str, strLength);
    printf("words %d", words);

    return 0;
}

// Find string length
int strLen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

// Count word
int countWord(char str[], int strLen)
{
    int word = 0;

    for (int i = 0; i < strLen; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] != ' ' && str[i] != '\t' && str[i] != '.')
            {
                word++;

                while (str[i] != ' ' && str[i] != '\t')
                {
                    i++;
                }
            }
        }
    }

    return word;
}