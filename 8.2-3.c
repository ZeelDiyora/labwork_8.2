#include <stdio.h>

int main() {
int j,k;
printf("enter the size of array :");
scanf("%d",&j);
int a[j];

printf("enter the elements of array\n");
for(k=0;k<j;k++){
printf("a[%d]=",k);
scanf("%d",&a[k]);
}

for(k=0;k<j;k++){
a[k]=a[k]*a[k];    
}
for(k=0;k<j;k++){
printf("a[%d]=%d\n",k,a[k]);    
}

}