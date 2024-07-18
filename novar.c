
int main()
{
	int a,b;
	printf("ENTER TWO NUMBERS TO BE SWAPPED\n");
	scanf("%d%d" ,&a ,&b);
	printf("number before swapping are %d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("number after swapping are %d and %d\n",a,b);
	return 0;
	}
