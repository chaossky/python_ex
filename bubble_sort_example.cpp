#include <iostream>
#include <stdio.h>
#define MAX_SIZE 5

void bubble_sort(int list[],int n){

    int i,j,temp;

    for (i=n-1;i>0;i--){
        for (j=0;j<i;j++){
            if (list[j]<list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;

            }
        }   
    }


}
int main(){
 int i;
 int n=MAX_SIZE;
 int list[n]={1,2,3,4,6};

 bubble_sort(list,n);

 for (i=0;i<n;i++){

     printf("%d ",list[i]);
 }

}