#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

int getFormat(){
    int f;
    printf("Choose the time format\n1. 24 hour format\n2. 12 hour format\nMake a choice(1/2) : ");
    scanf("%d",&f);
    return f;
}

void getTime(char rt[],int f){
    time_t now=time(NULL);
    struct tm*t=localtime(&now);
    if(f==1)
    strftime(rt,100," %H:%M:%S",t);
    else
    strftime(rt,100," %I:%M:%S %p",t);
    
}

void getDate(char rt[]){
    time_t now=time(NULL);
    struct tm*t=localtime(&now);
    strftime(rt,100," %a %b %d %Y",t);
}

int main(){
    int f=getFormat();
    char rt[100];
    char da[100];
    while(1){
        sleep(1);
        system("cls");
        getTime(rt,f);
        getDate(da);
        printf("Curret Time : %s\n",rt);
        printf("Date : %s",da);
    }
    getch();
    return 0;
}
