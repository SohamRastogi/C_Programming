#include <stdio.h>
#include <stdio.h>

/* typedef float decimal;
decimal x = 40;
printf("%f",x);
return 0;*/

int main()
{
    typedef struct pokemon{
        int speed;
        int attack;
        int hp;
    }pokemon;
    pokemon pikachu;
    pikachu.speed = 100;
    printf("%d",pikachu.speed);
    return 0;
}