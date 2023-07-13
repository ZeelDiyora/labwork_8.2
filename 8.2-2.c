#include <stdio.h>

void main() {
int v,r,k,j=0;
printf("enter the first number : ");
scanf("%d",&r);

printf("enter the last number : ");
scanf("%d",&k);

int a[k+r];
for(v=r;v<=k;v++){
if(v%4==0){
    a[j]=v;
    j++;
}
}
for(v=0;v<j;v++){
printf("the leap year is : %d\n",a[v]);    
}
}