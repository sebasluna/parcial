#include <stdio.h>
int main(){
int m,n,f,c,i,j,k;
float A[2][4];
float B[4][2];
float C[6][6];
if (n==f){
printf(" Valor de la matriz \n");
for (i=1;i<=m;i++)
 for (j=1;j<=n;j++)
{ printf("A(%d,%d) ",i,j);
   scanf ("%f",&A[i][j]);
}

printf("\n");
printf("Valor de la segunda matriz\n");
  for (i=1;i<=f;i++)
   for (j=1;j<=c;j++)
    { printf("B(%d,%d)",i,j);
      scanf ("%f",&B[i][j]);
    }
// MULTIPLICACION
 for (i=1;i<=m;i++)
    {for (j=1;j<=c;j++)
       { C[i][j]=0;
         for (k=1;k<=n;k++)
          {C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
       }
    }
 printf(" La multiplicacion es:\n");
//MUESTRO MATRICES
  for (i=1;i<=m;i++)
   for (j=1;j<=c;j++)
    { printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
    }
}
return 0;
}

