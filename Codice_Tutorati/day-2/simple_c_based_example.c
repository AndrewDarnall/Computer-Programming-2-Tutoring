/**
 * Semplice esempio di un ADT (Abstract Data Type) in C
*/
#include <stdio.h>
#include <stdlib.h>

struct Person {
    int age;
    float social_score;
    const char* name;
};

// Print the struct helper function
void printStruct(struct Person *p) {
    printf("------- Person -------\n");
    printf("Age:\t%d\n", p->age);
    printf("Social Score:\t%f\n", p->social_score);
    printf("Name:\t%s\n\n", p->name);
}

// Struct Initializer helper function
void initStruct(struct Person *p, int age, float s_score, const char* name) {
    p->age = age;
    p->social_score = s_score;
    p->name = name;
}

int main(int argc, char** argv)
{

    printf("ADT C Example ~ Prodcedure-Based Imperative Paradigm\n\n");

    struct Person p;
    struct Person p2;

    // Aggiungiamo dei valori a mano
    p.age = 20;
    p.social_score = 3.14;
    p.name = "Adrian";

    printStruct(&p);

    // Aggiungiamo i valori con una funzione helper
    initStruct(&p2, 22, 5.67, "Micheal");

    printStruct(&p2);

    return EXIT_SUCCESS;
}