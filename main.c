  /* Calculadora en C*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "Trabajo practico n1.h"

/*Definición de funciones*/

int menu();
void leeNumero(int *a,int *b);
int suma(int a, int b);
int resta(int a, int b);
void multiplicacion(int a, int b, float*resultado);
float division(int a, int b);
long int factorial(int a);



/*Función principal*/
/**\brief muestra un menú donde solicita dos nros
  *\param determinan los nros que se van a utilizar en la operación
  *\return retorna el resultado de una operación
  */
int main(void){
    /*Definición de variables*/
    float resultado,d;
    int men,s,r,a,b,f;
    men=menu(); //Asigno la opción que devuelve el menú a men

    /*La variable men que almacena el valor que devuelve la función menú
      se usa para elegir la constante que determinará el caso que elige el
      switch. Se añade de nuevo la asignación dentro de cada caso del switch
      para que no termine el programa hasta que no se elija la opción salir,
      lo cual rompe la condición del while y sale del bucle*/
    while(men!=0){
        switch(men){
            case 1 :{
                leeNumero(&a,&b); //Funcion que lee los numeros
                s=suma(a,b);
                printf("%d+%d=%d\n\n",a,b,s);
                men=menu();
            }
            break;
            case 2 :{
                leeNumero(&a,&b);
                r=resta(a,b);
                printf("%d-%d=%d\n",a,b,r);
                men=menu();
            }
            break;
            case 3 :{
                leeNumero(&a,&b);
                multiplicacion(a,b,&resultado);
                printf("%d*%d=%f\n",a,b,resultado);
                men=menu();
            }
            break;
            case 4 :{
                leeNumero(&a,&b);
                d=division(a,b);
                if(b<=0){
                    printf("ERROR!");
                }
                else{
                printf("%d:%d=%f\n",a,b,d);
                men=menu();
            }}
            break;
            case 5:{
                printf("Ingrese un valor:\n");
                scanf("%d",&a);
                f=factorial(a);
                printf("%d!=%d\n",a,f);
                men=menu();
            }
            break;

            case 6:{
                leeNumero(&a,&b);
                s=suma(a,b);
                printf("\n");
                printf("Suma: %d + %d = %d\n\n",a,b,s);
                r=resta(a,b);
                printf("Resta: %d - %d = %d\n\n",a,b,r);
                multiplicacion(a,b,&resultado);
                printf("Multiplicacion: %d * %d = %f\n\n",a,b,resultado);
                d=division(a,b);
                printf("Division: %d : %d = %f\n\n",a,b,d);
                printf("Ingrese un valor para el factorial: ");
                scanf("%d",&a);
                f=factorial(a);
                printf("\n");
                printf("Factorial: %d! = %d\n\n",a,f);
                men=menu();

            }
            break;

          default :
                printf("Opcion incorrecta\n");
                men=menu();
        }
    }

    printf("Hasta luego!\n");
    system("PAUSE");
}
