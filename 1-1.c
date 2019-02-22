#include <stdio.h>
void printBytes(unsigned char *start, int len) {
	for (int i = 0; i < len; ++i){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void printInt(int x) {
	printBytes((unsigned char*) &x, sizeof(int));
}

void printFloat(float x) {
	printBytes((unsigned char*) &x, sizeof(float));
}
void printShort(short x) {
	printBytes((unsigned char*) &x, sizeof(short));
}

void printLong(long x) {
	printBytes((unsigned char*) &x, sizeof(long));
}

void printDouble(double x) {
	printBytes((unsigned char*) &x, sizeof(double));
}

main(){
//I have noticed that changing the number does not change the bytes
	printInt(999999);
//0a 00 00 00
//This is 4 bytes and is half the size of a double and because it is a 32 bit system
	printFloat(999999);
//00 00 20 41
	printShort(999999);
//0a 00
//This is 2 bytes and is half the size of an int
	printLong(999999);
//0a 00 00 00 00 00 00 00
//the long is 8 bit because it is on a 32 bit system
	printDouble(999999);
//00 00 00 00 00 00 24 40
//this is 8 bytes and is double the size of an integer

}
