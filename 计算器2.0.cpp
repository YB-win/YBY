#include<stdio.h>
#include<stdlib.h>
//2.0�汾����ڼ�����1.0�汾��������.��.������㣬���ú���ָ��������ú�����doge.doge�� 
void menu()
{
	printf("------------------------------------------------------------------------------------\n\n");
	printf("\t\t�ɽ��еĲ�����\n\n");
	printf("\t\t\t1.��\t\t2.-\t\t3.��\t\t4.��\n\n\n\t\t\t5.&\t\t6.|\t\t7.^\t\t8.exit\n\n\n");
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
 	float (*pf[])(float,float)={0,add,sub,mul,div,And,Or,Xor};//�ص㣡���� 
 	int  select;
	float num1,num2;
	for(int i=0; ;i++)//Ҳ�ɲ���whileѭ�� 
	{	
		printf("�����������ţ�1~8����\n");
		scanf("%d",&select);
		if(select>=1&&select<=7)
		{
		printf("\n\n\n");
		printf("�������������������:");
		scanf("%f%f",&num1,&num2);
		float ret=pf[select](num1,num2);//���������� 
		printf("\n");
		printf("������Ϊ��%.2f\n",ret);
		}
		else if(select==8) {printf("---�˳�����---"); exit(0);}//Ҳ����break����ѭ�� 
		else printf("������Ŵ��󣡣���\n\n\n"); 
		/*switch(select)
			{
			case 1:printf("%.2f+%.2f=%.2f\n",num1,num2,add(num1,num2));break;
			case 2:printf("%.2f-%.2f=%.2f\n",num1,num2,sub(num1,num2));break;
			case 3:printf("%.2f*%.2f=%.2f\n",num1,num2,mul(num1,num2));break;
		 	case 4:printf("%.2f/%.2f=%.2f\n",num1,num2,div(num1,num2));break;
		 	case 5:printf("�˳�����\n");exit(0);break;
		 	default: printf("����ѡ�����\n");break; 
		 	}*/
	}
	
	
	return 0;
}
