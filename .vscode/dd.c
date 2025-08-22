#include <stdio.h>
#include<string.h>
 struct employee
 {
    int code;
    char name[30];
    float salary;
 };
 
int main(){
    struct employee e1,e2,e3;
    strcpy(e1.name,"harry");
    e1.salary=54.4;    
  printf("%s %f\n",e1.name,e1.salary );

    strcpy(e2.name,"bulbul");
    e2.salary=62.8;    
   printf("%s %f\n",e2.name,e2.salary);

    strcpy(e3.name,"raju");
    e3.salary=72.9;    
    printf("%s %f\n",e3.name,e3.salary);
    return 0;
}