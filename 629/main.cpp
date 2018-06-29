//
//  main.cpp
//  629
//
//  Created by 周世婧 on 18/6/29.
//  Copyright © 2018年 周世婧. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[])
{
    FILE *a;
    char s1[200];
    char s2[200];
    char s3[200];
    char s4[200];
    char s5[200];
    char s6[200];
    if((a=fopen("/Users/s20171105133/Desktop/6.29 next/File.csv","r"))==0)
    {
        printf("文件不存在\n");
    }
    else
    {fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s",s1,s2,s3,s4,s5,s6);
        printf("%s\n%s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5,s6);
    }
    return 0;
}
