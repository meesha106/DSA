#include<stdio.h>
#include<stdlib.h>

int main(){
int *arr,n;
printf("Enter number of elements: ");
scanf("%d",&n);
arr= (int*)malloc(n*sizeof(int));
printf("Enter elements: \n");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max_sum=arr[0],current_sum=arr[0];
int start=0,end=0,temp_start=0;
for (int i=1;i<n;i++){
    if(current_sum<0){
        current_sum=arr[i];
        temp_start=i;
    }
    else{
        current_sum+=arr[i];
    }
    if(current_sum>max_sum){
        max_sum=current_sum;
        start=temp_start;
        end=i;
    }
}
printf("Sub-array:\n");
for(int i=start;i<=end;i++){
    printf("%d ",arr[i]);
}
printf("\nLargest sum: %d",max_sum);
}
