#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_LETTERS 26

int main()
{
    FILE *input_file = fopen("data.txt", "r");
    FILE *output_file = fopen("statistics.txt", "w");

    if (input_file == NULL || output_file == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    int letter_count[NUM_LETTERS] = {0};
    char c;

    while ((c = fgetc(input_file)) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            letter_count[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            letter_count[c - 'A']++;
        }
    }

    for (int i = 0; i < NUM_LETTERS; i++)
    {
        fprintf(output_file, "%c: %d\n", 'A' + i, letter_count[i] + letter_count[i + 32]);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
