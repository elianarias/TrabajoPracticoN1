#ifndef TRABAJO_PRACTICO_N1_H_INCLUDED
#define TRABAJO_PRACTICO_N1_H_INCLUDED

/*Función menú*/
/**\brief presenta un menú de opciones
  *\param se ingresa la opción indicada
  *\return escanea la opcion y realiza la operación indicada.
  */
int menu(){
    int opcion;
    system("color B1");
    printf( "/////////////////////////////////////////////////\n"
            "/                1.Suma                         /\n"
            "/                2.Resta                        /\n"
            "/                3.Multiplicacion               /\n"
            "/                4.Division                     /\n"
            "/                5.Factorial                    /\n"
            "/                6.Todas las operaciones        /\n"
            "/                0.Salir                        /\n"
            "/////////////////////////////////////////////////\n\n"
            "Ingrese una opcion: ");

    scanf("%d",&opcion);
     system("cls");
    return(opcion);
}
/*Función que lee los valores con las que se va a operar*/
/**\brief lee los valores que se ingresan
  *\param valores ingresados
  *\return retorna los valores escaneado
  */
void leeNumero(int *a,int *b){
    printf("Ingrese un valor: ");
    /*No se necesita & porque a es una dirección de memoria
     *(*a) que es lo que yo le daba con el ampersan*/
    scanf("%d",a);
    printf("\n");
    printf("Ingrese otro valor: ");
    scanf("%d",b);
}


/*Función suma*/
/**\brief resuelve una suma
  *\param valores ingresados por el usuario
  *\return resultado de la suma
  */
int suma(int a, int b){
    int suma;
    suma=a+b;
    return(suma);

}
/*Función resta*/
/**\brief resuelve una resta
  *\param valores ingresados por el usuario
  *\return resultado de la resta
  */
int resta(int a, int b){
    int resta;
    resta=a-b;
    return(resta);
}
/*Función multiplicación*/
/**\brief resuelve una multiplicación
  *\param valores ingresados por el usuario
  *\return resultado de la multiplicación
  */
void multiplicacion(int a, int b, float *resultado){
    *resultado=a*b;
}
/*Función división*/
/**\brief resuelve una división
  *\param valores ingresados por el usuario
  *\return resultado de la división
  */
float division(int a, int b){

    float division;
    division=(float)a/b;
    return(division);
}

//funcion factorial/
/**\brief resuelve un factorial
  *\param valores ingresados por el usuario
  *\return devuelve el factorial
  */
long int factorial(int a){
    int resultado;
    if(a==1){
        return(1);
    }
    resultado=a*factorial(a-1);
    return(resultado);

}

#endif // TRABAJO_PRACTICO_N1_H_INCLUDED
