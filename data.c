//生成测试数据
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 1000

int main()
{
    int i;
    float a;
    int k,d,n;
    //char fn[10];
    FILE *fp;
    fprintf(stdout,"input(k d n):");
    scanf("%d%d%d",&k,&d,&n);
    //scanf("%s",&fn);
    if((fp=fopen("data.txt","w"))==NULL)    exit(1);
    fprintf(fp,"K=%d,D=%d,N=%d\n",k,d,n);
    srand((unsigned int)(time(NULL)));
    for(i=1;i<=d*n;i++){
        a=(int)(1.0+(double)N*rand()/(RAND_MAX+1.0));
        fprintf(fp,"%.2f ",a);
        if(i%d==0) putc('\n',fp);
    }
    if(fclose(fp)) exit(2);
}
