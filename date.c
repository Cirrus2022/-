#include <stdio.h>

void f(int a,int b,int c,int*p);

int main()

	{
	int a;
	int b;
	int c;
	int max;
	int*p=&max;
	printf("万年历。输入年月日显示对应月份日历，中间用空格分隔。例：\n2022 10 8\n输入0 0 0结束。\n");

	do{
	
	scanf("%d %d %d",&a,&b,&c);
	
	if (b<13 && c<32){
		//验证数据合理性 
		if(a>4 && a%4==0 && b==2){
			//闰年二月 
			if(c<30){
			int max=30;
			f(a,b,c,&max);
			}else
			printf("数据有误，请核对后再作输入。\n");
		}else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
			//具有31天的月份 
			int max=32;
			f(a,b,c,&max);
		}else if(b==2){
			//二月 
			if(c<29){
			int max=29;
			f(a,b,c,&max);
			}else
			printf("数据有误，请核对后再作输入。\n");
		}else if(b==4||b==6||b==9||b==11){
		//具有30天的月份 
			if(c<31){
			int max=31;
			f(a,b,c,&max);
			}else
			printf("数据有误，请核对后再作输入。\n");
		}
		}else 
		printf("数据有误，请核对后再作输入。\n");

	
	}while (a!=0 && b!=0 && c!=0);
	//输入0 0 0后结束 
	printf("谢谢使用。欢迎反馈您的宝贵意见，再见。\n");
		
	return 0;
	}

void f(int a,int b,int c,int*p)
	{
	int i;
	printf("%d年%d月%d日 日历已生成，结果如下：\n",a,b,c);
	for(i=1;i<*p;i++){
				if(i==c){
				//加入同日期星标 
					printf("*");
				}
				printf("%d\t",i);
				if(i%7==0){
					printf("\n");
				}
				//给日期换行 
				if(i==*p-1){
					printf("\n");
				}
			}
	}

			
			
			
			
