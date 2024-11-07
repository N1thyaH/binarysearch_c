#include<stdio.h>
int main()
{
    int arr[10], i, n, key;
    int temp, mid, low, high;
    

    printf("enter no of numbers: ");
    scanf("%d",&n);
    
    printf("enter the numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the search element: ");
    scanf("%d",&key);

    //bubble sort

//    low=0;
//    high=n-1;

 //   for(i=0;i<n-1;i++){
 //       for(int j=0;j<n-i-1;j++){
 //           if(arr[j]>arr[j+1]){
 //               temp = arr[j];
 //               arr[j] = arr[j+1];
 //               arr[j+1] = temp;
 //           }
 //       }
 //   }
    
    //selesction sort

    for(i=0;i<n-1;i++){
        int pos=i; int small=arr[i];
        for(int j=i-1;j<n;j++){
            if(small>arr[j]){
                pos=j;
                small=arr[j];
            }
        }
        arr[pos]=arr[i];
        arr[i]=small;
    }

    printf("sorted array: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    do{
        mid = (low+high)/2;
        if(key < arr[mid]){
            high=mid-1;
        }else if(key > arr[mid]){
            low=mid+1;
        }
        }while(key != arr[mid] && low <= high);

    if(key==arr[mid]){
        printf("\nelement found at %d",mid+1);
    }else{
        printf("\nelement not found");
    }
    return 0;
}