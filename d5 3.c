#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main()
{
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    char line[MAX_LINE_LENGTH];

    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL)
    {
        char *pos = strstr(line, "red");

        while (pos != NULL)
        {
         
            strncpy(pos, "blue", 4);

           
            pos = strstr(pos + 4, "red");
        }

        fputs(line, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
