#include<stdio.h>
struct complex
{
	int real;
	int img;
};
void incrComplex(struct complex *c)
{
	c -> real++;
	c->img++;
}
int main()
{
	struct complex c;
	printf("Enter real no.:\n");
	scanf("%d",&c.real);
	printf("Enter imaginary no.:\n");
	scanf("%d",&c.img);
	incrComplex(&c);
	printf("After increment:\n");
	printf("Real=%d Imaginary=%d",c.real,c.img);
}
