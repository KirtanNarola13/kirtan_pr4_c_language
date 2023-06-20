#include<stdio.h>
#include<conio.h>
void main(){
int a,b,k,c;
clrscr();
for(a=5;a>=1;a--){
for(k=1;k<a;k++){
printf(" ");
}
   for(b=a;b<=5;b++){
   printf("%d",b);
   }
   for(c=4;c>=a;c--){
   printf("%d",a);
   }
   printf("\n");
}
getch();
}
