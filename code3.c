#include <stdio.h>
struct User {
    int id;
    char name[100];

    int balance;
};

int main() {
    struct User user = {100,"ABCD",999};

    printf("%d\n", user.id);
    printf("s\n", user.name);
    printf("%d\n", user.balance);
        return 0;
}
