#include<stdio.h>
#include<conio.h>

main ()

{

 int a,b,c,d,n,i;

  clrscr();

   printf("enter the number A :-  ");
   scanf("%d",&a);
   printf("enter the number B :-  ");
   scanf("%d",&b);
   printf("enter the number C :-  ");
   scanf("%d",&c);
   printf("enter the number D :-  ");
   scanf("%d",&d);


if(a>b)
    {
	if(a>c)
	{
	    if(a>d)
	    {
		printf("A is max");
	    }
	    else
	    {
		printf("D is max");
	    }
	}
	else
	{
	    printf("C is max");
	}
    }
else
    {
	if(b>c)
	{

	    if(b>d)
	    {
		printf("B is max");
	    }
	    else
	    {
		printf("D is max");
	    }
	}

    }

    {
	if(c>d)
	    {
		printf("c is max");
	    }
	    else
	    {
		printf("D is max");
	    }
	}


	   printf("enter the number A :- ");
	   scanf("%d",&a);
	   printf("enter the number B:- ");
	   scanf("%d",&b);
	   printf("enter the number C :- ");
	   scanf("%d",&c);


	(a==b && b==c)
		? printf("all values are same... ")
		: (a==b)
			? printf("A and B are same... ")
			: (b==c)
				? printf("B and C are same... ")
				: (a==c)
					? printf("A and C are same... ")
					: (a>b)
					       ? (a>c)
						      ? printf("A is max... ")
						      : printf("B is max... ")

						: (b>c)
						      ? printf("B is max...")
						      : printf("C is max...");



	 printf("Enter a table number :- ");
	 scanf("%d", &n);
	 i=1;
	while  (i<=10)
	 {
	 printf("%d * %d = %d\n", n,i,n*i);
				  i++;
	 }


    printf("ENTER A NUMBER---");
    scanf("%d",&a);

    if(a % 2==0)
    {
    printf("%d is a even number\n",a);
    }
    else
    {
    printf("%d is a odd number\n",a);
}
getch();
}
