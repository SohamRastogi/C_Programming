#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon{
        int speed;
        int attack;
        int hp;
        char tier;
        char name[12];
    }pokemon;
    pokemon pikachu = {40,50,60,'A',"pikachu"};   // Order Wise from definition !!!!
    printf("%d\n",pikachu.speed);
    printf("%s",pikachu.name);
    return 0;

    return 0;
}