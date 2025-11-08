#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num,random;
    char choice;

    do
    {
	 clrscr();

	 printf("==Rock Paper Scissor==");

	 printf("1. Rock\n 2. Paper\n 3. Scissor\n");

	 printf("\nEnter your choice (1-3): ");

	 scanf("%d",&num);

	 if (num < 1 || num > 3)
	 {
	      printf("\n Invalid Choice, Try Again");
	      getch();
	      continue;
	 }

	 srand(time(0));
	 random = (rand() % 3) + 1;

	 printf("\nYou Chose: ");
	 if (num ==1) printf("Rock");
	 else if (num ==2) printf("Paper");
	 else printf("Scissor");

	 printf("Computer chose : ");
	 if (random == 1) printf("Rock");
	 else if(random ==2) printf("Paper");
	 else printf("Scissor");

	 if (num == random) printf("\n Its a draw");
	 else if((num == 1 && random == 3) || (num == 2 && random == 1) || (num ==3 && random ==1)) printf("\n You Won!");
	 else printf("You lost, Computer wins!");

	 printf("\n\n Do you want to play again? (y/n)");
	 choice = getch();
	 }

	 while (choice == 'y' || choice == 'Y');

	 printf("\n\nThanks for playing!");

	 getch();
	 return 0;
	 }





























