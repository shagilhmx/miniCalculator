#include<stdio.h>
#include<math.h>
#include"calc.h"
#include<stdlib.h>
float Sqrt(float z)
{
	float r1,r2,diff;
		r1=z/2;
		r2=z/r1;
		diff=r1-r2;
		while(fabs(diff)>0.0000001)
		{
			r1=(r1+r2)/2;
			r2=z/r1;
			diff=r1-r2;
		}
		return r1;
}
float Pow(float z,int x)
{
	int c=0;
	float product=1;
	while(1)
	{
		c++;
		product=product*z;
		if(c==x)
		break;
	}
	return product;
}
float Pow1(float z,int x)
{
	int c=0;
	float product=1;
	while(1)
	{
		c++;
		product=product*z;
		if(c==x)
		break;
	}
	return product;
}
float Pow2(float z,int x)
{
	int c=0;
	float product=1;
	while(1)
	{
		c++;
		product=product*z;
		if(c==x)
		break;
	}
	return product;
}
float Pow3(float z,int x)
{
	int c=0;
	float product=1;
	while(1)
	{
		c++;
		product=product*z;
		if(c==x)
		break;
	}
	return product;
}
float Pow4(float z,int x)
{
	int c=0;
	float product=1;
	while(1)
	{
		c++;
		product=product*z;
		if(c==x)
		break;
	}
	return product;
}
float Sin(float z)
{
	int i;
	float term,sum;
	term=z;
	sum=term;
		for(i=3;fabs(term)>0.0000001;i+=2)
		{
			term=-(term*z*z)/(i*(i-1));
			sum+=term;
		}
		return sum;
}
float Cos(float z)
{
	int i;
	float term,sum;
	term=sum=1;
		for(i=2;fabs(term)>0.0000001;i+=2)
		{
			term=-(term*z*z)/(i*(i-1));
			sum+=term;
		}
		return sum;
}
