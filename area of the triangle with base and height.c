/*The code calculates the area of the triangle with base and height */

#include<stdio.h>

int main(){

float height;
float base_length;
float area;

printf("Please enter the length of the base of the triangle:");
scanf("%f",&base_length);

printf("Please enter the height of the triangle:");
scanf("%f",&height);

area= (height*base_length)/2;

printf("The area of the triangle is %.3f",area);

return 0;

}
