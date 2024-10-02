#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5]= {1,2,3,4,5};
    int x=3;
    bool flag = false;
    int index = -1;
    for(int i=0;i<5;i++){
        if (arr[i]==x){
            flag = true;
            index = i;
            break;
        }
    }
    if(flag == true ) printf("the number is present at index %d",index);
    else printf("number is not present");

    
    
    
    
    return 0;
}