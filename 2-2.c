#include<stdio.h>
unsigned int extract(unsigned int x, int i){
unsigned int c = x<<((3-i)*8);//shifts left until needed bit is in MSB
c = (signed)c>>24;//arithmatic MSB right to LSB
return c;
}

int main(){
printf("0x%08X\n",extract(0x12345678,0));
printf("0x%08X\n",extract(0xABCDEF00,2));
}
