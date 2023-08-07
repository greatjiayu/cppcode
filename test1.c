#include<stdio.h>

int main(){
    int max = 100,  i = 0;
    for(i = max; i >= 17; i--){
        if(i % 17 == 0){
            break;
        }
    }
    printf("xxxxxxxx: %d",i);

}