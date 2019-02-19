#include "stdio.h"

void
helloWorldFunction(char *input);
int
main()
{
 helloWorldFunction("Hello World");
 return 0;
}


void
helloWorldFunction(char *input)
{
 printf("%s\n",input);
}
