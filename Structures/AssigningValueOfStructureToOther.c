#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon{
        int speed;
        int attack;
    }pokemon;
    pokemon a,b;
    a.speed = 50;
    a.attack = 100;
    b = a;  // deep copy !!
    printf("%d",b.attack);
    printf("\n");
    printf("%d",b.speed);
    return 0;
}