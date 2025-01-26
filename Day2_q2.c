#include<stdio.h>
#include<stdlib.h>
int main(){
int r,c,n;
printf("Enter number of rows: ");
scanf("%d",&n);
int a[50][50];
for (int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        if(j==0 || j==i){
            a[i][j]=1;
        }
        else{
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
}

printf("Enter row and column to be found: ");
scanf("%d%d",&r,&c);
for(int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
        if(i==r && j==c){
            printf("%d\n",a[i][j]);
        }
    }
}

for(int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");}}
