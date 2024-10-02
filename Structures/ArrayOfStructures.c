#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon{
        int attack;
        int speed;
        int hp;
        char tier;
        char name[15];
    }pokemon;         // pokemon data type just like int !!
    pokemon arr[3];   // like int arr[3]!!
    arr[0].attack = 30;
    arr[0].speed = 40;
    arr[0].hp = 50;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"pikachu : ");
    
    arr[1].attack = 60;
    arr[1].speed = 70;
    arr[1].hp = 80;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"raichu : ");

    arr[2].attack = 90;
    arr[2].speed = 100;
    arr[2].hp =110;
    arr[2].tier = 'C';
    strcpy(arr[2].name,"mewtwo : ");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%c\n",arr[i].tier);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp); 
        printf("%d\n",arr[i].speed);
        printf("\n");
    }
    return 0;


}
