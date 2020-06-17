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
//����ģ�� template<typename T>
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
//vector<int> vector�� �Ա����� Vector��ģ��
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
#if 0
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct student {
    string name;
    float score = 0.;
    void print() {
        cout << name << "\t" << score << endl;
    }
};
int main() {
    #if 0
    student stu;
    stu.name = "zhou";
    stu.score = 80;
    stu.print();
    #else 
    vector<student> stus;
    student stu;
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
//����ָ��this��class��struct�����ʿ���private��public(���ⲿ�Ľӿ�)�����캯��
#if 0
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//class��ĳ�ԱĬ����˽�е�private
//struct��ĳ�ԱĬ���ǹ�����public
struct student {
private://���ʿ���
    string name;
    float score = 0.;
public: //�ӿ�
    student() { //Ĭ�Ϲ��캯������������������ͬ����������
        cout << "���캯��" << endl;
    }
    string get_name() { return name; }
    float get_score() { return score; }
    void set_name(string nm) { name = nm; }
    void set_score(float s) { score = s; }
    void print() {
        //����thisָ�� 
        cout << this->name << "\t" << this->score << endl;
    }
    void print1() {
        //����thisָ�� 
        cout << get_name() << "\t" << get_score() << endl;
    }
};
int main() {
    student stu;
    //stu.name = "zhou";
    //stu.score = 77;
    stu.set_name("zzw");
    stu.set_score(88.);
    stu.print();    //print(&stu)
    stu.print1();
    cout << stu.get_name() << "-----" << stu.get_score() << endl;
}
#endif
//���������:operator<<,operator>>,friend��Ԫ����   ѧ����Ϣ���롢���
#if 0
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
class student {
    string name;
    float score=0.;

    //friend ��Ԫ��������
    friend ostream& operator<<(ostream& o, student s);
    friend istream& operator>>(istream& in, student& s);
};

ostream& operator<<(ostream& o, student s) {  
    cout << s.name << "\t" << s.score << endl;
    return o;
}
istream& operator>>(istream& in, student& s) {  //��������student& s��������ֵ����student s ����
    in >> s.name >> s.score;
    return in;
}

int main() {
    student stu;
    cin >> stu;     //operator>>(cin, stu)
    cout << stu;    //operator>>(cout, stu) 
}
#endif
//���������:operator[],operator+    �����±���ʡ���Ӧ���
#if 0
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
class point {
    double x, y;
public:
    point(double x_, double y_) {
        x = x_; y = y_;
    }
    double operator[](int i) const { //const����
        if (i == 0) return x;
        else if (i == 1) return y;
        else throw "����"; //�׳��쳣
    }
    double& operator[](int i) {
        if (i == 0) return x;
        else if (i == 1) return y;
        else throw "����";
    }
    /*point operator+(const point b) {
        return point(x + b[0], y + b[1]);
    }*/
};
point operator+(const point a, const point b) {
    return point(a[0] + b[0], a[1] + b[1]);
}
int main() {
    point p1(3.5, 7.9);
    cout << p1[0] << "\t" << p1[1] << endl;

    p1[0] = 8.8; p1[1] = 10.;
    cout << p1[0] << "\t" << p1[1] << endl; //p.operator[](0)

    point p2(2, 1);
    point p3 = p1 + p2; //operator+(p1,p2)
    //point p3 = p1 + p2; //p1.operator+(p2)
    cout << p3[0] << "\t" << p3[1] << endl;
}
#endif 

//��ģ�� Vector
#if 1
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

class student {
    string name;
    float score = 0.;
public:
    student(string n = "zz", float s = 0) {
        name = n; score = s;
    }
    //friend ��Ԫ��������
    friend ostream& operator<<(ostream& o, student s);
};
ostream& operator<<(ostream& o, student s) {
    cout << s.name << "\t" << s.score << endl;
    return o;
}

template <typename T>
class Vector {
    int n;
    int capacity;
    T* data;
public:
    Vector(int cap=3) {
        data = new T[cap];
        if (data == 0) { //����ʧ��
            n = 0; data = 0;
        }
        capacity = cap;
        n = 0;
    }
    void push_back(T e) { //element
        if (n == capacity) {
            cout << "��������\n";
            T* p = new T[2 * capacity];
            if (p) {
                for (int i = 0; i < n; i++) {
                    p[i] = data[i];
                }
                delete[] data;
                data = p;
                capacity = 2 * capacity;
            }
            else { return; }
        }
        data[n] = e;
        n++;
    }
    int size() {
        return n;
    }
    T operator[](int i) const {
        if (i < 0 || i >= n) throw"�±�Ƿ�";
        return data[i];
    }

};
int main() {
#if 0
#if 1
    Vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }   cout << endl;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }   cout << endl;
    v.push_back(6);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }   cout << endl;
#else
    Vector<string> v; //��ģ�� ʵ����
    v.push_back("h");
    v.push_back("e");
    v.push_back("l");
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }   cout << endl;
    v.push_back("l");
    v.push_back("o");
    v.push_back("z");
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }   cout << endl;
    v.push_back("z");
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\t';
    }   cout << endl;
#endif
#else
    Vector<student> v; //��ģ�� ʵ����
    v.push_back(student());
    v.push_back(student("xu", 65.));
    v.push_back(student("zhang", 85.));
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }   
    v.push_back(student("wang", 35.));
    v.push_back(student("jia", 15.));
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }   
#endif
}
#endif