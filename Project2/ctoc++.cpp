#define _CRT_SECURE_NO_WARNINGS
//Created by zhouzw in 2020-6-9
//From C to C++   
//https://www.bilibili.com/video/BV1Pb411q7pn

//2.��׼�⣬ע�ͣ���������  3.C++��׼���������iostream�����ֿռ�namespace
#if 0 //C++���߱����� https://www.onlinegdb.com/online_c++_compiler
#include <iostream> //��׼���������ͷ�ļ�
using namespace std; //�Ա�ʶ������������std��׼���ֿռ�  using std::cout��
int main(){
    cout << "Hello World"<<endl; //endl��std�еģ��൱��"\n"
    return 0;
}
#endif
//C++�� ʹ��<cstdio>,<cmath>,<cstring>. sqrt,sin,strcpy,strcat,strlen
#if 0
#include<cstdio> //c-std-io: C-��׼-������� 
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
//<malloc.h>���䣬��̬�ڴ���� #if #else #endif 
#if 0
#include<cstdio> //c-std-io: C-��׼-������� 
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
//<iostream> cin:c-input��cout:c-output�����׼�������
#if 0
#include<cstdio>
#include<iostream>
using namespace std;

//��������˵��
void help() {
    cout << "          ������          " << endl;
    cout << "��һ����   �����   �ڶ�����" << endl;
}
int main() {
    int radius;
    cin >> radius;
    cout << "���: " << 3.14 * radius * radius << "\n";
    cout << "c-output" << "\t" << "hello world" << endl;
    cout << "zhouzw" << " " << "c++" << endl;
    cout << "  *  " << endl << " * * " << endl << "* * *" << endl;

    //������
    int a, b;
    char c='!';
    while (1) {
        help();
        cin >> a >> c >> b;
        if (c == '+') {
            cout << a + b << endl;
        }
        //if�Ӽ��˳� ���ּ���
    }
}
#endif
//<fstream>�ļ��� ofstream,ifstream; <string>��c++���ַ�������ͷ�ļ�
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

//C++�����ĸ������Ҫ��stream����