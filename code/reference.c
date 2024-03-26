#include <stdio.h>
#include <stdlib.h>

#define num 3

struct reference
{
    int a;
}st;


int main(){

    int arr[3];
    arr[0] = 15;
    void* ptr = &arr;
    printf(" %p", &st.a);

    
    

    return 0;
}