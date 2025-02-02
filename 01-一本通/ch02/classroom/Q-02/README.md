# 第二章: 顺序结构程序设计

## 本章小结

- 1.在C++语言中，`=`作为赋值运算符，而不表示“等于”判断。
- 2.在C++表达式中，各运算符参与运算的先后顺序不仅要遵守运算符优先级别的规定，还要受运算符结合性的制约，以便确定是自左向右进行运算还是自右向左进行运算。
- 3.常量是指在程序中使用的一些具体的数、字符。在程序运行过程中，其值不能被更改。
- 4.变量代表了一个存储单元，其中的值是可以改变的，因此称为变量。
- 5.C++语言提供了丰富的数据类型，本节介绍几种基本的数据类型：整型、实型、字符型。
- 6.对于普通数据的输入输出，cin和cout比较方便，而在格式化方面，scanf和printf比较容易。

## 课题练习 2: 整数的和

#### 【题目描述】

求3个整数的和。

输入a、b、c这3个整数，求它们的和。

#### 输入输出要求

【输入】

3个整数。

【输出】

三个数的和。

#### 测试用例

【输入】

1 2 3

【输出】

6

## 分析

使用cin语句输入三个整数变量，求出它们的总和之后使用cout语句输出。

## 题目代码

```c++
#include <iostream>        //使用cin,cout，须调用iostream库
using namespace std;
int main()
{
    int a,b,c;             //定义三个变量
    cin>>a>>b>>c;          //输入a、b、c的值
    int sum=a+b+c;         //求出a、b、c的总和
    cout<<sum<<endl;       //输出结果
    return 0;
}
```

### 测试用例设计

本题简单，不需要单独设计测试用例
