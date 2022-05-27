#include <iostream>
using namespace std;

/*
   c++ 核心编程: 面向对象
   程序的内存模型,在c++中,将内存分为四个区域
   1.代码区:存放函数体的二进制代码,由操作系统进行管理
   2.全局区:存放全局变量和静态变量以及常量
   3.栈区: 由编译器自动分配释放,存放函数的参数值,局部变量等
   4.堆区: 由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
*/

/*
程序运行之后:

堆区: 
    1.由程序员分配释放,若程序不释放,程序结束后由操作系统回收
    2.在c++中主要利用new关键字开辟内存
*/

int* func(){
    // 下面这个指针在函数内部,本身也是局部变量,存放在栈区。不过new出来的地址存放在堆区;
    int* a = new int(10);
    return a;
}


int main()
{

    int *p = func();
    cout << *p << endl;
    cout << *p << endl;



   
   

    return 0;
}