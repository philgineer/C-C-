#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

struct		person		// person: tag of structure
{
	char	name[MAX];	// member
	int		age;		// member
	float	height;		// member
};

int main()
{
	int flag; // Receive return value of scanf()

	struct person genie; // Structure variable

	/* dot(.): structure membership operator (member access operator) */

	strcpy(genie.name, "Will Smith");
	genie.age = 1000;
	printf("Height of Will Smith: ");
	flag = scanf("%f", &genie.height);
	printf("flag: %d\n\n", flag);

	struct person princess = {"Naomi Scott", 18, 160.0f};

	struct person beauty = {
		.height = 150.0f,
		.age = 19,
		.name = "Bell"
	};

	struct person * someone;

	someone = &genie;
	// someone = (struct person *)malloc(sizeof(struct person));

	/* Indirect member operator (structure pointer operator) */
	someone->age = 1001;

	printf("%-12s | %-6s | %-10s\n", "NAME", "AGE", "HEIGHT");
	for (int i = 0; i < 30; i++)
		printf("-");
	printf("\n");
	printf("%-12s | %-6d | %-10.2f\n", genie.name, genie.age, genie.height);
	printf("%-12s | %-6d | %-10.2f\n", princess.name, princess.age, princess.height);
	printf("%-12s | %-6d | %-10.2f\n", beauty.name, beauty.age, beauty.height);
	printf("%-12s | %-6d | %-10.2f\n", someone->name, (*someone).age, someone->height);
}
