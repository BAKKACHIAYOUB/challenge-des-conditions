#include <stdio.h>
#include <stdlib.h>

int main()
{ int nember;
    printf("veuillez entrer le nombre : \n");
    scanf("%d",&nember);
    if(nember % 2 == 0)
    printf("ce nembre est pair  \n");
    else
        printf("ce nombre est impair  \n");
    return 0;
}
