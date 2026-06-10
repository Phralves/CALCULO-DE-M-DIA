/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float  media;
    float  nota1;
    float  nota2;
    float  nota3;
    printf("digite sua nota para saber sua situação");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3 ) /3;
    printf ("media: %.2f", media);
    
    if(media >7){
        printf("Aprovado, parabens!!");
    }else if(media<7 && media>= 5){
        printf("Em recuperação,mas vc vai conseguir");
            }else{
                printf("Sinto muito, voçe reprovou...");
            }
    
    return 0;
}
