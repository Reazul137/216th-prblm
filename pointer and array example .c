#include<stdio.h>
int main()
{

int i, a[5]={1,2,3,4,5}, *p;
p=a;

for(i=0; i<5; i++)
{
printf("%d\n",*p);
p++;
}

}
