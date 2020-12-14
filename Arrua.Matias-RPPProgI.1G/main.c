#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LETRAS 14
#define TAM 5

typedef struct{

int dia;
int mes;
int anio;
}eFecha;

typedef struct{
int id;
char descripcion[20];
float precio;
eFecha fechaVencimiento;
int isEmpty;
}eComida;



void duplicarImpares(int vec[], int tam);
void subirVocales (char cadena[], int tam);
void ordenarComidas(eComida comidas[], int tam);

int main()
{
    int numeros[10] ={1,2,3,4,5,6,7,8,9,10};
char cadena[LETRAS] ="aleatoreamente";
eComida comidas [TAM]={ {1000, "Milanesa",350,{20,12,2020},0},{1001, "Fideos",250,{25,12,2020},0},{1002, "Ensalada",400,{28,12,2020},0},{1003, "Tortilla",350,{10,12,2020},0},{1004, "Asado",250,{15,12,2020},0} };




    duplicarImpares(numeros,10);

    for(int i = 0; i<10; i ++){
        printf("%d  ",numeros[i]);
    }

    printf("\n\n");
/***************************************************/


subirVocales(cadena,LETRAS);
printf("%s\n\n", cadena);

/***************************************************/
ordenarComidas(comidas,TAM);

for(int i=0; i<TAM;i++){
    printf("%d %s %.2f %d/%d/%d\n\n", comidas[i].id, comidas[i].descripcion, comidas[i].precio, comidas[i].fechaVencimiento.dia, comidas[i].fechaVencimiento.mes, comidas[i].fechaVencimiento.anio);

}



    return 0;
}


void duplicarImpares(int vec[], int tam){

for(int i = 0; i<tam; i ++){
    if((vec[i] %2 ) != 0){
        vec[i] = vec[i]*2;
    }
}
}



void subirVocales (char cadena[], int tam){

for (int i = 0; cadena[i] != '\0'; i++){
        if(cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'){
		cadena[i] = toupper(cadena[i]);
		}
	}
	}

void ordenarComidas(eComida comidas[], int tam){
{
    eComida auxComidas;
    for(int i=0; i<tam-1; i++)
    {
        for(int j= i+1; j<tam; j++)
        {

            if( comidas[i].fechaVencimiento.anio == comidas[j].fechaVencimiento.anio)
            {

                auxComidas = comidas[i];
                comidas[i]=comidas[j];
                comidas[j] = auxComidas;

            if ((strcmp(comidas[i].descripcion,comidas[j].descripcion)<0) && comidas[i].fechaVencimiento.anio == comidas[j].fechaVencimiento.anio)
            {
                auxComidas=comidas[i];
                comidas[i]=comidas[j];
                comidas[j] = auxComidas;
            }

        }
    }
}
}



}
