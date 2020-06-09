#define _CRT_SECURE_NO_WARNINGS
//Created by zhouzw in 2020-6-9
//From C to C++   
//https://www.bilibili.com/video/BV1Pb411q7pn

//2.标准库，注释，条件编译  3.C++标准输入输出流iostream，名字空间namespace
#if 0 //C++在线编译器 https://www.onlinegdb.com/online_c++_compiler
#include <iostream> //标准输入输出流头文件
using namespace std; //对标识符进行声明，std标准名字空间  using std::cout；
int main(){
    cout << "Hello World"<<endl; //endl是std中的，相当于"\n"
    return 0;
}
#endif
//C++中 使用<cstdio>,<cmath>,<cstring>. sqrt,sin,strcpy,strcat,strlen
#if 0
#include<cstdio> //c-std-io: C-标准-输入输出 
#include<cmath>
#include<cstring>
int main() {
    printf("Hello C++\n");
    
    double x = 3.14;
    printf("%lf %lf\n", sqrt(x), sin(x));

    char s[10] = "hello";    puts(s);
    char s1[16]; //[2][6][16]
    strcpy(s1, s);           puts(s1);
    strcpy(s1, "world");     puts(s1);
    strcat(s1, "zhouzw");    puts(s1);
    printf("%d, %d", strlen(s), strlen(s1));
}
#endif
//<malloc.h>不变，动态内存分配 #if #else #endif 
#if 0
#include<cstdio> //c-std-io: C-标准-输入输出 
#include<cstring>
#include<malloc.h>
int main() {
#if 0
    char s[10];
    strcpy(s, "hello");
    puts(s);
#else
    char* p = (char*)malloc(12 * sizeof(char));
    strcpy(p, "hello world");
    printf("%s, %d\n", p, (int)p);
    puts(p);
    free(p);
#endif
}
#endif
//<iostream> cin:c-input；cout:c-output；简易计算器；
#if 0
#include<cstdio>
#include<iostream>
using namespace std;

//计算器的说明
void help() {
    cout << "          计算器          " << endl;
    cout << "第一个数   运算符   第二个数" << endl;
}
int main() {
    int radius;
    cin >> radius;
    cout << "面积: " << 3.14 * radius * radius << "\n";
    cout << "c-output" << "\t" << "hello world" << endl;
    cout << "zhouzw" << " " << "c++" << endl;
    cout << "  *  " << endl << " * * " << endl << "* * *" << endl;

    //计算器
    int a, b;
    char c='!';
    while (1) {
        help();
        cin >> a >> c >> b;
        if (c == '+') {
            cout << a + b << endl;
        }
        //if加减乘除 各种计算
    }
}
#endif
//<fstream>文件流 ofstream,ifstream; <string>是c++的字符串处理头文件
#if 1
#include<cstdio>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    ofstream OF("ofstream.txt");
    OF << "3.14" << "HELLO\tC++";
    OF.close();

    ifstream IF("ofstream.txt");
    double pi; 
    string str, str1;
    IF >> pi >> str >> str1;
    cout << pi << endl 
         << str1 << endl 
         << str << endl;
    IF.close();
}
#endif

//C++中流的概念很重要，stream！！