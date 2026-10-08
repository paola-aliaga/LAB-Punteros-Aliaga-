#include <stdio.h>

int main(){
    int m[3][4];
   for (int i=0;i<3;i++){
    for (int k=0;k<4;k++){
        scanf("%d",&m[i][k]);
    }
   }
for (int i=0;i<3;i++){
    for (int k=0;k<4;k++){
        printf("%4d ",m[i][k]);
    }
    printf("\n");
}
int suma;
for (int i=0;i<3;i++){
    suma=0;
    for (int k=0;k<4;k++){
        suma+=m[i][k];
    }



}

return 0;
}
