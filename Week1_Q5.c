#include<stdio.h> 
int main(){
       float rad,dia,circ,area;
       printf("enter the radius:");
       scanf("%0.2f",&rad);
       dia=2*rad;circ=2*3.1416*rad;area=3.1416*rad*rad;
       printf("Diameter of the circle:%0.2f\n",dia);
       printf("Area of the circle:%0.2f\n",area);
       printf("Circumference of the circle:%0.2f\n",circ);
         
return 0;
}
