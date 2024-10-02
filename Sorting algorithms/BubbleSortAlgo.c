#include<stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5] = {5,4,3,2,1};
    int n=5;
    // bubble sort !!
    for(int i=0;i<n-1;i++){       // passes !!
         bool flag = true;
        for(int j=0;j<n-1-i;j++){  // n-1 compuslory, n-1-i for optimizing the code !!
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                flag = false;
            }
        }
        if(flag == true) break; 
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}