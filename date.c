#include <stdio.h>

void f(int a,int b,int c,int*p);

int main()

	{
	int a;
	int b;
	int c;
	int max;
	int*p=&max;
	printf("��������������������ʾ��Ӧ�·��������м��ÿո�ָ�������\n2022 10 8\n����0 0 0������\n");

	do{
	
	scanf("%d %d %d",&a,&b,&c);
	
	if (b<13 && c<32){
		//��֤���ݺ����� 
		if(a>4 && a%4==0 && b==2){
			//������� 
			if(c<30){
			int max=30;
			f(a,b,c,&max);
			}else
			printf("����������˶Ժ��������롣\n");
		}else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
			//����31����·� 
			int max=32;
			f(a,b,c,&max);
		}else if(b==2){
			//���� 
			if(c<29){
			int max=29;
			f(a,b,c,&max);
			}else
			printf("����������˶Ժ��������롣\n");
		}else if(b==4||b==6||b==9||b==11){
		//����30����·� 
			if(c<31){
			int max=31;
			f(a,b,c,&max);
			}else
			printf("����������˶Ժ��������롣\n");
		}
		}else 
		printf("����������˶Ժ��������롣\n");

	
	}while (a!=0 && b!=0 && c!=0);
	//����0 0 0����� 
	printf("ллʹ�á���ӭ�������ı���������ټ���\n");
		
	return 0;
}

void f(int a,int b,int c,int*p)
	{
	int i;
	printf("%d��%d��%d�� ���������ɣ�������£�\n",a,b,c);
	for(i=1;i<*p;i++){
				if(i==c){
				//����ͬ�����Ǳ� 
					printf("*");
				}
				printf("%d\t",i);
				if(i%7==0){
					printf("\n");
				}
				//�����ڻ��� 
				if(i==*p-1){
					printf("\n");
				}
		}
	}

			
			
			
			
