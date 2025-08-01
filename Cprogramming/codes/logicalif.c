#include<stdio.h>
int main(){
    int age;
    char lincence;
    printf("Enter age :");
    scanf("%d",&age);
    printf("Does the user has a valid lincence?(y/n) :");
   // scanf("%c",&lincence);
    //scanf("%c",&lincence);
    scanf("%s",&lincence);
    if(age>18 && lincence=='y')
    printf("Eligible to drive \n");
    else if(age>18 && lincence=='n')
    printf("Eligible to drive but not a valid lincence\n");
    else
    printf("Not Eligible to drive \n");

    return 0;
}