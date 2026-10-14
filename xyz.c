#include<stdio.h>
#include<math.h>
void main()
{
float x1,y1,x2,y2,distance;
printf("enter x1,y1 are (coordinates of the first point):");
scanf("%f %f\n",&x1,&y1);
printf("enter x2,y2 are (coordinates of the second point):");
scanf("%f %f\n",&x2,&y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("the straight line distance between the two lines:%2f\n",distance);
}
