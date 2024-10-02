#include <stdio.h>
#include <string.h>
typedef struct pokemon{    // global variable !!
    int attack;
    int hp;
    int speed;
    char tier;
    char name [15];
}pokemon;
void change(pokemon pikachu){
    pikachu.attack = 100000;    // pass by value !!
    return ;
}
int main()
{
   pokemon pikachu;
   pikachu.attack  = 20;
   pikachu.speed = 40;
   pikachu.hp = 60;
   pikachu.tier = 'A';
   strcpy(pikachu.name,"pikachu");
   change(pikachu);
   printf("%d",pikachu.attack);
   return 0;
}

