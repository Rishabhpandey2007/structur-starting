#include <stdio.h>
struct employee {
    int code;
    char name[30];
    float salary;
};

int main(){
    struct employee e1;
    e1.code=56;
    struct employee *ptr;
    ptr = &e1;
    printf("%d",(*ptr).code);
    return 0;
}