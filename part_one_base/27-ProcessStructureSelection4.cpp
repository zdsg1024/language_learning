#include <iostream>
using namespace std;
int main()
{
    /*
      程序流程结构有三种：
      顺序结构: 所有的代码一条一条执行,都是顺序结构
      选择结构: 判断条件是否满足,有选择的执行相应代码
      循环结构: 判断条件是否满足循环之行某段代码
    */

    /*
      选择结构-if 嵌套if语句
      语法：if (condition1){
          if (condition2){
             xxx
          }
      }

    */

    int score = 82;
    if (score >= 60)
    {
        if (score > 90)
        {
            cout << "成绩优异" << endl;
        }
        else
        {
            cout << "成绩合格" << endl;
        }
    }

    return 0;
}