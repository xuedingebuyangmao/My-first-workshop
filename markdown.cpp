//ZhangYaoyang`s Markdown
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){

//(do-while循环） 
/*
int x;
int n=0;
scanf("%d",&x);
do{
	x /= 10;
	n++;
printf("x=%d,n=%d\n",x,n);
}while(x>0);
printf("%d",n);
*/


//(猜数游戏）
/*
srand(time(0));
int number =rand()%100+1;
int count =0;
int a=0;
do{
	printf("input=");
	scanf("%d",&a);
	count ++;
	if(a>number){
		printf("bigger\n");
	} else if(a<number){
		printf("smaller\n");
	}
  }
	while (a!=number);
	printf("right answer,and u cost%dtimes.\n",count);
*/


//(求平均值） 
/*
int sum=0;
int number;
int count=0;

scanf("%d", &number);

while(number != -1){
	sum += number;
	count ++;
	scanf("%d", &number);
}
printf("%f\n",1.0*sum/count);
*/


//(整数求逆） 
/*
int x;
scanf("%d",&x);
int digit;
int ret=0;

while(x>0){
	digit=x%10;
	ret=ret*10+digit;
	printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
	x /= 10;
}
printf("%d",ret);
*/


//(求阶乘)
/*
int n;
scanf("%d", &n);
int fact=1;
int i=1;
for(i=1; //初始条件(在特殊情况下都可以省掉)
i<=n;    //循环继续的条件
i++     //循环每轮要做的条件
)
{
	fact *= i;
}
printf("%d!=%d\n",n,fact);
*/

//三种循环：for,while,do-while
/*一些tips：
  如果有固定次数，用for
  如果必须执行一次，用do-while
  其他情况用while      */



























return 0;
}

