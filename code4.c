#include <stdio.h>
#define MAX_USERS 3
struct User
{
    int id;
    char name[100];
    int balance;
};
int main()
{
    struct User users[MAX_USERS];

    for(int i= 0; i<MAX_USERS;i++){
        printf("Enter the id:" );
        scanf("%d",&users[i].id);
        printf("Enter the name:" );
        scanf("%s",&users[i].name);

        printf("Enter the balance:" );
        scanf("%d",&users[i].balance);

    }
    for(int i=0;i<MAX_USERS;i++){
        printf("%d\t",users[i].id);
        printf("%s\t",users[i].name);
        printf("%d\n",users[i].balance);
    }
    int find,i;
    printf("Enter the userID to check the balance:");
    scanf("%d", &find);

    for(i=0;i<MAX_USERS;i++){
        if(find==users[i].id){
            printf("Balance of User %d: %d",find,users[i].balance);
        }
    }
}
