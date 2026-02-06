#include <stdio.h>
int main (){
    int arr[] = {10,20,30,40,50,60};
    int count = sizeof(arr)/sizeof(arr[0]);
    printf("the number of elements is: %d\n",count);
    return 0;
}