#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon{
        int attack;
        int speed;
    }pokemon;
    pokemon pikachu;
    typedef struct legendarypokemon{
        pokemon normal;
        int hp;
    }legendarypokemon;
    legendarypokemon mewtwo;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;
    godpokemon arceus;
    pikachu.attack = 100;
    pikachu.speed = 50;
    mewtwo.normal.attack = 100;
    mewtwo.normal.speed = 100;
    mewtwo.hp = 100;
    arceus.legend.normal.attack = 1000;
    arceus.legend.normal.speed = 2000;
    arceus.legend.hp = 3000;
    arceus.specialattack = 4000;
    printf("%d",arceus.legend.normal.attack);
    return 0;


}