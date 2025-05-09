#include <stdio.h>
#include <stdbool.h>

int countWords(const char *str)
{
    int count = 0;
    bool inWord = false;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
        {
            inWord = false; // End of a word
        }
        else if (!inWord)
        {
            inWord = true; // Beginning of a new word
            count++;       // Increment the word count
        }
        str++; // Move to the next character
    }
    return count;
}

int main()
{
    char str[1000];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("Number of words: %d\n", wordCount);

    return 0;
}
