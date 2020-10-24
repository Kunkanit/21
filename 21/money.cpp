#include"stdio.h"
#include"conio.h"
#include"math.h"
void money_change(int x) {

	if (x >= 1000) {
		printf("\n1000 Baht = %d  ", x / 1000);
		x = x % 1000;
	}

	if (x >= 500) {
		printf("\n500 Baht = %d  ", x / 500);
		x = x % 500;
	}

	if (x >= 100) {
		printf("\n100 Baht = %d  ", x / 100);
		x = x % 100;
	}

	if (x >= 50) {
		printf("\n50 Baht = %d  ", x / 50);
		x = x % 50;
	}

	if (x >= 20) {
		printf("\n20 Baht = %d  ", x / 20);
		x = x % 20;
	}

	if (x >= 10) {
		printf("\n10 Baht = %d  ", x / 10);
		x = x % 10;
	}

	if (x >= 5) {
		printf("\n5 Baht = %d  ", x / 5);
		x = x % 5;
	}

	if (x >= 2) {
		printf("\n2 Baht = %d  ", x / 2);
		x = x % 2;
	}

	if (x >= 1) {
		printf("\n1 Baht = %d  ", x / 1);
		x = x % 1;
	}
	else if(x<0) {

		printf("\nSorry your money not enough...You have to pay an additional %d baht", abs(x));

	}


}





int main() {

	int product, pay, money, num;
	bool check = true;

	do {
		printf("\nPress 1 to Enter OR 0 to Exit = ");
		scanf_s("%d", &num);

		if (num == 0) {
			check = false;
			printf("\n See You Next Time");

		}
		else if (num == 1) {

			printf("\nEnter amount of product : ");
			scanf_s("%d", &product);

			printf("\nEnter amount of paid : ");
			scanf_s("%d", &pay);

			money = pay - product;
			if (money > 0) {
				printf("\nChange money total : %d Baht ", money);
			}

			money_change(money);

		}
	} while (check);
	return 0;
}

