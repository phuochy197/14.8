#include<stdio.h>
void main(){
	int count;
	int min,max;
	printf("nhap min\n");
	scanf("%d",&min);
	printf("nhap max\n");
	scanf("%d",&max);
	for (count=max;count>=min;count--){
		if(count%2==0)
		{
		printf("\n\t\t so Chan %d\n",count);
	}
}
}
