#include <stdio.h>
#include <string.h>


typedef struct vector
{
    int x;
    int y;
}v;

void sumvec(v v1, v v2, v vf);

int main()
{
    v v1 ={5,10};
    v v2 ={1,2};
    v vf ={0,0};
    sumvec(v1,v2,vf);

    return 0;
}

void sumvec(v v1,v v2,v vf)
{
    vf.x=v1.x+v2.x;
    vf.y=v1.y+v2.y;
    printf("Resultant vector is : %di + %dj ",vf.x,vf.y);
}