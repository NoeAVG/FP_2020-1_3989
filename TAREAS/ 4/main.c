#include  <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        //Declaramos y asignamos varibles
	int lista[argc], suma = 0;
	float promedio;
    //Programa
    for (int i = 1; i < argc; i++){
    lista[i]=atoi(argv[i]);
    }
    for (int i = 0; i < argc; i++){
    suma = suma + lista[i];	
    }
	promedio = (float)suma/(argc - 1);
	
        //Mostramos valores
        printf("%.2lf\n", promedio);
	return 0;
}
