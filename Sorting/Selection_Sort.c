#include <stdio.h>

int main(){
    int a[50];
    int n,temp=0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d", (a+i));
    printf("Unsorted Array: ");
    
    printf("Sorted Array: ");
    int min=0;
    //Main Logic
    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(a[min] > a[j])
                min = j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    
    for(int i=0;i<n;i++)
        printf("%d ", *(a+i));
    
    return 0;
}