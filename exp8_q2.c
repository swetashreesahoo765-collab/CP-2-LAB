#include<stdio.h>
struct distance
{
	int km,m,cm;
};
int main()
{
	struct distance d[5];
	int i;
	int max=0;
	for(i=0;i<2;i++)
	{
		printf("Enter distance in km,m &cm:");
		scanf("%d %d %d",&d[i].km,&d[i].m,&d[i].cm);
	}
	for(i=0;i<2;i++)
	if(d[i].km>d[max].km)
	max=i;
	printf("Longest distance:%dkm %dm %dcm",d[max].km,d[max].m,d[max].cm);
}
