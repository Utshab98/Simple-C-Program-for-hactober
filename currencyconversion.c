#include<stdio.h>
#include<conio.h>
void main()
{
	float ans,ans1,ru;
	int ch;
	clrscr();
	do
	{
		printf("\n\n************ Wel-Come***************");
		printf("\n\n 1.Rupees -> Doller");
		printf("\n\n 2.Doller -> Ruppes");
		printf("\n\n 3. Exit");
		printf("\n\nEnter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n\nEnter the currency in Rupees=");
				scanf("%f",&ru);
				ans=ru/120;
				printf("\n\nThe currency is doller is= %.2f$",ans);
				break;
			case 2:printf("\n\nEnter the currency in Doller=");
				scanf("%f",&ru);
				ans1=ru*120;
				printf("\n\nThe currency in Ruppes is= %.2f",ans1);
				break;
			case 3:exit(0);
		}
	}while(ch<4 font="">)
	getch();

}