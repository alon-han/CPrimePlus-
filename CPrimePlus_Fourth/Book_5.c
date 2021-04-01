#include "stdio.h"
#define PAGES 959
#define RENT 3582.99
#define BLURB "Authentic imitation!"
int main(void)
{
//    正常打印
    printf("*%d*\n",PAGES);
//    默认为右对齐，不足的位数使用空格填充
    printf("*%10d*\n",PAGES);
//    不足的位数使用0填充
    printf("*%010d*\n",PAGES);
//    左对齐
    printf("*%-10d*\n",PAGES);

    printf("\n");
    printf("**********************************************\n");
    printf("假装是一条分隔线,上面是关于整数的输出，下面是浮点数的输出\n");
    printf("**********************************************\n");
    printf("\n");

//    正常输出浮点数
    printf("*%f*\n",RENT);
//    科学计数法输出浮点数
    printf("*%e*\n",RENT);
//    所有位数包括小数点和其他符号在内保留10位，如果不够则会自行撑开，小数部分保留3位
    printf("*%09.3f*\n",RENT);
//    注意这里是所有位数，包括了.,E,+,在内的所有字符数量达到10个，不够的在使用0填充
    printf("*%010.3E*\n",RENT);

    printf("\n");
    printf("**********************************************\n");
    printf("假装是一条分隔线,下面是关于16进制的输出\n");
    printf("**********************************************\n");
    printf("\n");

//    分别对应小写，大写和0X前缀的
    printf("%x %X %#x\n",PAGES,PAGES,PAGES);

    printf("\n");
    printf("**********************************************\n");
    printf("假装是一条分隔线,下面是关于字符串的输出\n");
    printf("**********************************************\n");
    printf("\n");

    printf("[%s]\n",BLURB);
//    使用24个位置来表示这个字符串，默认为左对齐
    printf("[%24s]\n",BLURB);
//    使用右对齐的方式表示这个字符串
    printf("[%-24s]\n",BLURB);
//    .5表示只打印5个字符,使用24个位来表示
    printf("[%24.5s]\n",BLURB);
    return 0;
}