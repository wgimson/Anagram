/* Takes two words as user input and determines whether they are anagrams */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 20
#define NUM_LETTERS 26

/* prototypes */
bool are_anagrams(const char *word1, const char *word2);
void add_letters(const char *word);
void subtract_letters(const char *word);

int letters[26];

/* main function */
int main(void)
{
    char word1[MAX_LEN], word2[MAX_LEN];
    char *p = word1, *q = word2;
    bool is_anagram;
    int i;

    for (;;) {
        printf("\nEnter first word (press enter to quit): ");
        scanf("%s", p);
        
        if (strcmp(word1, "q") == 0) {
            printf("\nNow exiting anagram program; goodbye.\n\n");
            exit(EXIT_SUCCESS);
        }

        printf("\nEnter second word (press enter to quit): ");
        scanf("%s", q); 
        
        if (strcmp(word2, "q") == 0) {
            printf("\nNow exiting anagram program; goodbye.\n\n");
            exit(EXIT_SUCCESS);
        }

        is_anagram = are_anagrams(p, q);
        if (is_anagram)
            printf("\nThe words are anagrams.\n");
        else 
            printf("\nThe words are not anagrams.\n");

        for (i = 0; i < NUM_LETTERS; i++) 
            letters[i] = 0;
    }
               
    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int i;

    add_letters(word1);
    subtract_letters(word2);

    for (i = 0; i < NUM_LETTERS; i++) {
        if (letters[i] != 0)
            return false;
    }

    return true;
}

void add_letters(const char *word)
{
    int i;
    char ch;

    for (i = 0; i < (int)strlen(word); i++) {
        if (!isalpha(word[i])) {
            printf("\nSorry, you have entered non-character data; prepare for "
                   "immense pain.\n");
            printf("\n");
            exit(EXIT_FAILURE);
        }
        
        ch = tolower(word[i]);
        switch (ch) {
            case 'a': letters[0]++;  break;
            case 'b': letters[1]++;  break;
            case 'c': letters[2]++;  break;
            case 'd': letters[3]++;  break;
            case 'e': letters[4]++;  break;
            case 'f': letters[5]++;  break;
            case 'g': letters[6]++;  break;
            case 'h': letters[7]++;  break;
            case 'i': letters[8]++;  break;
            case 'j': letters[9]++;  break;
            case 'k': letters[10]++; break;
            case 'l': letters[11]++; break;
            case 'm': letters[12]++; break;
            case 'n': letters[13]++; break;
            case 'o': letters[14]++; break;
            case 'p': letters[15]++; break;
            case 'q': letters[16]++; break;
            case 'r': letters[17]++; break;
            case 's': letters[18]++; break;
            case 't': letters[19]++; break;
            case 'u': letters[20]++; break;
            case 'v': letters[21]++; break;
            case 'w': letters[22]++; break;
            case 'x': letters[23]++; break;
            case 'y': letters[24]++; break;
            case 'z': letters[25]++; break;
        }
    }
}

void subtract_letters(const char *word)
{
    int i;
    char ch;

    for (i = 0; i < (int)strlen(word); i++) {
        if (!isalpha(word[i])) {
            printf("\nSorry, you have entered non-character data; prepare for "
                   "immense pain.\n");
            printf("\n");
            exit(EXIT_FAILURE);
        }
        
        ch = tolower(word[i]);
        switch (ch) {
            case 'a': letters[0]--;  break;
            case 'b': letters[1]--;  break;
            case 'c': letters[2]--;  break;
            case 'd': letters[3]--;  break;
            case 'e': letters[4]--;  break;
            case 'f': letters[5]--;  break;
            case 'g': letters[6]--;  break;
            case 'h': letters[7]--;  break;
            case 'i': letters[8]--;  break;
            case 'j': letters[9]--;  break;
            case 'k': letters[10]--; break;
            case 'l': letters[11]--; break;
            case 'm': letters[12]--; break;
            case 'n': letters[13]--; break;
            case 'o': letters[14]--; break;
            case 'p': letters[15]--; break;
            case 'q': letters[16]--; break;
            case 'r': letters[17]--; break;
            case 's': letters[18]--; break;
            case 't': letters[19]--; break;
            case 'u': letters[20]--; break;
            case 'v': letters[21]--; break;
            case 'w': letters[22]--; break;
            case 'x': letters[23]--; break;
            case 'y': letters[24]--; break;
            case 'z': letters[25]--; break;
        }
    }

}
