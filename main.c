#include <stdio.h>
#include <stdlib.h>

float sommer(float x,float y)
{
    printf("1.1. Programme qui lit deux réels\n");
    printf("** Ecrire premier valeur\n");
    scanf("%f",&x);
    printf("** Ecrire deuxieme valeur \n");
    scanf("%f",&y);
    return x+=y;
}

int main()
{
    float n1,n2;
    printf("\n Somme:\n");
    sommer(n1,n2);
    return 0;
}

