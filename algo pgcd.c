#include<stdio.h>
#include<math.h>
int main(){
    int a,b,p,s;
    printf("entrez deux nombres a et b tel que a>b\n");
    scanf("%d %d", &a, &b);
    p=a%b;
    while(p>0){
        s=a;
        a=b;
        b=a%b;
    }
    printf("le pgcd de ces deux nombres est:",b);
    return(0);
}