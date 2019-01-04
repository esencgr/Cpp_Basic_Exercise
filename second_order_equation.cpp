#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <math.h> 

float delta; 
int a,b,c; 
char i; 
int main() 
{ 
  don: 
 
   printf("\n\n\t\tIKINCI DERECEDEN BIR BILINMEYENLI DENKLEM"); 
   printf("\n\n\n\ta*x*x+b*x+c=0 tipinde bir denklemin koklerini bulmak icin,\n\n\t\t\ta,b ve c degerlerini girin:\n"); 
                         printf("\n\n\ta="); 
                         scanf("%d",&a); 
                         printf("\n\n\tb="); 
                         scanf("%d",&b); 
                         printf("\n\n\tc="); 
                         scanf("%d",&c); 

  delta=(b*b)-(4*a*c); 
  system("CLS"); 
  if(delta>=0){ 

       printf("\n\n\n\n\n\t\t%d*x*x+%d*x+%d=0",a,b,c); 
       printf("\n\n\n\n\n\t\tDenklemin koklerinin\n\t\tCozum kumesi={%f,%f}\n",(b+sqrt(delta))/2*a,(b-sqrt(delta))/2*a); 
  } 
  else  
  {   
       printf("\n\n\n\n\n\t\t%d*x*x+%d*x+%d=0",a,b,c); 
       printf("\n\n\n\n\n\t\tDenklemin gercel koku yoktur."); 
       } 
       tek: 
           printf("\n\n\n\n\n\t\tTEKRAR ISLEM YAPMAK ICIN:\t'T'(Tekrar),\n\n\t\tPROGRAMDAN CIKMAK ICIN:\t\t'C'(CIKIS)\n\n\t\tBASMALISINIZ"); 
  getch(); 
  if(i=='T') 
  { 
             system("CLS"); 
             goto don; 
  } 
  else if(i=='C') 
  { 
  return 0; 
} 
else 
system("CLS"); 
     
goto tek; 
}  
