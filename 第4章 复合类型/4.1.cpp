//1.编写一个c++程序，如下述输出示例的那样请求并显示信息：
/*What is your first name? Betty Sue
 * What is your last name? Yewe
 *What letter grade do you deserve? B
 *What is your age? 22
 * Name:Yewe,Betty Sue
 * Grade:C
 * Age:22
 * */


#include "iostream"
#include "string"
using namespace std;
int main(){
    cout<<"你firstname是什么？";
    string Firstname;
    cin>>Firstname;
    cout<<"你lastname是什么？";
    string Lastname;
    cin>>Lastname;
    cout<<"输入你的分数：";
    char grade=0;
    cin>>grade;
    cout<<"输入你的年龄：";
    short age;
    cin>>age;


    return 0;
}