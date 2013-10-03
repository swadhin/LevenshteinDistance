/*************************************************************/
// Name : SWADHIN PRADHAN
/************************************************************/

#include <stdio.h>
#include "levenDistance.h"


int main()
{
	char str1[100],str2[100];
	int rCost_1 = 1; //w1 : Cost of replacement for easily replaceable pair of letters.
	int rCost_2 = 1; //w2 : Cost of replacement for difficult to replace pair of letters.

	printf("\n**************** Levenshtein Edit Distance Calculation *******************\n");
	printf("\n\tPlease Enter Two Strings(First_String Second_String) ::  ");
	scanf("%s",str1);
	scanf("%s",str2);
	printf("\n\tEnter Cost of Replacement for easily replaceable pair of letters :: ");
	scanf("%d",&rCost_1);
	printf("\n\tEnter Cost of Replacement for difficult to replace pair of letters :: ");
	scanf("%d",&rCost_2);

	printf("\n\tEdit Distance :: %d \n\n",LD(str1,str2,rCost_1,rCost_2));

	return 0;
}
