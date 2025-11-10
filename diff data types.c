#include<stdio.h>
int main (){
int number;
float price;
char grade;
printf("enter an int,float and char");
scanf("%d %f %c",&number,&price,&grade);
printf("\ninteger:%d\n",number);
printf("float:%2f\n",price);
printf("character:%c\n",grade);
return 0;
}
