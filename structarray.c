#include <stdio.h>

struct employee {
    int code;
    char name[30];
    float salary;
};

int main() {
    struct employee harry = {100, "harry", 72.2};

    printf("%s %d %f", harry.name, harry.code, harry.salary);
    
    return 0;
}
