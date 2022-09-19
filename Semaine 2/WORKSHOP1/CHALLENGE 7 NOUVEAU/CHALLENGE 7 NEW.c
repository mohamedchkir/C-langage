#include<stdio.h>
#define N_NOTES 5

typedef struct {
    char nom[30];
    char matricule[20];
    int age;
    float notes[N_NOTES];
} etudiant;

int main() {
    char matieres[N_NOTES][20] = {"Math", "Physique", "Arabe", "Biologie", "Francais"};
    etudiant student1;
    printf("Entrer ton nome: ");
    scanf("%[^\n]%*c", student1.nom);
    printf("Entrer ton numero de matricule: ");
    scanf("%[^\n]%*c", student1.matricule);
    printf("Entrer ton age: ");
    scanf("%d", &student1.age);
    for(int i=0; i<N_NOTES; i++) {
        printf("Entrer la note de %s: ", matieres[i]);
        scanf("%f", &student1.notes[i]);
    }

    printf("\nNom: %s\nnumero de matricule : %s\nage: %d\n"
            , student1.nom, student1.matricule, student1.age);

    printf("notes: \n");
    for(int i=0; i<N_NOTES; i++) {
        printf("%s: %.2f\n", matieres[i], student1.notes[i]);
    }
    return 0;
}
