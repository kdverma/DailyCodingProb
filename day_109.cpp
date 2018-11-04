#include <iostream>
int main()
{
	unsigned char A = 23;
	
	unsigned char allEvenIn8Bit = A &  0xAA;
	unsigned char allOddIn8Bit = A & 0x55;

	printf("%u\n",((allEvenIn8Bit) >>1)| ((allOddIn8Bit) << 1));
	//printf("single line = %u\n",((A&0xAA) >>1)| ((A&0x55) << 1));

}
