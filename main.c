#include<stdio.h>

int main(){

int n;
scanf("%d",&n);
int num=0;
int sum=0;
int original=n;
int originall=n;
while(original>0){
   ++num;
   original/=10;
}

while(n>0){
   int lastdigit=n%10;
   int powdigit = 1;
   for(int i=1;i<=num;i++){
       powdigit=powdigit*lastdigit;

   }
   sum=sum+powdigit;
   n/=10;

}

if(sum==originall){
   printf("Armstrong");
}
else{
    printf("not armstrong");
}

}
