int main()
{
	int a,b,c;
	printf("ENTER TWO NUMBERS TO BE SWAPPED\n");
	scanf("%d%d" ,&a ,&b);
	printf("number before swapping are %d and %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("number after swapping are %d and %d",a,b);
	return 0;
}

