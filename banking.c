#include<stdio.h>
int main(){
    File *file
    char type[10];
    float amount;
    file=fopen("Bank.txt","a"};
    if(file ==NULL){
            printf("error opening file!\n");
            return 1;
    }
printf("credit or debit");
scanf("%s",type);
printf("enter amount:");
scanf("%f",&amount);
fprintf(file,"%s:%.2f\n",type,amount);
fclose(file);
printf("transaction success.\n");
return 0;
}
