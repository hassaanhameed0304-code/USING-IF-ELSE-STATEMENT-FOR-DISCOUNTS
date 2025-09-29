
#include <stdio.h>
int main(void){
	int price,discount,afterdis;
	printf("Enter the price please");
	scanf("%d",&price);
	if (price < 1000){
		discount = 0;
		afterdis = price;
		printf("discount is %d\n",discount);
		printf("discounted price is %d",afterdis);
	}else if (price >= 1000 && price <= 2000) {
	
		discount = (.05 * price);
		afterdis = price - discount;
		printf("discount is %d\n",discount);
		printf("discounted price is %d",afterdis);
	}else{
		discount = (.10 * price);
		afterdis = price - discount;
		printf("discount is %d\n",discount);
		printf("discounted price is %d",afterdis);
	}
	return 0;
}
