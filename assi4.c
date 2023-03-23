#include <stdio.h>

#define MAX_SIZE 100 

int main()
 {
    char str[MAX_SIZE];
    int freq[256] = {0}, maxFreq = -1, maxChar = -1;

    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
	 {
        freq[str[i]]++;
    }

    for (int i = 0; i < 256; i++) 
	{
        if (freq[i] > maxFreq)
	}
		 {
            maxFreq = freq[i];
        }
    }
