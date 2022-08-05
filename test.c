#include <stdio.h>
#include <stdlib.h>

/**
 * user- Learning c structure
 */

struct User
{
    char *name;
    char *email;
    int age;
};


struct User  *nouvelle_utilisateur(char *nom, char *prenom, int age)
{
    struct User user;
    user = malloc(sizeof(struct User));
};


 int main(void)
 {
    struct User user;

    user.name =  "Samadou";
    user.email = "Souroagorouko@gmail.com";
    user.age = 22;

    printf("The user %s has connected\n", user.name);
    printf("With this email %s\n", user.email);
    printf("His age is %d\n", user.age);

    return (0);
 }