#include <stdio.h>
#include <string.h>
int main()
{
    typedef union pokemon{      // ## only 1 member can be used at a time !!
        int attack;             
        int speed;
        int hp;
        char tier;
        char name[15];
    }pokemon;
    pokemon pikachu;
    pikachu.attack = 100;
    pikachu.speed = 50;
    pikachu.hp= 25;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"pikachu");
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.hp);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}
// used when all variables needed but only variable required at a time, so it saves memory !!
       