#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argu[]){
    //Declaro variables
    float n1,n2, resultado=0;
    //Conversion de char a float
    n1= atof(argu[1]);
    n2= atof(argu[2]);
    //Funcion
    resultado=resultado+n1;
    for(float i=1; i<n2; i++){
    resultado=resultado*n1;
    }
    //imprimimos el resultado de la elevacion
    printf("%.2f\n", resultado);
    return 0;
}
