//codforce problem no: 4a
//problem name: watermelton

#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w>=1 && w<=100)
    {
        if(w==2) printf("no\n");
        else if(w%2==0)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
