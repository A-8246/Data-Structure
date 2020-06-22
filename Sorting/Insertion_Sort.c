#include <stdio.h>

int main(){
    int a[50];
    int n,temp=0,j=0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d", (a+i));
    printf("Unsorted Array: ");
    
    printf("Sorted Array: ");
    int min=0;
    //Main Logic
    for(int i=1;i<=n-1;i++){
       j = i-1;
       min=a[i];
       while(j>=0 && a[j]>min){
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=min;
    }
    
    for(int i=0;i<n;i++)
        printf("%d ", *(a+i));
    
    return 0;
}
