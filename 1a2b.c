#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void generate_random(char *ans){
	srand(time(NULL));
	char a[2];
	for(int i=0;i<4;i++)
	{
		do{
		  sprintf(a,"%d",rand()%10); // convert int to char
		}while(strstr(ans,a));
		ans[i]=*a;
	}
}

int compare_answer(char *ans, char *user)
{
	int a=0,b=0;
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			if(ans[i]==user[j])
				if(i==j)
					a++;
				else
					b++;
	printf("%dA%dB\n",a,b);
	return a-4;
}

int main(int argc, char *argv[])
{
	char ans[]="0000";
	char user[]="0000";
	generate_random(ans);
	do{
		printf("Please input:");
		scanf("%s",user);
	}while(compare_answer(ans,user));
	return 0;
}
