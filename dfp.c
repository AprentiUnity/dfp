#include <stdio.h>
#include <stdlib.h>

int main(int argc, unsigned char *argv[])
{
    register unsigned int i = 1;
    for(i = 1; i < argc; i++)
    {
        register unsigned long long nombreDecoupe = strtoull(argv[i], NULL, 10);
        register unsigned long long nombrePremier = 11;
        printf("Décomposition de %lld en produits de nombres premiers\n", nombreDecoupe);
        while(nombreDecoupe != 1)
        {
            if(nombreDecoupe % 2 == 0)
            {
                nombreDecoupe = nombreDecoupe / 2;
                printf("2\n");
            }
            else if(nombreDecoupe % 3 == 0)
            {
                nombreDecoupe = nombreDecoupe / 3;
                printf("3\n");
            }
            else if(nombreDecoupe % 5 == 0)
            {
                nombreDecoupe = nombreDecoupe / 5;
                printf("5\n");
            }
            else if(nombreDecoupe % 7 == 0)
            {
                nombreDecoupe = nombreDecoupe / 7;
                printf("7\n");
            }
            else
            {
                while(nombrePremier <= nombreDecoupe)
                {
                    if(nombreDecoupe % nombrePremier != 0)
                    {
                        nombrePremier++;
                    }
                    else
                    {
                        nombreDecoupe = nombreDecoupe / nombrePremier;
                         printf("%lld\n", nombrePremier);
                     }
                 }
            }
        }
    }
    printf("Programme éxécuté avec succès ! [v1.1]\n");
    return 0;
}
