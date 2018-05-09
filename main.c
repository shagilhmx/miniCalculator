#include"project.h"
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int choice,choice1,choice2,count=0,r,c,m1[100][100],i,j,n1,F_Ch=0;;
	float x,y,z;
	double res=0;
	double low=0,up=0,sum=0;
	int k,n;
    float x0,xn,h,x1[20],so,se,ans,x2[20];
    Polynomial poly;
    char str[1];
    printf("\t\t\tMini Scientific Calculator\n");
	printf("\t\t\tProgramed By SHAGIL\n\t\t\t\t     SOUMYA\n\t\t\t\t     SHUBHANKAR\n");
	printf("\t\t\t\tversion 0.1.1\n");
	while(1)
	{
	count++;
	if(count>1)
	{
		printf("\n\nif u want to reset the calculator then\n");
		printf("\nenter R to reset");
		printf("\notherwise enter any other character to continue\n");
		scanf("%s",str);
		if(strcmp(str,"R")==0)
	{
		res=0;
		count=1;
	}
	}
	printf("\n\n\npress 0 to exit\n");
	printf("1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Square root\n6:cube root\n7:Y root of X\n8:square\n9:cube\n10:X power Y\n11:10 power X\n12:X!\n13:nPr\n14:nCr\n15:log10(x)\n16:sin(x)\n17:cos(X)\n18:tan(x)\n19:log(x) base Y\n20:base-N\n21:matrix operations\n22:Definite Integration\n23:differentiation\n24:quadratic solution\n");
	scanf("%d",&choice);
	if(choice==0)
	break;
	if(count==1&& choice<20)
		{
		printf("enter a number\n");
		scanf("%f",&x);
		}
		else
		x=res;
	switch(choice)
	{
		case 1:
			res=+add(x);
			printf("result=%f",res);
			break;
		case 2:
			res=-subs(x);
			printf("result=%f",res);
			break;
		case 3:
			res=mul(x);
			printf("result=%f",res);
			break;
		case 4:
			res=Div(x);
			printf("result=%f",res);
			break;
		case 5:
			if(x<0)
			printf("\nsquare root=%fi",sqroot(x));
			else
			printf("\nsquare root=%f",sqroot(x));
			res=sqroot(x);
			break;
		case 6:
			printf("\ncube root=%f",curoot(x));
			res=curoot(x);
			break;
		case 7:
			res=root(x);
			printf("\nX root Y=%f",res);
			break;
		case 8:
			printf("\nsquare=%f",square(x));
			res=square(x);
			break;
		case 9:
			printf("\ncube=%f",cube(x));
			res=cube(x);
			break;
		case 10:
			res=power(x);
			printf("\nX power Y=%f",res);
			break;
		case 11:
			res=powten(x);
			if(res>3.40282*pow(10,38))
			printf("OUT OF RANGE VALUE OF RESULT");
			else
			printf("\n 10 to power X=%f",res);
			break;
		case 12:
			printf("\nfactorial=%f",fact(x));
			res=fact(x);
			break;
		case 13:
			printf("enter the r\n");
			scanf("%f",&y);
			printf("\nnPr=%f",(nPr(x)/nPr(x-y)));
			res=(nPr(x)/nPr(x-y));
			break;
		case 14:
			printf("enter the r\n");
			scanf("%f",&y);
			printf("\nnCr=%f",(nCr(x)/(nCr(y)*nCr(x-y))));
			res=(nCr(x)/(nCr(y)*nCr(x-y)));
			break;
		case 15:
			res=Log(x);
			printf("\n Log base 10=%f",res);
			break;
		case 16:
			res=resin(x);
			printf("\nsin(x)=%f",res);
			break;
		case 17:
			res=recos(x);
			printf("\ncos(x)=%f",res);
			break;
		case 18:
			res=retan(x);
			printf("\ntan(x)=%f",res);
			break;
		case 19:
			res=Logb(x);
			printf("\nlog(x) base y=%f",res);
			break;
		case 20:
			printf("enter a number\n");
			scanf("%d",&n1);
			printf("enter your choice\n1:for decimal to binary\n2:for decimal to hexadecimal\n3:for decimal to octal\n");
			scanf("%d",&choice1);
			switch(choice1)
			{
				case 1:
					Bin(n1);
					break;
				case 2:
					Hex(n1);
					break;
				case 3:
					Oct(n1);
					break;
			}
			break;
			case 21:
				printf("\n\n\t\t\t\tMatrices\n\n");
				printf("enter row and colunm of matrix\n");
				scanf("%d\n%d",&r,&c);
				printf("enter elements to the matrix\n");
				m1[r][c];
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						scanf("%d",&m1[i][j]);
					}
				}
				for(i=0;i<r;i++)
				{
					for(j=0;j<c;j++)
					{
						printf("%d\t",m1[i][j]);
					}
					printf("\n");
				}
				printf("choose the operation to do\n1:for addition\n2:for subtraction\n3:for multiplication\n");
				scanf("%d",&choice2);
				switch(choice2)
				{
				case 1:
					compute(m1,r,c);
					break;
				case 2:
					compute1(m1,r,c);
					break;
				case 3:
					compute2(m1,r,c);
					break;
				}
				break;
			case 22:
				Start();
				while(scanf("%d",&F_Ch))
				{
					if(F_Ch>0&&F_Ch<4)
					{
						printf("Selece Function %d;\n\n",F_Ch);
			
						printf("Input the two Real Number a(low) and b(up) to \ndefine the area that you want to integral: low,up.\n");
						printf("for example:0\n2\n\n");
			
						scanf("%lf\n%lf",&low,&up);
						printf("Input a number 'N':");
						unsigned long int N;
						scanf("%ld",&N);
						sum=Integrate(low,up,N,F_Ch);
					}
				else
				{
					printf("error!\n");
				}
				}
				break;
			case 23:

    		init_poly(&poly);
    		printf("Given polynomial is\n");
    		print_poly(&poly);

    		r_print_differential_poly(&poly);

   			drop_poly(&poly);
				break;
			case 24:
				quad();
				break;
		default:
			printf("\nInvalid choice");						
	}
}
printf("result=%f",res);
return 0;
}
