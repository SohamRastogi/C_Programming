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
      printf("%p\n",&pikachu.attack);
      printf("%p\n",&pikachu.hp);
      printf("%p\n",&pikachu.speed);
      printf("%p\n",&pikachu.tier);
      printf("%p\n",pikachu.name);  // no need of & as string !!
      printf("%p",x);      
      return 0;
}