#include<stdio.h>

int main(){

    int age;
    scanf("%d",&age);

    if(age >= 18) {
        printf("you are an adult");
    }
    else{
        printf("you are still child");
    }
}