#include<stdio.h>
#include<stdlib.h>
void reverse(int* arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
int *arr,n;
int ind=-1;
printf("Enter number of elements: ");
scanf("%d",&n);
arr= (int*)malloc(n*sizeof(int));
printf("Enter elements: \n");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for (int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
for (int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
        ind=i;
        break;
    }
}
 if (ind == -1) {
        reverse(arr, 0, n - 1);
    } else {
        for (int i = n - 1; i > ind; i--) {
            if (arr[i] > arr[ind]) {
                int temp = arr[i];
                arr[i] = arr[ind];
                arr[ind] = temp;
                break;
            }
        }
        reverse(arr, ind + 1, n - 1);
    }
printf("Next Permutation: ");
for (int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}


