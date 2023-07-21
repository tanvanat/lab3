#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int num;
	double collect;
	double count;
	do{
		printf("Input number : \n");
		scanf("%d", &num);
		if(num>0){
			collect+=num;
			++count;
		}
	}
	while(num>0);
	float avg = collect/count;
	printf("sum = %.2f\n",collect);
	printf("avg = %.2f\n",avg);

}
