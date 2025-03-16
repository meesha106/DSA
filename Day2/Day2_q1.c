#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements of matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //transposing the matrix
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //reversing each row
    for(int i=0;i<r;i++){
        int k=c-1;
        for(int j=0;j<c/2;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            k--;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
