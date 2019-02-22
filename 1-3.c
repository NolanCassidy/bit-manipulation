#include<stdio.h>
unsigned int replace(unsigned int x, unsigned int s, unsigned int y){
	unsigned int spot = (s<<3);
	unsigned int move = (y << (spot));
	unsigned int remove = (complement & x);
	unsigned int merge =  remove|move;
	return merge;
}

int main(){
	printf("0x%08X\n", replace(0x12345678,2,0xAB));
	printf("0x%08X\n", replace(0x12345678,0,0xAB));
}
