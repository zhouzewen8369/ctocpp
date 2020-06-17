#define _CRT_SECURE_NO_WARNINGS
/*
Created by zhouzw in 2020-6-9
From C to C++   
https://www.bilibili.com/video/BV16t411h7bD
*/

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
//C++中流的概念很重要，stream！！

//引用变量，外号或小名；引用形参
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
void swap1(int* a, int* b) {    //指针  &放进函数里来
    int t = *a;
    *a = *b;
    *b = t;
}
void swap2(int& a, int& b) {    //引用形参
    int t = a;
    a = b;
    b = t;
}
void swap3(int a, int b) {      //这样要的还是形参的地址
    int* pa = &a;
    int* pb = &b;
    int t = *pa;
    a = *pb;
    b = t;
}

int main() {
    //引用变量
    int A = 3;
    int& a = A;
    a = 5;
    cout << A << endl;

    //引用形参
    int B = 7;      cout << A << "\t" << B << endl;
    swap0(A, B);    cout << A << "\t" << B << endl;
    swap1(&A, &B);  cout << A << "\t" << B << endl;    
    swap2(A, B);    cout << A << "\t" << B << endl;
    swap3(A, B);    cout << A << "\t" << B << endl;
}
#endif

//默认形参；函数重载
#if 0
//默认形参，对形参设置默认值
//add 三个数相加，两个已给定; print(str,n=1) n次打印str
//函数重载，C++允许函数同名，只要其形参类型不同，系统自动进行判断
//函数名+形参设定= 函数签名，返回类型不能作为区分函数的依据
//int版add, double版add
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
//函数模板 template<typename T>
#if 0
//用template关键字增加一个模板头，把数据类型变成类型模板参数
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
//string类
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
//vector<int> vector类 对比最后的 Vector类模板
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
//复习指针
#if 0 
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[] = { 1, 2, 3, 4 }; //注意格式 int arr[] = { };
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
//动态内存分配 new
#if 0 
/*  动态内存分配 new申请-delete释放
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
//学生信息程序实现
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
        cout << "输入姓名、成绩" << endl;
        cin >> stu.name >> stu.score;
        if (stu.score < 0)  break;
        stus.push_back(stu);
        sum += stu.score;
        if (stu.score > max) max = stu.score;
        if (stu.score < min) min = stu.score;
    }
    cout << "姓名---成绩" << endl;
    for (int i = 0; i < (int)stus.size(); i++) {
        stus[i].print();
    }
    float average = sum / stus.size();
    cout << "最高分:" << max
        << ",最低分:" << min
        << ",平均分:" << average << endl;
    #endif
}
#endif 
//隐含指针this；class与struct，访问控制private与public(与外部的接口)；构造函数
#if 0
#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//class里的成员默认是私有的private
//struct里的成员默认是公开的public
struct student {
private://访问控制
    string name;
    float score = 0.;
public: //接口
    student() { //默认构造函数，函数名和类名相同，不带参数
        cout << "构造函数" << endl;
    }
    string get_name() { return name; }
    float get_score() { return score; }
    void set_name(string nm) { name = nm; }
    void set_score(float s) { score = s; }
    void print() {
        //隐含this指针 
        cout << this->name << "\t" << this->score << endl;
    }
    void print1() {
        //隐含this指针 
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
//运算符重载:operator<<,operator>>,friend友元函数   学生信息输入、输出
#if 0
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
class student {
    string name;
    float score=0.;

    //friend 友元函数！！
    friend ostream& operator<<(ostream& o, student s);
    friend istream& operator>>(istream& in, student& s);
};

ostream& operator<<(ostream& o, student s) {  
    cout << s.name << "\t" << s.score << endl;
    return o;
}
istream& operator>>(istream& in, student& s) {  //引用类型student& s，不能用值参数student s ！！
    in >> s.name >> s.score;
    return in;
}

int main() {
    student stu;
    cin >> stu;     //operator>>(cin, stu)
    cout << stu;    //operator>>(cout, stu) 
}
#endif
//运算符重载:operator[],operator+    数组下标访问、对应相加
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
    double operator[](int i) const { //const函数
        if (i == 0) return x;
        else if (i == 1) return y;
        else throw "错误"; //抛出异常
    }
    double& operator[](int i) {
        if (i == 0) return x;
        else if (i == 1) return y;
        else throw "错误";
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

//类模板 Vector
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
    //friend 友元函数！！
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
        if (data == 0) { //分配失败
            n = 0; data = 0;
        }
        capacity = cap;
        n = 0;
    }
    void push_back(T e) { //element
        if (n == capacity) {
            cout << "增加容量\n";
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
        if (i < 0 || i >= n) throw"下标非法";
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
    Vector<string> v; //类模板 实例化
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
    Vector<student> v; //类模板 实例化
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