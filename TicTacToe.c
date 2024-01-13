#include<stdio.h>
void board();
int checkwin();
char number[]={'0','1','2','3','4','5','6','7','8','9'};
void main()
{
	board();
	int player=1,input,stop=-1;
	while(stop==-1)
	{
		player=(player%2==0)? 2:1;
		char sign=(player==1)? 'X':'O';
		printf("Enter the available box number (0-8) for player %d:\t",player);
		scanf("%d",&input);
		if(input<0 || input >8) 
		{
			printf("Please enter the valid number (0-8):\t");
			scanf("%d",&input);
		}
		number[input]=sign;
		board();
		if(checkwin()==1)
		{
			printf("Player %d won.",player);
			return ;
		}
		if(checkwin()==0)
		{
			printf("Draw");
			return ;
		}
		player++;
	}
	
}
void board()
{
	printf("\n\n");
	system("cls");
	printf("   	|	|	\n");
	printf("   %c	|   %c	|   %c	\n",number[0],number[1],number[2]);
	printf("________|_______|_______\n");
	printf("	|	|	\n");
	printf("   %c	|   %c	|   %c	\n",number[3],number[4],number[5]);
	printf("________|_______|_______\n");
	printf("	|	|	\n");
	printf("   %c	|   %c	|   %c	\n",number[6],number[7],number[8]);
	printf("	|	|	\n");

}
int checkwin()
{
	if(number[0]=='X' && number[1]=='X' && number[2]=='X')
	{
		return 1;
	}
	if(number[3]=='X' && number[4]=='X' && number[5]=='X')
	{
		return 1;
	}
	if(number[6]=='X' && number[7]=='X' && number[8]=='X')
	{
		return 1;
	}
	if(number[0]=='X' && number[3]=='X' && number[6]=='X')
	{
		return 1;
	}
	if(number[2]=='X' && number[5]=='X' && number[8]=='X')
	{
		return 1;
	}
	if(number[1]=='X' && number[4]=='X' && number[7]=='X')
	{
		return 1;
	}
	if(number[0]=='X' && number[4]=='X' && number[8]=='X')
	{
		return 1;
	}
	if(number[2]=='X' && number[4]=='X' && number[6]=='X')
	{
		return 1;
	}
	
	
	if(number[0]=='O' && number[1]=='O' && number[2]=='O')
	{
		return 1;
	}
	if(number[3]=='O' && number[4]=='O' && number[5]=='O')
	{
		return 1;
	}
	if(number[6]=='O' && number[7]=='O' && number[8]=='O')
	{
		return 1;
	}
	if(number[0]=='O' && number[3]=='O' && number[6]=='O')
	{
		return 1;
	}
	if(number[2]=='O' && number[5]=='O' && number[8]=='O')
	{
		return 1;
	}
	if(number[1]=='O' && number[4]=='O' && number[7]=='O')
	{
		return 1;
	}
	if(number[0]=='O' && number[4]=='O' && number[8]=='O')
	{
		return 1;
	}
	if(number[2]=='O' && number[4]=='O' && number[6]=='O')
	{
		return 1;
	}
	
	int i,count=0;
	for(i=0;i<=8;i++)
	{
		if(number[i]=='X' || number[i]=='O')
		{
			count++;
		}
	}
	 if(count==8)
	{
		return 0;
	}
	return -1;
}