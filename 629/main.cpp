#include<iostream>
#include<fstream>
using namespace std;
class people
{
private:
    string numbers;
    string name;
    string sex;
    string cla;
    string birthofdate;
    string phoneNO;
public:
    people(string nu=NULL,string na=NULL,string se=NULL,string cl=NULL,string bd=NULL,string ph=NULL):numbers(nu),name(na),sex(se),cla(cl),birthofdate(bd),phoneNO(ph){}
    
};
class CP
{
private:
    string name;
    int judge;
public:
    CP(string na=NULL,int ju=0):name(na),judge(ju){}
};
int main()
{
    people a[100];
    CP b[100];
    int i,l;
    string numbers;
    string name;
    string sex;
    string cla;
    string birthofdate;
    string phoneNO;
    string judge_name;
    int judge;
    int average;
    string line;
    ifstream op("studentdate.csv");
    while(getline(op,line))
    {
        
    }
    return 0;
}
