#define _CRT_SECURE_NO_WARNINGS
/*
Created by zhouzw in 2020-6-9
From C to C++   
https://www.bilibili.com/video/BV16t411h7bD
*/

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
#if 0
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

//���ñ�������Ż�С���������β�
#if 0
#include<cstdio>
#include<iostream>
#include<fstream>
using namespace std;
void swap0(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
void swap1(int* a, int* b) {    //ָ��  &�Ž���������
    int t = *a;
    *a = *b;
    *b = t;
}
void swap2(int& a, int& b) {    //�����β�
    int t = a;
    a = b;
    b = t;
}
void swap3(int a, int b) {      //����Ҫ�Ļ����βεĵ�ַ
    int* pa = &a;
    int* pb = &b;
    int t = *pa;
    a = *pb;
    b = t;
}

int main() {
    //���ñ���
    int A = 3;
    int& a = A;
    a = 5;
    cout << A << endl;

    //�����β�
    int B = 7;      cout << A << "\t" << B << endl;
    swap0(A, B);    cout << A << "\t" << B << endl;
    swap1(&A, &B);  cout << A << "\t" << B << endl;    
    swap2(A, B);    cout << A << "\t" << B << endl;
    swap3(A, B);    cout << A << "\t" << B << endl;
}
#endif

//Ĭ���βΣ���������
#if 0
//Ĭ���βΣ����β�����Ĭ��ֵ
//add ��������ӣ������Ѹ���; print(str,n=1) n�δ�ӡstr
//�������أ�C++������ͬ����ֻҪ���β����Ͳ�ͬ��ϵͳ�Զ������ж�
//������+�β��趨= ����ǩ�����������Ͳ�����Ϊ���ֺ���������
//int��add, double��add
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int add(int a, int b = 1, int c = 2) {
    return(a + b + c);
}
double add(double a, double b = 1., double c = 2) {
    return(a + b + c);
}
void print(string str, int n = 1) {
    for (int i = 0; i < n; i++) {
        cout << str << "\t";
    }
}
int main() {
    //int add
    cout << add(3) << endl;
    cout << add(3,5) << endl;
    cout << add(3,5,7) << endl;
    //n times print
    string str = "zhou";
    print(str);     cout << endl;
    print(str, 3);  cout << endl;
    //double add
    cout << add(3.0, 5.6) << endl;
    cout << add((double)3, 7.,double(5)) << endl; 
}
#endif
//����ģ�� template<typename = T>
#if 0
//��template�ؼ�������һ��ģ��ͷ�����������ͱ������ģ�����
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

template<typename T>
T add(T a, T b = 1.7, T c = 2.) {
    return(a + b + c);
}
int main() {
    cout << add(5) << endl;
    cout << add(5.) << endl;
    cout << add((double)5) << endl;
    cout << add<double>(5) << endl;
    cout << add<string>("zhou","ZE","wen") << endl;
}
#endif
//string��
#if 0
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main() {
//s.substr, s.size(), s[], s1+s2
    string s1 = "zhouzw", s2 = "c++learn";
    cout << s1.size() << endl
        << s1.substr(1, 3) << endl
        << s1 + " " + s2 << endl;
    s1[0] = 'Z'; s1[4] = 'Z';
    cout << s1 << endl;
//s.find, s.insert
    s1.insert(4, "bilibili");
    cout << s1 << endl
        << s1.find("li") << endl;
    for (int i = 0; i < s2.size(); i++) {
        cout << s2[i] << "_";
    }
    cout << endl;
}
#endif
//vector<int> ��ģ�壬ʵ��������һ����
#if 0
//v.push_back(), v.pop_back(), v.resize()
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}
int main() {
    vector<int> v = { 1,2,3,4 };
    v.push_back(49);    v.push_back(27);    print(v);
    v.pop_back();    print(v);
    v.resize(3);     print(v);

    cout << "---------------------------------------" << endl;

    vector<int> v1 = { };
    v1.push_back(49);    v1.push_back(27);    print(v1);
    v1.pop_back();    print(v1);
    v1.resize(3);     print(v1);
}
#endif
//��ϰָ��
#if 0 
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[] = { 1, 2, 3, 4 }; //ע���ʽ int arr[] = { };
    int* p = arr, * q = p;
    cout << p << "\t" << arr << "\t"
        << &p[0] << "\t" << &arr[0] << "\n";
    cout << *p << "\t" << arr[0] << "\t" 
         << p[0] << "\t" << *arr << "\n";
    p[1] = 6;
    for (q = p + 4; p < q; p++) {
        cout << *p << "\t";
    }
}


#endif 
//��̬�ڴ���� new
#if 0 
/*  ��̬�ڴ���� new����-delete�ͷ�
    T *p = new T;
    delete p;
    T *p = new T[7];
    delete[] p;
*/
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main() {
    int n = 4;
    int *p = new int[n];
    for (int i = 0; i < n; i++) {
        p[i] = 2 * i + 1;
        cout << p[i] << "\t";
    }
    cout << endl;
    char* s = (char*)p;
    int n1 = n * sizeof(int) / sizeof(char);
    s[0] = 'A';
    for (int i = 0; i < n1; i++) {
        s[i] = *s + i;
        cout << s[i] << " ";
    }
    delete[] p;
}
#endif 
//ѧ����Ϣ����ʵ��
#if 1
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct stu {
    string name;
    float score = 0.;
    void print() {
        cout << name << "\t" << score << endl;
    }
};
int main() {
    #if 0
    stu stu;
    stu.name = "zhou";
    stu.score = 80;
    stu.print();
    #else 
    vector<stu> stus;
    stu stu;
    float sum = 0, max = 0, min = 100;
    while (1) {
        cout << "�����������ɼ�" << endl;
        cin >> stu.name >> stu.score;
        if (stu.score < 0)  break;
        stus.push_back(stu);
        sum += stu.score;
        if (stu.score > max) max = stu.score;
        if (stu.score < min) min = stu.score;
    }
    cout << "����---�ɼ�" << endl;
    for (int i = 0; i < (int)stus.size(); i++) {
        stus[i].print();
    }
    float average = sum / stus.size();
    cout << "��߷�:" << max
        << ",��ͷ�:" << min
        << ",ƽ����:" << average << endl;
    #endif
}
#endif 