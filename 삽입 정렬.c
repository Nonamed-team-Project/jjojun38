#include <stdio.h>
int main(void){
    int arr[5]={23, 14, 9, 58, 19};
    int temp;
    
    for(int i=0;i<4;i++){
        int j=i-1;
        while((arr[j] > arr[j+1])&&(j>=0)){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}
