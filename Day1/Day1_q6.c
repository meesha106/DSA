#include<stdio.h>
#include<stdlib.h>

int main(){
int arr[6];
printf("Enter stock prices for this week:\n");
for(int i=0;i<6;i++){
    scanf("%d",&arr[i]);
}
int minPrice=100, maxPro=0, diff=0,max;
for (int i=0;i<6;i++){
    if(arr[i]<minPrice){minPrice=arr[i];}
    diff=arr[i]-minPrice;
    if(diff>maxPro){
        maxPro=diff;
        max=i;}
}
printf("Buying price: %d \nSelling price: %d \nProfit: %d",minPrice,arr[max],maxPro);
}
