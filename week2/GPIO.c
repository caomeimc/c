#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct n1
{
	char GPIO_Speed;
}m;
enum
{
	GPIO_Speed_2MHz,
	GPIO_Speed_10MHz,
	GPIO_Speed_50MHz
};
void GPIO_StructureInit(m* ab);
int main()
{
	m a;
	 GPIO_StructureInit(&a);
	return 0;
}
void GPIO_StructureInit(m*ab)
{
	ab->GPIO_Speed = GPIO_Speed_2MHz;
}