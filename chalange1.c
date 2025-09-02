#include <stdio.h>
#include <string.h>

typedef struct person {
    char firstName[32];
    char lastName[32];
    int age;
    char email[100];
    char sexe[];
}person;

int main() {
    person person;
    printf("========== PERSON ==========\n");
    printf("Saisir ces information .\n");
    printf("============================\n");

    printf("Enter votre nom : ");
    scanf("%s" , &person.firstName);
    getchar();
    printf("Entre votre prenom : ");
    scanf("%s" , &person.lastName);
    getchar();
    printf("Entrer votre sexe (M pour l'homme et F pour la femme) : ");
    scanf("%c" , &person.sexe);
    getchar();
    printf("Entrer votre age : ");
    scanf("%d" , &person.age);
    getchar();
    printf("Entrer votre adresse email : ");
    scanf("%s" , &person.email);
    getchar();
    printf("\n============================\n");
    
    printf("Vous avez %s %s , vous avez %d ans , finallment votre adresse email est %s ." , person.firstName , person.lastName ,  person.age ,  person.email);
    return 0;
}