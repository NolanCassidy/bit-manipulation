#include<stdio.h>
int ge(float x, float y) {
 unsigned int ux = *((unsigned int*) &x); // convert x raw bits
 unsigned int uy = *((unsigned int*) &y); // convert y raw bits
 unsigned int sx = ux >> 31; // extract sign bit of ux
 unsigned int sy = uy >> 31; // extract sign bit of uy
 ux <<= 1; // drop sign bit of ux
 uy <<= 1; // drop sign bit of uy

unsigned int gsx = !sx; // if x>=0 return 1
unsigned int gsy = !sy; // if x>=0 return 1
unsigned int gcomp = ux >= uy; // if x<0 return 1
unsigned int lcomp = ux <= uy; // if x<0 return 1

 //return 1 if x>=y
unsigned int case1 = (ux == uy); //When both equal
unsigned int case2 = (gsx && !gsy);//if x=0 or positive and y= negative return
unsigned int case3 = (gsx && gsy && gcomp);// if both x,y positive then compare
unsigned int case4 = (!gsx && !gsy && lcomp); //if both x,y negative then compare

return case1 || case2 || case3 || case4;
}


int main(){
printf("%d\n",ge(0.0f, 0.0f));
printf("%d\n",ge(-0.0f, 0.0f));
printf("%d\n",ge(-1.0f, 0.0f));
printf("%d\n",ge(0.0f, 1.0f));
printf("%d\n",ge(1.0f, 0.0f));
printf("%d\n",ge(0.0f, -1.0f));
}
