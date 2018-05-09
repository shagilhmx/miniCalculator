#include"project.h"
#include<math.h>
#include"calc.h"
#include<stdio.h>
#define PI 3.14
#include<string.h>
#include<stdlib.h>
float add(float x)
{
	float y;
	printf("enter a number\n");
	scanf("%f",&y);
	return (x+y);
}
float subs(float x)
{
	float y;
	printf("enter a number\n");
	scanf("%f",&y);
	return (x-y);
}
float mul(float x)
{
	float y;
	printf("enter a number\n");
	scanf("%f",&y);
	return (x*y);
}
float Div(float x)
{
	float y;
	printf("enter a number\n");
	scanf("%f",&y);
	return (x/y);
}
float sqroot(float z)
{
	if(z<0)
	return (sqrt(fabs(z)));
	else
	return(Sqrt(z));
}
float curoot(float z)
{
	
	return (cbrt(z));
}
float root(float x)
{
	float y;
	printf("enter the value of y\n");
	scanf("%f",&y);
	return (pow(x,1/y));
}
float square(float z)
{
	return (Pow1(z,2));
}
float cube(float z)
{
	return(Pow2(z,3));
}
float power(float x)
{
	float y;
	printf("enter the value of y\n");
	scanf("%f",&y);
	return(Pow3(x,y));
}
float powten(float z)
{
	return(Pow4(10,z));
}
float fact(float z)
{
	if(z==1||z==0)
	return 1;
	else
	return (z*fact(z-1));
}
float  nPr(float x)
{
	if(x==1||x==0)
	return 1;
	else
	return (x*nPr(x-1));
}
float nCr(float x)
{
	if(x==1||x==0)
	return 1;
	else
	return (x*nCr(x-1));
}
float Log(int z)
{
	return (log(z)/log(10));
}
float resin(float z)
{
	return (Sin(z*(PI/180)));
}
float recos(float z)
{
	return (Cos(z*(PI/180)));
}
float retan(float z)
{
	return (Sin(z*(PI/180))/Cos(z*(PI/180)));
}
float Logb(float x)
{
	float y;
	printf("\nenter the value of y\n");
	scanf("%f",&y);
	return (log(x)/log(y));
}
void Bin(int x)
{
	int i=0,m1[100],j=0;
	while(x!=0)
	{
		if(x%2==0)
		m1[i]=0;
		else
		m1[i]=1;
		x=x/2;
		i++;
	}
	printf("result=");
	for(j=i;j>=0;j--)
	{
		printf("%d",m1[j]);
	}
}
void Hex(int x)
{
	int i=0,res,j;
	char str[100];
	while(x!=0)
	{
		if(x%16>=10 && x%16<=15)
		{
			if(x%16==10)
			str[i]='A';
			else if(x%16==11)
			str[i]='B';
			else if(x%16==12)
			str[i]='C';
			else if(x%16==13)
			str[i]='D';
			else if(x%16==14)
			str[i]='E';
			else
			str[i]='F';
			x=x/16;
		}
		else
		str[i]=48+(x%16);
		x=x/16;
		i++;
	}
	str[i]=48;
	for(j=i;j>=0;j--)
	{
		printf("%c",str[j]);
	}
}
void Oct(int x)
{
	int i=0,m1[100],j=0;
	while(x!=0)
	{
		m1[i]=x%8;
		x=x/8;
		i++;
	}
	printf("result=");
	for(j=i;j>=0;j--)
	printf("%d",m1[j]);
}
void compute(int m1[100][100],int r,int c)
{
	int m2[100][100],i,j,r1,c1,res[100][100];
	printf("enter row and column\n");
	scanf("%d\n%d",&r1,&c1);
	printf("enter another matrix\nenter elements to another matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",m2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("Result=");
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
}
void compute1(int m1[100][100],int r,int c)
{
	int m2[100][100],i,j,r1,c1,res[100][100];
	printf("enter row and column of another matrix\n");
	scanf("%d\n%d",&r1,&c1);
	printf("enter another matrix\nenter elements to another matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=m1[i][j]-m2[i][j];
		}
	}
	printf("Result=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
}
void compute2(int m1[100][100],int r,int c)
{
	int m2[100][100],i,j,r1,c1,res[100][100],k;
	printf("enter row and column of another matrix\n");
	scanf("%d\n%d",&r1,&c1);
	printf("enter another matrix\nenter elements to another matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	if(r==c1)
	{
	for(i-0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++)
			{
			res[i][j]=res[i][j]+m1[i][k]*m2[k][j];
			}
		}
	}
	printf("result=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	}
	else
	printf("Invalid choice");
}
void quad()
{
	float a,b,c,x1,x2,ip,rp,disc;
		printf("ENTER THREE COEFFICIENTS\n");
		scanf("%f%f%f",&a,&b,&c);
		if(a==0||b==0||c==0)
		printf("COEFFICIENTS CANNOT BE ZERO\n");
		else
		{
			disc=(b*b)-(4*a*c);
			if(disc>0)
			{
			  printf("ROOTS ARE REAL AND DISTINCT\n");
			   x1=(-b+sqrt(disc))/(2*a);
			   x2=(-b-sqrt(disc))/(2*a);
			 printf("ROOTS ARE:\n x1=%f\nx2=%f",x1,x2);
			}
		  else if(disc==0)
		  {
			printf("ROOTS ARE REAL AND EQUAL\n");
			x1=x2=-b/(2*a);
			printf("ROOTS ARE:\n x1=%f\nx2=%f",x1,x2);
		  }
		   else
		   {
			printf("ROOTS ARE IMAGINARY\n");
			rp=-b/(2*a);
			ip=sqrt(-disc)/(2*a);
			printf("ROOTS ARE:\n x1=%f + i%f",rp,ip);
			printf("\n x2=%f - i%f",rp,ip);
		    }
	       }
}
void Start()
{	
	printf("		Three Function Integration\n");
	printf("				  \n");
	printf("			   \n");
	printf("Funcion 1:	f(x)=x;\n");
	printf("Funcion 2:	f(x)=x*x;\n");
	printf("Funcion 3:	f(x)=exp(x);\n\n");
	printf("choose a funcion to integrate:\n");
}
double Integrate(double low,double up, unsigned long int N,int F_Ch)
{
	double temp=0;
	double sum=0;
	double temp_1=0;
	if( ((low>-100)&&(low<100)) && ( (up>-100)&&(up<100)) && (low != up) )
	{
	/*First,low and up is between -100 and 100;Second,low != up;Third,up>low*/
		printf("low=%lf,up=%lf.\n",low,up);
		
		if( (N>0)&&(N<429467295) )
		{
			printf("N=%ld\n",N);
				temp=(up-low)/N;
			printf("temp=(up-low)/N=%lf\n",temp);
			unsigned long int i;//counter i;
			switch(F_Ch)
			{
				case 1:
					for(i=1;i<=N;i++)
					{
						temp_1=low+temp*i;
						sum = sum + temp_1;//This statement is very important!
					}sum *= temp;					 
					break;
					
				case 2:
					for(i=1;i<=N;i++)
					{
						temp_1=low+temp*i;
						sum = sum + pow(temp_1,2);//This statement is very important!
					}sum *= temp;
					break;
					
				case 3:
					for(i=1;i<=N;i++)
					{
						temp_1=low+temp*i;
						sum = sum + exp(temp_1);//This statement is very important!
					}sum *= temp;
					break;
			}
			if(F_Ch==1)
			{
				for(i=1;i<=N;i++)
				{
					temp_1=low+temp*i;
					sum = sum + temp_1;//This statement is very important!
				}
				sum *= temp;
			}
			else if(F_Ch==2)
			{
				for(i=1;i<=N;i++)
				{
					temp_1=low+temp*i;
					sum = sum + pow(temp_1,2);//This statement is very important!
				}
				sum *= temp;
			}
			else if(F_Ch==3)
			{
				for(i=1;i<=N;i++)
				{
					temp_1=low+temp*i;
					sum = sum + exp(temp_1);//This statement is very important!
				}
				sum *= temp;
			}
			printf("Successful!The result of integral is:%lf\n\n",sum);
		}
		else if(N<0)
		{
			printf("Failed!The number you input is illegal!\n");
			printf("continue!\n");
		}
		else 
		{
			printf("Failed!The number you input is too big!\n");
			printf("continue!\n");
		}
	}
	else 
	if( low == up )
	{
		printf("Successful!sum=%lf\n",sum=0);
		printf("continue!Input the two Real Number a(low) and b(up) again: low,up.\n\n");			
	}
	else
	{
		printf("Failed!The number(s) you input is(are) too big!\n");
		printf("continue input the two Real Number a(low) and b(up) again: low,up.\n\n");
	}
	return sum;
}
void init_poly(Polynomial *p)
{
    int i;
    printf("\n\t\t\t\tDifferentiation\n\n\n");
    printf("Enter the order of the polynomial\n");
    scanf("%d", &p->order);
    p->coefficient = (int*)malloc((p->order + 1)*sizeof(int));
    for(i = p->order; i >= 0; --i){
        printf("Enter the co-efficient of x^%d:", i);
        scanf("%d", &p->coefficient[i]);
    }
}
void drop_poly(Polynomial *p)
{
    free(p->coefficient);
}
void print_poly(Polynomial *p)
{
    int i;
    for(i = p->order; i >= 0; --i){
        if(p->coefficient[i]){
            if(p->order != i){
                printf(" %c ", p->coefficient[i] < 0 ? '-' : '+');
                printf("%d", abs(p->coefficient[i]));
            } else
                printf("%d", p->coefficient[i]);
            if(i)
                printf("x^%d", i);
        }
    }
    printf("\n");
}
void r_print_differential_poly(Polynomial *p)
{
    int i=1;
    while(p->order)
	{
        differential_poly(p);
        printf("f%d = ", i++);
        print_poly(p);
    }
}
void differential_poly(Polynomial *p)
{
    int i;
    for(i = 0; i < p->order; ++i){
        p->coefficient[i] = p->coefficient[i+1] * (i+1);
    }
    p->coefficient[p->order--] = 0;
}
