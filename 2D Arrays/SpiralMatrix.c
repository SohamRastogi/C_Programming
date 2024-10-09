#include<stdio.h>
int main()
{
    int r;
    int c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0 ;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int minr = 0;
    int maxr = c-1;
    int minc = 0;
    int maxc = r-1; 
    int totalelements = r*c; 
    int count = 0;
    while(count<totalelements){
        // print minimum row 
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]); 
            count++;
        }
        minr++;
        if(count>=totalelements) break;
        // print maximum column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=totalelements) break;
        // print maximum row in reverse 
        for(int k=maxc;k>=minc;k--){
            printf("%d ",arr[maxr][k]);
            count++;
        }
        maxr--; 
        if(count>=totalelements) break;
        // print minimum column in reverse 
        for(int l=maxr;l>=minr;l--){
            printf("%d ",arr[l][minc]);
            count++;
        }
        minc++; 
    }
    return 0;
}