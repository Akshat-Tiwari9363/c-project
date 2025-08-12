#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void guess(){
    int r,n,i=0;
    srand(time(NULL));
    r=rand()%100+1;
    printf("Guess a no. between 1 to 100 : ");
    scanf("%d",&n);
    do{
        i++;
        if(n>r){
            printf("Guess the smaller number\n");
        }
        if(n<r){
            printf("Guess the larger number\n");
        }
        scanf("%d",&n);
    }
    while(n!=r);
    printf("You have won and guessed right no. %d in %d chances",r,i);
}
int main(){
    guess();
    getch();
    return 0;
}