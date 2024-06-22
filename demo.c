#include<stdio.h>
void main( ) {
 int i,j=10;
for(i=1;i<=j;i++,j--) {
    if(i%j==0){
        printf("%d",++i);
        }
}
}
