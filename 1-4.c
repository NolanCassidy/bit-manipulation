#include<stdio.h>
unsigned int even(unsigned int x){
	unsigned int mask = 0x00005555;
	unsigned int merge = x & mask;
	unsigned int inverted = !merge;
	return !inverted;
}

int main(){
	printf("%d\n", even(0x0));
	printf("%d\n",even(0x1));
	printf("%d\n",even(0x2));
	printf("%d\n",even(0x3));
	printf("%d\n",even(0xFFFFFFFF));
	printf("%d\n",even(0xAAAAAAAA));
}
