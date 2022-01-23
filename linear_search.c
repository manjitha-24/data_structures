/******************************************************************************

                          linear search

*******************************************************************************/

#include<stdio.h>

int main(){
    int key,a[5],i,flag=0;
    printf("enter the array elements");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the key element");
    scanf("%d",&key);
    for(i=0;i<5;i++){
        if(key == a[i]){
            printf("element found at %d location",i+1);
            flag = 1;
        }}
        if(flag == 0)
        printf("element not found");
    
    return 0;
}
