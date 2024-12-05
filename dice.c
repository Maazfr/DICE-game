#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int rollDie(int sides)
{

return (rand() % sides ) + 1;
}


void rollDice(int numDice , int sides)
{
int total = 0;

printf("\n..... Rolling %d dies with %d sides each\n",numDice,sides);

	for(int i=0;i<numDice;i++)
	{
	int roll = rollDie(sides);
	printf("  DIE %d : %d\n",i+1,roll);
	total+=roll;
	}
printf("Total is %d\n",total);


}



int main()
{
int numDice,sides,choice;

srand(time(0));

	while(1)
	{
	printf("\n..... Dice Simulator Game .....");
	printf("\n.... Enter the number of dice to roll .....\n");
	scanf("%d",&numDice);
	
	printf("....... Enter the number of sides on a dice .....\n");
	scanf("%d",&sides);	

	rollDice(numDice,sides);
	
	printf("\n..... Do you want to roll again .....\n");
	printf("Enter your choice ( YES -- 1 or NO -- 2 )");
	scanf("%d",&choice);
	
	if(choice==1) continue;
	if(choice==2) break;

	}
printf("\n      ~~~ Thank You for playing ~~~");

return 0;
}