#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<unistd.h>
void add(float,float);
void sub(float,float);
void mult(float,float);
void divi(float,float);
void mod(int,int);
void power(float,float);
void cal(int);
int main(){    
    int c;
    getch();
    system("clear");
    printf("-------------------------------\n");
    printf("Welcome to Simple Calculator\n\n");
    printf("Choose one of the following options :\n");
    printf("1. Add\n2. Substract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\nNow, enter your choice: ");
    scanf("%d",&c);
    printf("\n\n");
    if(c!=7){
        if(c<7 && 1<=c){
            cal(c);
            printf("\n\n");
        }
        else{
            printf("Invaild choice\n\n");
        }
        main();
    }
    getch();
    return 0;
}
void cal(int c){
    float n1,n2;
    printf("Please enter the first number : ");
    scanf("%f",&n1);
    printf("Now, enter the second number : ");
    scanf("%f",&n2);
    printf("\n\n");
    switch (c)
    {
    case 1:
    add(n1,n2);
        break;
        case 2:
    sub(n1,n2);
        break;
        case 3:
    mult(n1,n2);
        break;
        case 4:
    divi(n1,n2);
        break;
        case 5:
    mod(n1,n2);
        break;    
    default:
    power(n1,n2);
        break;
    }
}
void add(float a,float b){
    printf("Result of this operation is: %.2f",a+b);
}
void sub(float a,float b){
    printf("Result of this operation is: %.2f",a-b);
}
void mult(float a,float b){
    printf("Result of this operation is: %.2f",a*b);
}
void divi(float a,float b){
    if(b!=0)
    printf("Result of this operation is: %.2f",a/b);
    else
    printf("Invalid Argument");
}
void mod(int a,int b){
    if(b!=0)
    printf("Result of this operation is: %d",a%b);
    else
    printf("Invalid Argument");
}
void power(float a,float b){
    printf("Result of this operation is: %.2f",pow(a,b));
}