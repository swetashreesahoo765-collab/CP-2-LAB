#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
int i ,c ;
for(i=0;i<argc;i++)
{
c=atoi(argv[i]);
}
printf("No. of argument is %d",argc);
}
