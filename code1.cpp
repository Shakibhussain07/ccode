#include<stdio.h>
int main(){
    int arr[100],i,n,pos;
    printf("Enter the number of array length: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("Enter position to delete element:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }n--;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
