#include <stdio.h>

int main() 
{ 
int a,x,numero,n2=0; 
int bin[50]; 
bin[0]=0; 
 
printf("Programa que convierta numero binario\n"); 
printf("introdusca el numero que desea convertir " ); 
scanf("%d",&numero); 

for (x=0;x<50;x++) { 
bin[x]=numero%2; 
numero=numero/2; 
if(numero==0) 
break; 
} 

for(a=x;a>=0;a--) { 
printf("%d",bin[a]); 
} 

 
} 

