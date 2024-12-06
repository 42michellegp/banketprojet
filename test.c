#include<stdio.h>
int main(){
    int a,b,p,r,s,ppcm;
    printf("entrez deux nombres entiers a et tels que a>b\n");
    scanf("%d %d",&a,&b);
    p=a*b;
    r=a%b;
    while(r!=0){
        s=a;
        a=b;
        b=a%b;
    }
    ppcm=p/b;
    printf("le ppcm de ces deux nombres est: %d\n", ppcm);
    return(0);
}