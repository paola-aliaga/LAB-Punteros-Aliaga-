#include <stdio.h>

void imprimir_inverso(int* p){
    for (int i=9; i>=0; i--){
        printf(" %d", *(p+i));
    }   
}
int main (){
    int datos[10];
    int *p =datos;
    printf("ingresar los 10 numeros enteros\n");
    for (int i=0;i<10;i++){
        scanf("%d", &datos[i]);
        
    }
    int suma=0;

    for (int i=0;i<10;i++){
        suma +=datos[i];
    }
    double prom=(double)suma/10;

    int mayor=datos[0];
    int menor=datos[0];
    for (int i=0;i<10;i++){
        if (datos[i]>mayor){
            mayor=datos[i];
        }
        if (datos[i]<menor){
            menor=datos[i];
        }
    }
 int cont1=0;
 int cont2=0; 
 for (int i=0;i<10;i++){
    if (datos[i]%2==0){
        cont1++;
    }
    else if (datos[i]%2!=0){
        cont2++;
    }

 }

 printf("suma: %d\n",suma);
printf("promedio: %f\n",prom);
printf("mayor: %d\n",mayor);
printf("menor: %d\n",menor);
printf("pares: %d\n",cont1);
printf("impares: %d\n",cont2);
printf("original: ");
 for (int i=0;i<10;i++){
        printf(" %d", datos[i]);
    }
    printf("\n");
printf ("invertido: ");
imprimir_inverso(p);




}