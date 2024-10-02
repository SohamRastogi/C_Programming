#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5]= {1,2,3,4,5};
    int x = 3;
    bool flag = false;
    for(int i=0;i<5;i++){
        if ( arr[i]= x) {flag = true;break ;}
    }
    if (flag == true) printf("number is present");
    else printf("number is not present");
    
    
    
    
    return 0;
}