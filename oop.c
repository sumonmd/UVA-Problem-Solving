#include<stdio.h>
int main()
{
    int array[1000];
    int i,n,j,temp;
    printf("Enter the Number of Array length: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
           for(j=0;j<n-i-1;j++){
             if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
             }
           }

    }
    printf("After sort the array is: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }



return 0;
}

