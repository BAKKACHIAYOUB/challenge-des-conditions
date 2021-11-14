#include <stdio.h>
#include <stdlib.h>

int main()
{ float fahrenheit, celsius;

    printf("veuillez entrer la temperature en fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("la transforme en degre Celsius est %f",celsius);
    if(fahrenheit>38){
         printf("tres chaud \n");
    }

    else if(fahrenheit<=38&&fahrenheit>30){
        printf("chaud");
    }
    else if(fahrenheit<30&&fahrenheit>=15){
    printf("froid");}

    else{
        printf("tres froid");
    }
    return 0;
}
