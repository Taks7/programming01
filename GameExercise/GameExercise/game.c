
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	int die1;
	int die2;
	int bet;
	int total;
	char guess;
	int count = 0;
	srand(time(NULL));

	die1 = ((rand() % 6) + 1);
	die2 = ((rand() % 6) + 1);
	total = (die1 + die2);

	printf("Die 1: %d\n", die1);
	printf("Die 2: %d\n", die2);
	printf("___________________\n");
	printf("Total is: %d\n\n", total);
	bet = total;

	printf("Do you think the next total will be higher, the same, or lower than the previous one? (h, s, l) \n\n");
	scanf_s(" %c", &guess);

	die1 = ((rand() % 6) + 1);
	die2 = ((rand() % 6) + 1);
	total = (die1 + die2);

	printf("Die 1: %d\n", die1);
	printf("Die 2: %d\n", die2);
	printf("___________________\n");
	printf("Total is: %d\n\n", total);

	if ((total > bet) && (guess == 'h'))
	{
		printf("You guessed correctly!\n");	
	}
	else if ((total == bet) && (guess == 's'))
	{
		printf("You guessed correctly!\n");	
	}
	else if ((total < bet) && (guess == 'l'))
	{
		printf("You guessed correctly!\n");	
	}
	else
	{
		printf("You guessed incorrectly!\n");
	}
	

	return 0;
}