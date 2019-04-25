#include<stdio.h>
int main()
{

 char ch='y';
 int n;
 do
 {


 printf("Enter your Number:");
 scanf("%d",&n);
 if(n%2==0)
 {
 printf("Entered number is EVEN");
 }
 else
 printf("Entered number is odd");
 printf("\nDo you want to enter one more number(y/n):");
 scanf(" %c",&ch);
 }while(ch=='y');
 return 0;
}




