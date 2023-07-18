#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i, length;
    int res = 0;
    printf("Enter name : ");
    scanf("%s", name);
    length = strlen(name);
    for(i=0;i < length ;i++){
        if(name[i] != name[length-i-1]){
            res = 1;
            break;
           }
        }
    if (res) {
        printf("%s is not a palindrome", name);
    }    
    else {
        printf("%s is a palindrome", name);
    }
}