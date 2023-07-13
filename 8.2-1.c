#include <stdio.h>

void main() {
    
    int p,q,r,s; 
    
    printf("Enter the size of A array : ");
    scanf("%d",&q);
    
    int a[q];
    
    printf("Enter array a elements \n");
    for(p=0;p<q;p++){
        printf("a[%d]=",p);
        scanf("%d",&a[p]);
    }
    
    printf("Enter the size of B array : ");
    scanf("%d",&r);
    
    int b[r];
    
    printf("Enter array B elements \n");
    for(p=0;p<r;p++){
        printf("b[%d] = ",p);
        scanf("%d",&b[p]);
    }
    
    int c[q+r];
    for(p=0;p<q;p++){
        
    c[p]=a[p];
    }
    for(p=0;p<q;p++){
        c[p+q]=b[p];
    }
    for(p=0;p<q;p++){
        printf("c[%d] = %d\n",p,c[p]);
    }
}