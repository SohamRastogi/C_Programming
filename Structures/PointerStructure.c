#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int attack;
    int hp;
    int speed;
    char tier;
    char name[15];
}pokemon;

int main()
{ 
    pokemon pikachu;
    pikachu.attack = 0;
    pikachu.hp = 0;
    pikachu.speed=0;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"pikachu");
    /* int a = 4;
       int* x = &a;
       *x = 7; */
      pokemon* x = &pikachu;
      (*x).attack = 100;
      (*x).hp = 100;
      (*x).speed = 100;
      (*x).tier = 'B';
       strcpy((*x).name,"pika pika");
      printf("%d\n",pikachu.attack);
      printf("%d\n",pikachu.hp);
      printf("%d\n",pikachu.speed);
      printf("%c\n",pikachu.tier);
      printf("%s\n",pikachu.name);
      return 0;
}