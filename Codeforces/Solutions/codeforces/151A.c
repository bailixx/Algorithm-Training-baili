#include <stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np;
    if(scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np) != 8) return 0;

    int sum = k*l;
    int bottle = sum / nl;
    int fruit = c*d;
    int salt = p/np;

    int num = (bottle < (fruit<salt ? fruit:salt) ? bottle : (fruit<salt ? fruit:salt)) / n;

    printf("%d", num);

    return 0;
}