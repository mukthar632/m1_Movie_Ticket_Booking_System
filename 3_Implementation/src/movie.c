#include "function.h"
int ListofMovies(void)

{
	int p;
	system("cls");
	printf("\t\t\tMovie Name?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for Harry Potter\n\n");
	printf("\t\t\tpress 2 for The Invisible Man\n\n");
	printf("\t\t\tpress 3 for Tenet\n");
	scanf("%d",&p);
	return p;
}
    