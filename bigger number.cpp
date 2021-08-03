/* Mazhar Hussain     Registration No: 20MDELE098
20Mdele098@uetmardan.edu.pk */
#include<stdio.h>
int main()
{
	float A,B,C;//declaring variables
	printf("enter the 1st number\n");//asking to enter first number
	scanf("%f",&A);//saving value in first variable
	
	printf("enter the 2nd number\n");//asking to enter second number
	scanf("%f",&B);//saving value in second variable
	
	printf("enter the 3rd number\n");//asking to enter third number
	scanf("%f",&C);//saving value in third variable
	
	if ((A>B) &&  (A>C))
{
	printf("A is largest number\n");}	
	else if ((B>A) && (B>C))
	{
	printf("B is largest number\n");}
	else  
	printf("C is largest number\n");	
    return 0;
}
