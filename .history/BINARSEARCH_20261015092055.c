#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int key , lb , ub;
    printf("Enter the key to be searched:\n ");
    scanf("%d",&key);
    int size;
    lb = 0;
    ub = 9;
    if(lb>ub){
        printf("Search Failed");
    }
    int isfound = 0;
    while(isfound==0 && lb<=ub){
        int mid = (lb+ub)/2;
        if(a[mid]==key){
            isfound = 1;
            printf("Search Successful");
        }
        else if(a[mid]>key){
            ub = mid-1;
        }
        else{
            lb = mid+1;
        }
    }
}