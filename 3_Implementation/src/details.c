#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void details(void)
{
	int p;
	int count =0;
	char pass[10],pak[10]="admin";
	printf("Enter the password to see details: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		for (p=0;p<count;p++)
		{
			printf("seat no: %d is booked by %s booking id is %d\n",person[p].seatnum,person[p].name,person[p].id);
		}
	}
	else
		printf("Entered password is wrong \n");
		system("PAUSE");
		system("CLS");
}