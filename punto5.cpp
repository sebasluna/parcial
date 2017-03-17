/*
*NOMBRE:TIEMPO
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:17/03/2017
*RESUMEN:Irime el tiempo
*/
#include <stdio.h>

int main(){
int longitud,Horas[longitud],minutos[longitud],segundos[longitud];
int tiempoH,tiempomin,tiemposeg;
printf("Ingrese la longitud \n");
scanf("%d",&longitud);
    for(int i=0; i<longitud; i++){
            printf("Ingrese horas %d\n",i+1);
            scanf("%d",&tiempoH[i]);
            Hora+=tiempoH;
             }
    for(int i=0; i<longitud; i++){
            printf("Ingrese minutos %d\n",i+1);
            scanf("%d",&tiempomin[i]);
            minutos+tiempomin=[i];
             }
    for(int i=0; i<longitud; i++){
            printf("Ingrese segundos %d\n",i+1);
            scanf("%d",&tiemposeg[i]);
            segundos+=tiemposeg[i];
             }
    while (segundos<=60){
            segundos=segundos-60;
            segundos+=1;
            }
    while (minutos<=60){
            minutos=minutos-60;
            minutos+=1;
            }
    printf("Resultado = %d Horas %d minutos %d segundos",Horas,minutos,segndos);
    return 0;

}
