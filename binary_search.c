#include<stdio.h>

int binary_search(int A[],int n,int m)
{
    int i,left,right,mid;
    i=0;
    left=0;
    right=n-1;
    while(left<=right){

        mid=(left+right)/2;
        if(A[mid]==m){
            return mid;
        }
        else if(A[mid]<m){
            left=mid+1;
        }
        else{
            right=mid-1;
        }

    }
    return -1;


}


int main()
{
    int arra[1000],i,j,n,m;
    printf("Enter the number of array length: ");
    scanf("%d",&n);
    printf("Enter the searching value is: ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    // sort using bubble sort
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
                if(arra[j]>arra[j+1]){
                        temp=arra[j];
                        arra[j]=arra[j+1];
                        arra[j+1]=temp;

                }

        }

    }

     int result;
     result=binary_search(arra,n,m);
     if(result!=-1){
        printf("search number %d  position is: %d",m,result);
     }

    return 0;
}
