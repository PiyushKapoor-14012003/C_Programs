//Menu Driven Program
/*  !!!!****MENU****!!!!
	1. Calculator 
	2. Check Prime 
	3. Find Factorial 
	4. Temperature Conversion 
	5. Interest Calculation 
	6. Final salary claculator 
	7. Roots of Quadratic equation 
	8. Test Leap Year 
	9. Test Palindrome */
#include<stdio.h>
#include<math.h>
int temp_convert();
int interest();
int salary_calculator();
int leap_year();
int roots();
int palindrome();
int calculator();
int check_prime();
int factorial();
int temp_convert()
{
	printf("Enter temperature in farenheit to be converted to celsius: ");
	float f,c;
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("Temperature in celsius is %.2f ",c);
    return 0;
}
int interest()
{
	int p,t;
    float r,si,ci;
    printf("Enter Principal, Rate, Time to find Simple and cOmpound Interest: ");
    scanf("%d %f %d",&p,&r,&t);
    si=(p*r*t)/100.0;
    ci=(p*pow((1+(r/100.0)),t))-p;
    printf("Simple interest =%.2f Compound Interest =%.2f ",si,ci);
    return 0;
}
int salary_calculator()
{
	float da,hra,gs,s;
	printf("Enter Basic pay to calculate gross pay: ");
    scanf("%f",&s);
    da=(s*20)/100;
    hra=(s*25)/100;
    gs=s+da+hra;
    printf("Gross Salary = %.2f",gs);
    return 0;
}
int leap_year()
{
	int year;
	printf("Enter year to be tested for leap year: ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
            printf("YES");
        else
            printf("NO");
    }
    else if(year%4==0)
        printf("YES Leap Year ");
    else
        printf("NOT Leap Year ");
    
    return 0;
}
int roots()
{
	printf("Enter a, b, c of Quadratic Equation to find their roots : ");
	int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("REAL AND DISTINCT\n");
        float r1=((-b)+sqrt(d))/(2*a);
        float r2=((-b)-sqrt(d))/(2*a);
        printf("%.2f %.2f",r1,r2);
    }
    else if(d==0)
    {
        printf("REAL AND EQUAL\n");
        float r=(-b)/(2*a);
        printf("%.2f %.2f",r,r);
    }
    else
    {
        printf("IMAGINARY ROOTS\n");
        float real=(-b)/(2*a);
        float imaginary=(sqrt(-d)/(2*a));
        printf("%.2f+%.2fi ",real,imaginary);
        printf("%.2f-%.2fi ",real,imaginary);
    }
    return 0;
}
int palindrome()
{
	int num;
	printf("Enter number to check Palindrome ");
    scanf("%d",&num);
    int rev=0,temp=num;
    while(temp!=0)
    {
        int r=temp%10;
        rev=rev*10+r;
        temp=(int)ceil(temp/10);
    }
    if(rev==num)
        printf("YES Palindrome ");
    else
        printf("NOT Palindrome");
    return 0;
}
int calculator()
{
	int num1,num2,result=0;
    char op;
  printf("WELCOME TO BASIC CALCULATOR\n");
    printf("Enter numbers ");
    scanf("%d %d",&num1,&num2);
    printf("Enter opeartor1");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            result=num1+num2;
            printf("%d ",result);
            break;
        case '-':
            result=num1-num2;
            printf("%d ",result);
            break;
        case '/':
            result=num1/num2;
            printf("%d ",result);
            break;
        case '*':
            result=num1*num2;
            printf("%d ",result);
            break;
        default:
            printf("Invalid Choice");
        
    }
    return 0;
}
int check_prime()
{
	int N,i,c=1;
	printf("Enter number to be checked Prime");
    scanf("%d",&N);
    for(i=2;i<N;i++)
    {
        if(N%i==0){
            c=0;
            break;
        }    
    }
    if (N<=1)
       c=0;
    if(c==1)
        printf("YES Prime");
    else
        printf("NOT Prime"); 
    return 0;
}
int factorial()
{
	int n,fact=1;
	printf("Enter any number to find its factorial: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	fact*=i;
	printf("Factorial of %d is %d ",n,fact);
	return 0;
}
int main()
{
	printf("!!!!****MENU****!!!!\n");
	printf("1. Calculator \n");
	printf("2. Check Prime \n");
	printf("3. Find Factorial \n");
	printf("4. Temperature Conversion \n");
	printf("5. Interest Calculation \n");
	printf("6. Final salary claculator \n");
	printf("7. Roots of Quadratic equation \n");
	printf("8. Test Leap Year \n");
	printf("9. Test Palindrome \n");
  printf("Enter your choice: ");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			calculator();
			break;
		case 2:
			check_prime();
			break;
		case 3:
			factorial();
			break;
		case 4:
			temp_convert();
			break;
		case 5:
			interest();
			break;
		case 6:
			salary_calculator();
			break;
		case 7:
			roots();
			break;
		case 8:
			leap_year();
			break;
		case 9:
			palindrome();
			break;
		default:
			printf("Invalid Input");
	}
	return 0;
}