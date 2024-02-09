//Write a C program to print all natural numbers from 1 to n. - using while loop
//1)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("Natural numbers from 1 to %d : \n", n);
    i=1;
    while( i<=n)
    {
        printf("%d  ", i);
        i++;
    }

    return 0;
}
/***************************************************************/
//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
//2)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d",&n);

    printf("Natural numbers from 1 to %d : \n", n);
    i=n;
    while( i>=0)
    {
        printf("%d  ", i);
        i--;
    }

    return 0;
}
/************************************************************/
//Write a C program to print all alphabets from a to z. - using while loop
//3)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n;
    i='a';
    while( i<='z')
    {
        printf("%c  ", i);
        i++;
    }

    return 0;
}
//////////////////////or
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n;
    printf("Enter any letter: ");
    scanf("%c",&n);

    printf("Natural letter from a to %c : \n", n);
    i='a';
    while( i<=n)
    {
        printf("%c  ", i);
        i++;
    }

    return 0;
}
/*************************************************************/
//Write a C program to print all even numbers between 1 to 100. - using while loop
//4)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n;
    printf("Enter any letter: ");
    scanf("%d",&n);

    printf("Natural even number from 0 to %d : \n", n);
    i=0;
    while( i<=n)
    {
        printf("%d  ", i);
        i=i+2;
    }

    return 0;
}
/****************************************************************************/
//Write a C program to print all odd number between 1 to 100.
//5)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n;
    printf("Enter any letter: ");
    scanf("%d",&n);

    printf("Natural odd number from 1 to %d : \n", n);
    i=1;
    while( i<=n)
    {
        printf("%d  ", i);
        i=i+2;
    }

    return 0;
}
/*****************************************************************/
//Write a C program to find sum of all natural numbers between 1 to n.
//6)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n, sum=0;
    printf("Enter any letter: ");
    scanf("%d",&n);

    printf("the sum from 1 to %d : \n", n);
    i=0;
    while(i<=n)
    {
        printf("%d  ", i);
        sum=sum+i;
        i++;

    }
    printf("= %d  ", sum);
    return 0;
}
/******************************************************************/
//Write a C program to find sum of all even numbers between 1 to n.
//7)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n, sum=0;
    printf("Enter any letter: ");
    scanf("%d",&n);

    printf("the sum from 1 to %d : \n", n);
    i=0;
    while(i<=n)
    {
        printf("%d  ", i);
        sum=sum+i;
        i=i+2;

    }
    printf("= %d  ", sum);
    return 0;
}
/******************************************************************/
//Write a C program to find sum of all odd numbers between 1 to n.
//8)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n, sum=0;
    printf("Enter any letter: ");
    scanf("%d",&n);

    printf("the sum from 1 to %d : \n", n);
    i=1;
    while(i<=n)
    {
        printf("%d  ", i);
        sum=sum+i;
        i=i+2;

    }
    printf("= %d  ", sum);
    return 0;
}
/************************************************************/
//Write a C program to print multiplication table of any number.
//9)
#include<stdio.h>
#include<limits.h>

int main()
{
    int i, n, div;
    printf("Enter any letter: ");
    scanf("%d",&n);
    i=1;
    while(i<=12)
    {
        div=i*n;
        printf("%d * %d = %d \n",i,n,div);
        i++;
    }

    return 0;
}

/*****************************************************************************/
//Write a C program to count number of digits in a number.
//10)
#include<stdio.h>
#include<limits.h>
int main()
{
    long long num;
    int count = 0;

    printf("Enter any number: ");
    scanf("%lld", &num);
    while(num != 0)
    {
        count++;
        num=num/10;
    }

    printf("Tot digits: %d", count);

    return 0;
}

/******************************************************************************/
//Write a C program to find first and last digit of a number.
//11)
#include<stdio.h>
#include<limits.h>

int main()
{
    int n, f,l;
    printf("Enter any number: ");
    scanf("%d", &n);
    f=n;
    l=n%10;
    while(f>=10)
    {
        f=f/10;
    }
    printf("First digit = %d\n", f);
    printf("last digit = %d", l);
    return 0;
}
/************************************************************************/
//Write a C program to find sum of first and last digit of a number.
//12)
#include<stdio.h>
#include<limits.h>

int main()
{
    int n,f,l,sum;

    printf("Enter any number: ");
    scanf("%d", &n);

    f=n;
    l=n%10;
    while(f>=10)
    {
        f=f/10;
    }
    printf("first digit = %d\n", f);
    printf("last digit = %d\n", l);
    sum=f+l;
    printf ("the sum first digit and last digit is = %d", sum);
    return 0;
}

/**********************************************************************/

//Write a C program to swap first and last digits of a number.
//13)
#include<stdio.h>
#include<limits.h>

int main()
{
    int num,f,l,b=1,value;

    printf("Enter any number: ");
    scanf("%d", &num);
    f=num;
    l=num%10;
    while(f>=10)
    {
        f=f/10;
        b=b*10;
    }
    value=(num-f*b)+(l*b)-l+f ;
    printf ("Number after swapping first and last digit: %d", value);
    return 0;
}
/****************************************************************************/

//Write a C program to calculate sum of digits of a number.
//14)
#include<stdio.h>
#include<limits.h>

int main()
{
    int n,f,sum=0,s;

    printf("Enter any number: ");
    scanf("%d",&n);
    f=n;
    while(f>0)
    {
        s=f%10;
        sum=sum+s;
        f=f/10;
    }
    printf ("the sum for digit is = %d", sum);
    return 0;
}
/***********************************************************************************/

//Write a C program to calculate product of digits of a number.
//15)
#include<stdio.h>
#include<limits.h>

int main()
{
    int n,f,div=1,s;

    printf("Enter any number: ");
    scanf("%d",&n);
    f=n;
    while(f>0)
    {
        s=f%10;
        div=div*s;
        f=f/10;
    }
    printf ("the sum product of digits is = %d", div);
    return 0;
}
/**************************************************************************************/

//Write a C program to enter a number and print its reverse.
//16)
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
/******************************************************************************************/

//Write a C program to check whether a number is palindrome or not.
//17)
#include<stdio.h>
#include<limits.h>

int main()
{
    int n, num, rev = 0;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &n);
    num = n;
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }
    if(rev == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }

    return 0;
}
/**************************************************************************************************/

//Write a C program to find frequency of each digit in a given integer.
//18)
#include <stdio.h>
int main()
{
    int n, num = 0,i=0,x=0,y=0,z=0,m=0,s=0,a=0,b=0,c=0,d=0;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    while(num != 0)
    {
        switch(num % 10)
        {
        case 0:
            i++;
            break;
        case 1:
            x++;
            break;
        case 2:
            y++;
            break;
        case 3:
            z++;
            break;
        case 4:
            s++;
            break;
        case 5:
            m++;
            break;
        case 6:
            a++;
            break;
        case 7:
            b++;
            break;
        case 8:
            c++;
            break;
        case 9:
            d++;
            break;
        }
        num = num / 10;
    }
    printf("Frequency of 0 =%d \n ",i);
    printf("Frequency of 1 =%d \n",x);
    printf("Frequency of 2 =%d \n",y);
    printf("Frequency of 3 =%d \n",z);
    printf("Frequency of 4 =%d \n",s);
    printf("Frequency of 5 =%d \n",m);
    printf("Frequency of 6 =%d \n",a);
    printf("Frequency of 7 =%d \n",b);
    printf("Frequency of 8 =%d \n",c);
    printf("Frequency of 9 =%d \n",d);

    return 0;
}


/*****************************************************************************************************/
//Write a C program to enter a number and print it in words.
//19)
#include <stdio.h>
int main()
{
    int n, num = 0;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }

        num = num / 10;
    }
}

/**************************************************************************************************/
//Write a C program to print all ASCII character with their values.
//20)
#include <stdio.h>
int main()
{
    int i;
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}

/***************************************************************************************************/
//Write a C program to find power of a number using for loop.
//21)
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

/*****************************************************************************************************/
//Write a C program to find all factors of a number.
//22)
#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter any number to find its factor: ");
    scanf("%d", &num);
    printf("All factors of %d are: \n", num);
    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}



/****************************************************************************************************/
//Write a C program to calculate factorial of a number.
//23)
#include <stdio.h>

int main()
{
    int i, num;
    unsigned long long fact=1LL;
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %llu", num, fact);
    return 0;
}

/***********************************************************************************************/
//Write a C program to find HCF (GCD) of two numbers
//(min)عاوز افهم معادله 
//24)
#include <stdio.h>
int main()
{
    int i, n1, n2, min, h=1;
    while(1)
    {
        printf("Enter any two numbers to find HCF: ");
        scanf("%d%d", &n1, &n2);
        min = (n1<n2) ? n1 : n2;
        i=1;
          while(i<=min)
        {
            if(n1%i==0 && n2%i==0)
            {
                h = i;
            }
            i++;
        }
        printf("HCF of %d and %d = %d\n", n1, n2, h);
    }
    return 0;
}

/*****************************************************************************************************/
//Write a C program to find LCM of two numbers.
//25)




/**********************************************************************************************/
//Write a C program to check whether a number is Prime number or not.
//26)

/**********************************************************************************************/
//Write a C program to print all Prime numbers between 1 to n.
//27)

/**************************************************************************************************/
//Write a C program to find sum of all prime numbers between 1 to n.
//28)

/*********************************************************************************************/
//Write a C program to find all prime factors of a number.
//29)

/*********************************************************************************************/
//Write a C program to check whether a number is Armstrong number or not.
//30)

/********************************************************************************************/
//Write a C program to print all Armstrong numbers between 1 to n.
//31)

/*********************************************************************************************/
//Write a C program to check whether a number is Perfect number or not.
//32)

/********************************************************************************************/
//Write a C program to print all Perfect numbers between 1 to n.
//33)

/***********************************************************************************************/
//Write a C program to check whether a number is Strong number or not.
//34)

/******************************************************************************************/
//Write a C program to print all Strong numbers between 1 to n.
//35)

/*********************************************************************************************/
//Write a C program to print Fibonacci series up to n terms.
//36)

/*********************************************************************************************/
//Write a C program to find one's complement of a binary number.
//37)

/************************************************************************************************/
//Write a C program to find two's complement of a binary number.
//38)

/********************************************************************************************/
//Write a C program to convert Binary to Octal number system.
//39)

/*************************************************************************************************/
//Write a C program to convert Binary to Decimal number system.
//40)

/*******************************************************************************************/
//Write a C program to convert Binary to Hexadecimal number system.
//41)

/**********************************************************************************************/
//Write a C program to convert Octal to Binary number system.
//42)

/***********************************************************************************************/
//Write a C program to convert Octal to Decimal number system.
//43)

/********************************************************************************************/
//Write a C program to convert Octal to Hexadecimal number system.
//44)

/***********************************************************************************/
//Write a C program to convert Decimal to Binary number system.
//45)

/************************************************************************************/
//Write a C program to convert Decimal to Octal number system.
//46)

/***************************************************************************************/
//Write a C program to convert Decimal to Hexadecimal number system.
//47)

/****************************************************************************************/
//Write a C program to convert Hexadecimal to Binary number system.
//48)

/**************************************************************************************/
//Write a C program to convert Hexadecimal to Octal number system.
//49)

/************************************************************************************/
//Write a C program to convert Hexadecimal to Decimal number system.
//50)

/*************************************************************************************/
//Write a C program to print Pascal triangle up to n rows.
//51)

/************************************************************************************/
//Star pattern programs - Write a C program to print the given star patterns.
//52)

/***************************************************************************************/
//Number pattern programs - Write a C program to print the given number patterns
//53)

/******************************************************************************************/