//Write a program that reads the radius of a circle and calculates the area and circumference
//1)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float a,c,pi=3.14;
    printf ("Enter the radius of Circle : ");
    scanf ( "%d",&r);
    a=pi*r*r;
	printf ("Area of Circle : %f \n", a);
    c= 2*pi*r;
    printf ("Circumference of Circle : %f \n", c);
    return 0;
}
/********************************************************************************************/
/*Write a C program to take a number and a character from user if the number is even print the same character,
 if the number is odd print the other case of the character (a->A, B->b).*/
//2)
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch,flagChar=1;
    while(1)
    {
        fflush(stdin);
        printf("Enter a char: ");
        scanf("%c",&ch);

        if(ch%2==0)
        {
            printf("the %c is even \n",ch);
        }
        else
        {
            printf("the %c is odd ",ch);
            printf("convert to: %c\n",ch+('a'-'A'));
        }
        printf("%d ",ch);
    }
    return 0;
}
/***********************************************************************************************/
//Write a program to reverse a number in decimal representation (1205->5021).5
//3)
#include<stdio.h>
#include<limits.h>

int main()
{
    int n,r=0,m;
    printf("Enter a number to reverse\n");
    scanf("%d",&n);
    while (n!=0)
    {
        r=r*10;
        m=n%10;
        r=r+m;
        n=n/10;
    }
    printf("Reverse of the number = %d\n", r);
    return 0;
}
/****************************************************************************************************/
//Write a program to count the number of 1’s in an unsigned 32-bit integer.
//4)
#include<stdio.h>
#include<limits.h>
int main()
{
    int i,c=0;
    unsigned int  x;
    while(1)
    {
        c=0;
		scanf("%d",&x);
        for(i=0;i<32;i++)
        {
            if((x>>i)&1)
            {
                printf("1");
            }
			else
			{
			   printf("0");
			}
        }
        printf("\n");
    }
    return 0;
}
/***********************************************************************************************************/
//write a program to print the binary representation of a number, try not to print zeros on the left (5->print 101).
//5)
#include<stdio.h>
#include<limits.h>
int main()
{
    int i,c,m;
    unsigned int  x;
    while(1)
    {
        scanf("%d",&x);
        for(i=0; i<32 && (x>>i)!=0 ; i++)
        {
            if((x>>i)&1 )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

/******************************************************************************************************/
//Write c code to reverse bits in an 8-bit number (149->10010101 return 169->10101001),
//(5->00000101 return 160->10100000).
//6)


#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n1 , n2=1 ,i;
	scanf("%d",&n1);
	for (i=0;i<8;i++)
    {
        if(n1>>i&1)
        {
            n2=n2|(1<<(7-i));
        }
    }
    printf("%d",n2);
	return 0;
}


/*********************************************************************************************/
//Write c code to sum numbers from 1 to 100 (without loop).
//7)

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n1 , n2=1 ,i;
	scanf("%d",&n1);
	n2 = n1*(n1+1)/2;
    printf("%d",n2);
	return 0;
}

/********************************************************************************************/
/*Write a full C program to take 4 choose from user:
1-Set bit.
2-Clear bit
3-Toggle bit.
4-Read bit.
then take number, and bit number.
print the number after set, clear, or toggle if 1,2 or 3 is selected.
print the bit value if 4 is selected.*/
//8)

#include <stdlib.h>
#include <stdio.h>
int setBit(int x, int bit)
{
	x=x|(1<<bit);
	return x;
}

int clearBit(int x, int bit)
{
    x=x&(~(1<<bit));
    return x;
}

int toggleBit(int x, int bit)
{
	x=x^(1<<bit);
	return x;
}
int readBit(int x,int bit)
{
    x=(x>>bit)&1;
    return x;
}
int main()
{
	int x = 5, bit = 1;
	printf("%d with %d-th bit Set: %d\n",x,bit, setBit(x, bit));
	printf("%d with %d-th bit Cleared: %d\n",x,bit, clearBit(x, bit));
	printf("%d with %d-th bit Toggled: %d\n",x,bit, toggleBit(x, bit));
    printf("%d with %d-th bit read: %d\n",x,bit, readBit(x, bit));

	return 0;
}


/********************************************************************************************/
//Write c function to take number of lines and draw pattern with '*' like:
//9)
/*
*
**
***
****
*****
*/
#include <stdio.h>
int main() {
   int i, n, rows;
   for (i = 1; i <= 5; ++i)
        {
      for (n = 1; n <= i; ++n)
      {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
////////////////////////////////////////////////
/*
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//////////////////////////////////////////////
/*
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
*/
int main()
{
    int n,i,m;
    //m=(2*5)-1;
    m=9;
    for(i=1; i<=m; i++)
    {
        for(n=1; n<=m; n++)
        {
            if(i==n || n==(m-i+1))
            {
                printf("*");
             }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
//////////////////////////////////////////////////
/*
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
int main()
{
    int i,n,m;
    int c=5;
   for(int i=1;i<=5;i++)
   {
       for(n=1;n<=c-1;n++)
       {
           printf(" ");
       }
       for(m=1;m<=2*i-1;m++)
       {
         printf("*");
       }
       c--;

      printf("\n");
    }
    return 0;
}

/*********************************************************************************************************/
//Write c function to count the max number of zeros between two ones in the binary representation of a number 
//(296384-> {1001000010111000000} return 4).
//10)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned num ,i,counter,max,flag;
    while(1)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        counter = 0 ;
        flag = 0 ;
        max = 0 ;
        for (i=32 ; i > 0 ; i --)
        {
            if ((num >> i )& 1 == 1  )
            {
                //printf("1");
                flag ++ ;
            }
            else if(flag == 1 )
            {
               // printf("0");
                counter ++ ;
            }
            if(flag == 2)
            {
                if(max < counter)
                {
                    max = counter ;
                }
                flag = 1 ;
                counter = 0 ;
            }
        }
        printf("Max Number  of 0's Between 2 One : %d\n",max);
    }
    return 0;
}






/*********************************************************************************************************/
//Given two integers: L and R,Find the maximal value of A xor B where A and B satisfy the conditio
// L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
//Input format: the input contains two lines first line contains L and next line contains R.
// Output format: The maximum value of Axor B.
//11)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int l, r, i, j,xor,max,counter;
        printf("Left  Number : ");
        scanf("%d",&l);
        printf("Right Number : ");
        scanf("%d",&r);
        max =0, xor = 0 ,counter=0 ;
        for(i= l ; i <= r ; i ++ )
        {
            for (j = (l + counter) ; j <= r ; j++)
            {
                xor = i ^ j ;
                if (xor > max)
                {
                    max = xor ;
                }

                printf("%d ^ %d = %d\n",i,j,xor);
            }
            counter ++ ;
        }
        printf("Max XOR between them  = %d\n",max);
    }
    return 0;
}









