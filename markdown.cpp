//ZhangYaoyang`s Markdown
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){

//(do-whileѭ���� 
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


//(������Ϸ��
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


//(��ƽ��ֵ�� 
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


//(�������棩 
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


//(��׳�)
/*
int n;
scanf("%d", &n);
int fact=1;
int i=1;
for(i=1; //��ʼ����(����������¶�����ʡ��)
i<=n;    //ѭ������������
i++     //ѭ��ÿ��Ҫ��������
)
{
	fact *= i;
}
printf("%d!=%d\n",n,fact);
*/

//����ѭ����for,while,do-while
/*һЩtips��
  ����й̶���������for
  �������ִ��һ�Σ���do-while
  ���������while      */



























return 0;
}

