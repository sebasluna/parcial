/*
*NOMBRE:CONVERTIDOR
*AUTOR:Luis Sebastian Urbano Luna
*FECHA:17/03/2017
*RESUMEN:se escoje lo que se desea luego se introduce el valor y se regresa lo pedido
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
int teras,bytes,kilobytes,megabytes,gigabytes;
int opcion;
printf("Hola por favor escoja que desea hacer\n\n");
printf("1.pasar de teras a bytes\n");
printf("2.pasar de teras a kilobytes\n");
printf("3.pasar de teras a megabytes\n");
printf("4.pasar de teras a gigabytes\n");
printf("5.pasar de bites a teras\n");
printf("6.pasar de kilobites a teras\n");
printf("7.pasar de  megabytes a teras\n");
printf("8.pasar de gigabytes a teras\n");
printf("9.salir\n\n");
scanf("%d",&opcion);
switch(opcion){
    case 1:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&teras);
        bytes = teras*pow(2,4);
        printf("el valor en bytes es %d bytes",bytes);
        break;
        }
    case 2:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&teras);
        kilobytes = teras*pow(2,10);
        printf("el valor en kilobytes es %d KB",kilobytes);
        break;
        }
     case 3:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&teras);
        megabytes = teras*pow(2,20);
        printf("el valor en kilobytes es %d MB",megabytes);
        break;
        }
    case 4:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&teras);
        gigabytes = teras*pow(2,30);
        printf("el valor en kilobytes es %d GB",gigabytes);
        break;
        }
    case 5:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&bytes);
        teras = bytes/pow(2,4);
        printf("el valor en kilobytes es %d Terabytes",teras);
        break;
        }
    case 6:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&kilobytes);
        teras = kilobytes/pow(2,10);
        printf("el valor en kilobytes es %d Terabytes",teras);
        break;
        }
    case 7:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&megabytes);
        teras = megabytes/pow(2,20);
        printf("el valor en kilobytes es %d Terabytes",teras);
        break;
        }
    case 8:
        {
        printf("ingrese el valor de las teras que desea convertir\n");
        scanf("%d",&gigabytes);
        teras = gigabytes/pow(2,30);
        printf("el valor en kilobytes es %d Terabytes",teras);
        break;
        }
    default:
        printf("no existe esa obcion\n");
        break;
}
return 0;
}

