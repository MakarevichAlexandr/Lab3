#include <stdio.h>
#include <stdlib.h>

float money = 0;
int day = 0;

int f(int i1, int i2) 
{
	if(i1 >= 10000 && i2 <= 365 && i2 >= 0) return 1;
	
	return 0;
} 

int main()
{
	scanf("%f %d",&money, &day);
	printf("money = %f  day = %d \n", money ,day);
 
 	int i1, i2, i3; 

 	if(f(money, day))
 	{
		if(money <= 100000){
			i1 = 2;
			i2 = 6;
			i3 = 12;	
		} 
		else {
			i1 = 3;
			i2 = 8;
			i3 = 15;
		}
	
		if(day <= 30) money = money- money / 100 * 10;
		if(day > 30 && day <= 120) money = money + money / 100 * i1;
		if(day > 120 && day <= 240) money = money + money / 100 * i2;
		if(day>240 && day<=365)money=money+money/100*i3;
	
		printf("money = %f", money);	
    }
return 0;
}

