#include <stdio.h>

int main() {
    // Write C code here
    FILE *file = fopen("example.txt","r+");
    if (file==NULL){
        printf("Error opening file for reading and writing.\n");
        return 1;
    }
    fseek(file,0,"SEEK_SET");
    fprintf(file,"Updated content: Hello, updated world!\n");
    fclose(file);
    printf("data written to file successfully.\n");
    return 0;
}

