#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int x =4;
    int flag=0;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
           flag =1;
           break;
        } 
    }
    if (flag ==1) printf("number is present ");
    else printf("number is not present");
    
    
    return 0;
}