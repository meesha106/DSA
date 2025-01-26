#include<stdio.h>
#include<stdlib.h>
int main(){
int m,n;
printf("Enter number of rows and columns: ");
scanf("%d%d",&m,&n);
int arr[m][n];
printf("Enter elements of array: ");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}

int size[m*n][2];
int k=0;
for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        if(arr[i][j]==0){
            size[k][0]=i;
            size[k][1]=j;
            k++;
        }
    }
}

for (int i = 0; i < k; i++) {
        int row = size[i][0];
        int col = size[i][1];
        for (int x = 0; x < n; x++) {
            arr[row][x] = 0;
        }
        for (int x = 0; x < m; x++) {
            arr[x][col] = 0;
        }
    }


for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}

