#include<stdio.h>
#include<stdlib.h>
//2.0版本相较于计算器1.0版本增加了与.或.异或运算，采用函数指针数组调用函数（doge.doge） 
void menu()
{
	printf("------------------------------------------------------------------------------------\n\n");
	printf("\t\t可进行的操作：\n\n");
	printf("\t\t\t1.＋\t\t2.-\t\t3.×\t\t4.÷\n\n\n\t\t\t5.&\t\t6.|\t\t7.^\t\t8.exit\n\n\n");
	printf("------------------------------------------------------------------------------------\n");
 } 
float add(float x,float y) 
{
	return x+y;
}
float sub(float x,float y) 
{
	return x-y;
}
float mul(float x,float y) 
{
	return x*y;
}
float div(float x,float y) 
{
	return x/y;
}
float And(float x,float y) 
{
	return (int)x&(int)y;
}
float Or(float x,float y) 
{
	return (int)x|(int)y;
}
float Xor(float x,float y) 
{
	return (int)x^(int)y;
}
int main()
{   menu();
 	float (*pf[])(float,float)={0,add,sub,mul,div,And,Or,Xor};//重点！！！ 
 	int  select;
	float num1,num2;
	for(int i=0; ;i++)//也可采用while循环 
	{	
		printf("请输入操作序号（1~8）：\n");
		scanf("%d",&select);
		if(select>=1&&select<=7)
		{
		printf("\n\n\n");
		printf("请输入两个计算的数字:");
		scanf("%f%f",&num1,&num2);
		float ret=pf[select](num1,num2);//精华！！！ 
		printf("\n");
		printf("计算结果为：%.2f\n",ret);
		}
		else if(select==8) {printf("---退出程序---"); exit(0);}//也可用break结束循环 
		else printf("操作序号错误！！！\n\n\n"); 
		/*switch(select)
			{
			case 1:printf("%.2f+%.2f=%.2f\n",num1,num2,add(num1,num2));break;
			case 2:printf("%.2f-%.2f=%.2f\n",num1,num2,sub(num1,num2));break;
			case 3:printf("%.2f*%.2f=%.2f\n",num1,num2,mul(num1,num2));break;
		 	case 4:printf("%.2f/%.2f=%.2f\n",num1,num2,div(num1,num2));break;
		 	case 5:printf("退出程序\n");exit(0);break;
		 	default: printf("错误选项！！！\n");break; 
		 	}*/
	}
	
	
	return 0;
}
