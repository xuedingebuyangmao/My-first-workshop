//ZhangYaoyang`s Markdown
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){

//(do-whileÑ­»·£© 
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

//(²ÂÊýÓÎÏ·£©
///*

srand(time(0));
int number =rand()%100+1;
int count =0;
int a=0;
do{
	printf("input=");
	scanf("%d",&a);
	count ++;
	if(a>number){
		printf("bigger");
	} else if(a<number){
		printf("smaller");
	}
	}
	while (a!=number);
	printf("right answer,and u cost%dtimes.\n",count);
}
return 0;
}

