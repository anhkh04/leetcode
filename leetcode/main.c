#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

typedef struct
{
	char bit0 : 1;
	char bit1 : 1;
	char bit2 : 1;
	char bit3 : 1;
	char bit4 : 1;
	char bit5 : 1;
	char bit6 : 1;
	char bit7 : 1;
} byte;

typedef union
{
	uint32_t read;
	byte bytes[4];
} uint_t;

uint32_t reverseBits(uint32_t n) {

	uint_t x = { 0 };
	x.read = n;

	for (int i = 0, j = 3; i < 2; i++, j--)
	{
		char tmp = x.bytes[i].bit0;
		x.bytes[i].bit0 = x.bytes[j].bit7;
		x.bytes[j].bit7 = tmp;

		tmp = x.bytes[i].bit1;
		x.bytes[i].bit1 = x.bytes[j].bit6;
		x.bytes[j].bit6 = tmp;

		tmp = x.bytes[i].bit2;
		x.bytes[i].bit2 = x.bytes[j].bit5;
		x.bytes[j].bit5 = tmp;

		tmp = x.bytes[i].bit3;
		x.bytes[i].bit3 = x.bytes[j].bit4;
		x.bytes[j].bit4 = tmp;

		tmp = x.bytes[i].bit4;
		x.bytes[i].bit4 = x.bytes[j].bit3;
		x.bytes[j].bit3 = tmp;

		tmp = x.bytes[i].bit5;
		x.bytes[i].bit5 = x.bytes[j].bit2;
		x.bytes[j].bit2 = tmp;

		tmp = x.bytes[i].bit6;
		x.bytes[i].bit6 = x.bytes[j].bit1;
		x.bytes[j].bit1 = tmp;

		tmp = x.bytes[i].bit7;
		x.bytes[i].bit7 = x.bytes[j].bit0;
		x.bytes[j].bit0 = tmp;
	}

	return x.read;
}

int main()
{

	return 0;
}