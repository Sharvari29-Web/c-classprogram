#include <stdio.h>

int main() {
    // Write C code here
    FILE *file = fopen("example.txt","a");
    if (file==NULL){
        printf("Error opening file for reading and writing.\n");
        return 1;
    }
    fseek(file,0,"SEEK_SET");
    fprintf(file," ==== hello world appended ====");
    fclose(file);
    printf("data updated in file successfully.\n");
    return 0;
}


