# include <stdio.h>
# include <stdlib.h>
 int a=3,b=5;
 int *addrA=&a;
 int *addrB=&b;
void swap();

 int main (){
    if (a<b){
        swap(addrA,addrB);
        printf("a=%d\nb=%d\n",a,b);
    }
    return 0;
 }
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}