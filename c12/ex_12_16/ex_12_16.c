#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool check_palindrome(char word[]);
int main(void)
{
    char word[20];
    bool palindrome;
    printf("Enter word:\n");
    gets(word);
    palindrome=check_palindrome(word);
    printf("\nYou gave the word \"%s\"\n",word);
    if (palindrome)
        printf("This word is a palindrome.\n");
    else
        printf("This word is NOT a palindrome.\n");
    return 0;
}

bool check_palindrome(char word[])
{
    int i=0,j=strlen(word)-1;
    while (i<j)
    {
        if (word[i++]!=word[j--])
            return false;
    }
    return true;
}
