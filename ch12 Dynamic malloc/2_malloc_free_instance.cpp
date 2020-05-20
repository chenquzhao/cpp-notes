#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Car
{
	char maker[32];
	int price;
};

struct Citizen
{
	char name[32];
	int deposit;
	Car* car;
};

void buy_chev(Citizen* owner)
{
	// create an object
	Car* car = (Car*)malloc(sizeof(Car));
	if (car)
	{
		strcpy(car->maker, "Chevrolet");
		car->price = 10;
	}
	
	// save the object (remember the pointer)
	owner->car = car;
	if(car)
		owner->deposit -= car->price;
}

void discard(Citizen* owner)
{
	free(owner->car); // destroy object
	owner->car = NULL; // reset to NUll pointer
}

void sell_chev(Citizen* seller, Citizen* buyer)
{
	Car* car = seller->car;

	car->price *= 0.8;
	buyer->deposit -= car->price;
	seller->deposit += car->price; // transaction

	buyer->car = car;
	seller->car = NULL; // delivery
}

int main()
{
	Citizen John = { "John", 100, NULL };
	buy_chev(&John);

	Citizen Chris = { "Chris", 1000, NULL };
	sell_chev(&John, &Chris);

	discard(&Chris);

	return 0;
}
