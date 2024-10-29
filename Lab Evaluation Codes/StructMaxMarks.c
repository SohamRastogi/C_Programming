#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    typedef struct student{
        int marks;
        int roll;
        char name[100];
    } student;
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    student arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i].roll);
        scanf("%d",&arr[i].marks);
        scanf("%s",arr[i].name);
    }
    int max = -10000;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(max<arr[i].marks){
            max = arr[i].marks;
            idx = i;
        }
    }
    printf("%d/n%d/n%s/n",arr[idx].roll,arr[idx].marks,arr[idx].name);
    return 0 ;
}