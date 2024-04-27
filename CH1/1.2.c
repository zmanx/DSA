#include <stdio.h>

int main()
{

int var;
int* ptr;
var = 10;
ptr = &var;


printf("Value stored at cariable var is %d\n",var);
printf("Value stored at cariable var is %d\n",*ptr);

printf("Value stored at cariable var is %p\n",&var);
printf("Value stored at cariable var is %p\n",ptr);
return 0;
}
