#include<stdio.h>
#include<stdlib.h>
int binsearch(int *,int,int,int);
int main()
{
    int *arr,ele,i,size,k;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter the search element: ");
    scanf("%d",&ele);
    k=binsearch(arr,ele,0,(size-1));
        if(k!=NULL)
    printf("the element found at pos %d",(k+1));
    else
        printf("unsuccesful");

    return 0;
}


    int binsearch(int *ar,int ele,int beg,int end)
{
    int size,i,mid;
    mid=(beg+end)/2;

        while(beg<=end && ar[mid]!=ele)
        {

    if(ele>ar[mid])
        beg=mid+1;
    if(ele<ar[mid])
        end=mid-1;
        mid=(beg+end)/2;

        }
    if(ele==ar[mid])
         return(mid);


}


