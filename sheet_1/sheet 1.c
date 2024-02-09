//1)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    int n1,n2,sum=0 ;
    scanf ( "%d%d",&n1,&n2);

    if ( n1>n2 )
    {
        for ( i=n1; i>n2; i=i-1 )
        {
           // printf("%d  \n  ",i);
            sum =sum+i;
        }
    }
    else
    {
        for ( i=n1; i<n2; i=i+1 )
        {
         //   printf("%d  \n  ",i);
            sum =sum+i;
        }
    }
    printf(" the sum is = %d\n",sum);
    return 0;
}
///////////////////////////////////////////////////////////////////or
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    int n1,n2,sum=0,min,max ;
    scanf ( "%d%d",&n1,&n2);

    if ( n1>n2 )
    {
        max=n1;
        min=n2;
    }
    else
    {
        max=n2;
        min=n1;
    }
    for(i=max-1; i>min; i=i-1)
    {
        printf("%d   ",i);
        sum =sum+i;
    }
    printf(" the sum is = %d\n",sum);
    return 0;
}

/**************************************************************************************/
//2)
#include<stdio.h>
#include<limits.h>
int main()
{
    int min=10000000000 ,max=0,i,n,num;

    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);

    for(i=0; i<n; i=i+1)
    {
        printf("number:- ");
        scanf("%d",&num);
        if(num>max)
        {
            max = num;
        }
        if(num<min)
        {
            min = num;
        }
    }

    printf("Smallest number = %d\nLargest number = %d",min,max);
	
return 0;	
}

/****************************************************************************************/
//3)

#include<stdio.h>
#include<limits.h>
int main()
{

    for ( ; ; )
    {
        int sum=0,i,n,num;

        printf("How many numbers do you want to enter: ");
        scanf("%d",&n);

        for(i=0; i<n; i=i+1)
        {
            printf("Number-%d: ",i+1);
            scanf("%d",&num);
            sum=sum+num;
        }

        printf("the sum is %d",sum);
    }
	
return 0;	
}

/*********************************************************************************************/
//4)

#include<stdio.h>
#include<limits.h>
int main()
{
    int sum=0,n1,n2;
    for ( ; ; )
    {

        printf("enter two numbers: ");
        scanf("%d%d",&n1,&n2);

        for(; n2!=0&&n1!=0 ; n2=n2-1)
        {

            sum=sum+n1;
        }

        printf("the multiply is %d\n",sum);
    }
	
return 0;	
}


/*************************************************************************************************/
//5)

#include<stdio.h>
#include<limits.h>
int main()
{
    for ( ; ; )
    {
        int n1,n2,rem;
        printf("Enter number 1 :");
        scanf("%d",&n1);
        printf("Enter number 2 :");
        scanf("%d",&n2);

        rem=n1-(n1/n2)*n2;

        printf("Remainder is = %d\n",rem);
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////OR

#include <stdio.h>

int main()
{
    int n1, n2, rem;
    printf("Enter the number : ");
    scanf("%d", &n1);
    printf("Enter the numper : ");
    scanf("%d", &n2);
    while (n1 >= n2)
    {
        n1 = n1 - n2;
    }
    rem = n1;
    printf("The remainder is %d ", rem);
    return 0;
}



/************************************************************************************************/
//6)

#include<stdio.h>
#include<limits.h>
int main()
{
    for ( ; ; )
    {
        int n1,n2,num=1;
        printf("Enter number :");
        scanf("%d",&n1);
        printf("Enter power of number :");
        scanf("%d",&n2);
		
        for ( ;n2!=0;n2=n2-1 )
        {
            num=num*n1;
        }
        printf("value is = %d\n",num);

    }
    return 0;
}
 
 
/************************************************************************************************/
//7)

#include<stdio.h>
#include<limits.h>
int main()
{
    for ( ; ; )
    {
        int n, i;
        unsigned long long fact = 1;
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Error! Factorial of a negative number doesn't exist.");
        }
        else
        {
            for (i = 1; i <= n; ++i)
            {
                fact *= i;
            }
            printf("Factorial of %d = %llu \n", n, fact);
        }
    }
    return 0;
}


/*******************************************************************************************************/
//8)
#include<stdio.h>
#include<limits.h>
int main()
{
    int num , n1 , n2 , i , flag = 0 ;
    while(1)
    {
        printf( "enter  number :");
        scanf( "%d",&num );
        if ( num==0 || num==1 )
        {
            printf( "not prime \n" );
        }
        for( i=2 ; i<num ; i++ )
        {
            if ( num%i==0 )
            {
                printf( "not prime " );
                break ;
            }
        }
        if( flag == 0)
        {
        printf( " prime \n" );
        }
    }
    return 0;
}
////////////////////////////////////////////////////////////////or

#include<stdio.h>
#include<limits.h>
int main()
{
    int n, n1, n2, i, flag = 0 ;
    while(1)
    {
        printf( "enter two number :");
        scanf( "%d%d",&n1,&n2 );
        for( n=n1 ; n<=n2 ; n++ )
        {
            flag =0;
            if ( n==0 || n==1 )
            {
                flag = 1;
            }
            for ( i=2 ; i<n&&flag==0 ; i++ )
            {
                if ( n%i==0 )
                {
                    flag = 1;
                }
            }
            if( flag == 0)
            {
                printf( " %d \n ",n );
            }
        }
    }
    return 0;
}


/*************************************************************************************************************/

//9)
#include <stdio.h>
#include<limits.h>

int main()
{
    unsigned int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 0; i <= num; i=i+1 )
    {
        if(num == i*i)
        {
            printf("%d is a perfect square", num);
            return 0;
        }
    }
    printf("%d is not a perfect square\n", num);
    return 0;
}

/*******************************************************************************************************************/
//10)

#include <stdio.h>
#include<limits.h>

int main()
{
    unsigned int  num;
    int x=2;
    for (; x>2; x=x*2)
    {}
    printf("Enter a number: ");
    scanf("%d", &num);

    if( num == x)
    {
        printf("this number is a base of 2 :: %d\n", num);
    }
    else
    {
        printf("this number is not a base of 2  ::%d\n", num);
    }

    return 0;
}


/******************************************************************************************************************/
//11)

#include <stdio.h>
#include<limits.h>

int main()
{
    int m,i,n, sum=0 ;
    for(;;)
    {
        printf( "enter the numpers :" );
        scanf( "%d",&n );

        for (i=n; i>0; i=i/10  )
        {
            m = i % 10;
            sum = sum + m;
        }
        printf( "the sum is = %d\n",sum );
    }


    return 0;
}



/*****************************************************************************************************************/
//12)

#include<stdio.h>
#include<limits.h>
int main()
{
    int num,sum=0,c=0;
    while(c<2)
    {
       scanf("%d",&num);
       if(num%2==0)
       {
          sum+=num;
          c=0;
       }
       else
       {
            c++;
       }

       printf("sum=%d\n",sum);
    }
    
    printf("bye");
    return 0;
}

//////////////////////////////////////////////////or

#include<stdio.h>
#include<limits.h>
int main()
{
    int i, num, Sum = 0;

    printf(" Enter number :");
    scanf("%d", &num);
	
    if ( num % 2 == 0 )
    {
        printf("Even Numbers between 0 and %d are : ", num);
        for(i = 2; i <= num; i=i+2)
        {
            Sum = Sum + i;
            printf("%d  ", i);
        }
        printf("The Sum of All Even Numbers upto %d  = %d", num, Sum);
    }
    else
    {
        printf(" the number is odd ( bye ):");
    }
    return 0;
}


/******************************************************************************************************************/
//13)

#include <stdio.h>
#include<limits.h>

int main()
{
    int m,i,n,x,sum=0 ;
        printf( "enter the numpers :" );
        scanf( "%d",&n );

        for (i=n; i>0; i=i/10  )
        {
            m = i % 10;
            if(m==1||m==2||m==3||m==5||m==7)
            {
                x=0;
            }
            else if(m==0||m==4||m==6||m==9 )
            {
                x=1;
            }
            else
            {
                x=2;
            }
            sum=sum+x;
        }
        printf( "the sum is = %d\n",sum );
    return 0;
}