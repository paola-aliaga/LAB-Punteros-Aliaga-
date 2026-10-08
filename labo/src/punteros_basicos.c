#include <stdio.h>
int main (){
    int x=42;
    int *p=&x;
    int **pp=&p;

    printf("valor de x: %d\n",x);
    printf("valor de *p: %d\n",*p);
    printf("valor de **pp: %d\n",**pp);
printf("direccion de x: %p\n",(void*)&x);
printf("valor de p: %p\n",(void*)p);
printf("direccion de p: %p\n",(void*)&p);
printf("valor de pp: %p\n",(void*)pp);
printf("direccion de **pp: %p\n",(void*)&pp);

    *p=100;
printf("valor de *p: %d\n",*p);    
    **pp=200;
printf("valor de **pp: %d\n",**pp);

    return 0;

}