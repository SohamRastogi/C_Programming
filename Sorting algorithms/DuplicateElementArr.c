// numbers one to n only !!
// brute force method 
#include <stdio.h>
int main()
{
    int arr[7]={1,2,3,2,5,6,7};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]) printf("%d",arr[i]);
        }
    }
    return 0;
}
/* optimized approach : 
   create new brr with index 0-6 and let when number 5 appears on index 0, write 1 in index 5, when already one present: that number repeated !!*/
/*most optimized approach : 
  sum of the elements of the set and sum of the elements of 1 to n natural numbers difference !!*/