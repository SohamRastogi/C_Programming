                                 // THIS IS THE CORRECT CODE !!
                                           
#include <stdio.h>
int main()
{  
   
    int n;
    int arr[n];
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter a number : ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}