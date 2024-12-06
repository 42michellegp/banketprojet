#include<stdio.h>
int main(){
    int a,b,p,r,s,ppcm;
    printf("entrez deux nombres a et tel que a>b\n");
    scanf("%d %d",&a,&b);
    p=a*b;
    r=a%b;
    while(r!=0){
        s=a;
        a=b;
        b=a%b;
    }
    ppcm=b/a;
    printf("le ppcm de ces deux nombres est:", ppcm);
    return(0);
}