#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *data_file = fopen("data.bin", "rb");

    if (data_file == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

   
    fseek(data_file, 0, SEEK_END);
    long file_size = ftell(data_file);
    rewind(data_file);


    char *buffer = (char*) malloc(sizeof(char) * file_size);

   
    fread(buffer, 1, file_size, data_file);

   
    for (int i = 0; i < file_size; i++)
    {
        printf("%c", buffer[i]);
    }

    fclose(data_file);
    free(buffer);

    return 0;
}
