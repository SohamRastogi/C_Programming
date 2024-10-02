#include <stdio.h>
#include <string.h>
int main()
{
    struct pokemon{             // class => pokemon ;; objects => attack,speed,hp,tier,name !!
        int attack;
        int speed;
        int hp;
        char tier;
        char name[20];
    }/*pikachu;*/;    // this declaration also valid !!
    struct pokemon pikachu;
    pikachu.attack = 100;
    pikachu.speed = 50;
    pikachu.hp = 25;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.hp);
    printf("%c",pikachu.tier);
    return 0;

}