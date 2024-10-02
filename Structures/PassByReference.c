#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int speed;
    int hp;
    int attack;
    char tier ;
    char name[20];
}pokemon;
void change (pokemon* p){
    // (*x).something is same as x -> something !!!! latter one better practice to do !!!!
    (*p).attack = 200;
    (*p).speed = 200;
    (*p).hp = 200;
    (*p).tier = 'S';
    strcpy((*p).name,"Pika");
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.attack= 100;
    pikachu.hp = 100;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"pikachu");
    change (&pikachu);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    
    return 0;
}