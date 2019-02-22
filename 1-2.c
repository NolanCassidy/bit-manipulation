#include<stdio.h>
unsigned int combine(unsigned int x, unsigned int y){
	unsigned int ry = (0x00FFFFFF & y);
	unsigned int rx = (0xFF000000 & x);
	return rx|ry;
}

int main(){
	printf("0x%08X\n", combine(0x12345678, 0xABCDEF00));
	printf("0x%08X\n", combine(0xABCDEF00,0x12345678));
}
