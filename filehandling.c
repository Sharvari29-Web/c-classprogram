#include <stdio.h>

int main() {
    // Write C code here
    FILE *file = fopen("example.txt","w");
    if (file==NULL){
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file,"Hello world\n");
    fprintf(file,"this is a simple file handling example in C.\n");
    fclose(file);
    printf("data written to file successfully.\n");
    return 0;
}
