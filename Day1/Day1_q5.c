#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter number of elements: \n");
    scanf("%d",&num);
    int a[num];
    printf("Enter elements(0s,1s,2s): \n");
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    int low=0,mid=0,high=num-1;
    while(mid<=high){
        if(a[mid]==0){
            int temp=a[low];
            a[low]=a[mid];
            a[mid]=temp;
            low=low+1;
            mid=mid+1;
        }
        else if(a[mid]==1){
            mid=mid+1;
        }
        else{
            int temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high=high-1;
        }
    }
    printf("Sorted array: \n");
    for(int i=0;i<num;i++){
        printf("%d ",a[i]);
    }
}
