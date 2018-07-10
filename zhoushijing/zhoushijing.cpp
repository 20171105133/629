#include<iostream>
#include<fstream>
#include <stdlib.h>
using namespace std;
class people
{
public:
    string numbers;
    string name;
    string sex;
    string cla;
    string birthofdate;
    string phoneNO;

};
class CP
{
public:
    double average;
    double Max,Min;

};
double Calculation(string judge_[],int Size)
{
    int i;
    double num;
    double average=0.0;
    double Max=0.0;double Min=100.0;
    for(i=0;i<Size;++i)
    {
        num=atof(judge_[i]);
        average+=num;
        if(Max<num)
            Max=num;
        if(Min>num)
            Min=num;
    }
    average=(average-Max-Min)/(Size-2);
    return average;
}
int main()
{
    FILE *ep;
    FILE *op;
    people a[100];
    CP b[100];
    char ch;
    int i=0,l=0,m=0,n;
    string numbers;
    string name;
    string sex;
    string cla;
    string birthofdate;
    string phoneNO;
    string judge[200];
    op=fopen("studentdata.csv","r");
    if(op==NULL)
    {
        printf("Wrong!");
        fclose(op);
    }
    else
    {
        ch=fgetc(op);
        while(ch!=EOF)
        {
        	if(i==0){
                if(l==0){
                if(ch==',')
                {
                    l++;
                    m=0;
                    ch=fgetc(op);
                    continue;
                }
                    numbers[m]=ch;
        			m++;
				}
				else if(l==1)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			name[m]=ch;
        			m++;
				}
				else if(l==2)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			sex[m]=ch;
        			m++;
				}
				else if(l==3)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			birthofdate[m]=ch;
        			m++;
				}
				else if(l==4)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			cla[m]=ch;
        			m++;
				}
				else if(l==5)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			phoneNO[m]=ch;
        			m++;
				}
				else{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
        			}
        			judge[l-6][m]=ch;
        			m++;
				}
        		if(ch=='\n')
                {
                    a[i].numbers=numbers;a[i].name=name;a[i].sex=sex;a[i].birthofdate=birthofdate,a[i].cla=cla,a[i].phoneNO=phoneNO;
                    ++i;l=0;m=0;
                }
			}
        	if(i!=0){
        		if(l==0){
        			if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			numbers[m]=ch;
        			m++;
				}
				else if(l==1)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			name[m]=ch;
        			m++;
				}
				else if(l==2)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			sex[m]=ch;
        			m++;
				}
				else if(l==3)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			birthofdate[m]=ch;
        			m++;
				}
				else if(l==4)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			cla[m]=ch;
        			m++;
				}
				else if(l==5)
				{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
					}
        			phoneNO[m]=ch;
        			m++;
				}
				else{
					if(ch==',')
					{
        				l++;
        				m=0;
        				ch=fgetc(op);
        				continue;
        			}
        			judge[l-6][m]=ch;
        			m++;
        			if(ch=='\n')
					{
                        a[i].numbers=numbers;a[i].name=name;a[i].sex=sex;a[i].birthofdate=birthofdate,a[i].cla=cla,a[i].phoneNO=phoneNO;
                        b[i].average=Calculation(judge,l-5);
        				i++;l=0;m=0;
					}
				}
			}
            ch=fgetc(op);
        }
    }
    fclose(op);
    ep=fopen("studentdadaout.csv","w+");
    printf("%s,%s,%s,%s,%s,%s,%s\n",a[0].numbers,a[0].name,a[0].sex,a[0].birthofdate,a[0].cla,a[0].phoneNO,"score");
    fprintf(ep,"%s,%s,%s,%s,%s,%s,%s\n",a[0].numbers,a[0].name,a[0].sex,a[0].birthofdate,a[0].cla,a[0].phoneNO,"score");
    for(n=1;n<i;++n)
    {
        printf("%s,%s,%s,%s,%s,%s,%.2lf\n",a[i].numbers,a[i].name,a[i].sex,a[i].birthofdate,a[i].cla,a[i].phoneNO,b[i].average);
        fprintf(ep,"%s,%s,%s,%s,%s,%s,%.2lf\n",a[i].numbers,a[i].name,a[i].sex,a[i].birthofdate,a[i].cla,a[i].phoneNO,b[i].average);
    }
    fclose(ep);
    return 0;
}
