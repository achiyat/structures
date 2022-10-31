#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#pragma warning(disable:4996)

/*
הגדירו מבנה של פרטי מוצר :שם,מחיר,ברקוד

הגדירו מערך של מבנה פרטי עובד בגודל של 5

הכניסו 5 עובדים למאגר
*/
int main()
{
	struct Item
	{
		int barcode;
		char name[100];
		int price;
	};

	struct Item itemList[10];

	for (int i = 0; i < 3; i++)
	{
		printf("barcode ");
		scanf("%d", &itemList[i].barcode);

		printf("\nname ");
		scanf("%s", &itemList[i].name);

		printf("\nprice ");
		scanf("%d", &itemList[i].price);

		printf("\n\n");
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d %s %d\n", itemList[i].barcode, itemList[i].name, itemList[i].price);
	}

	return 0;
}