/*
 * 3.编写一个程序，要求用户以度分秒的方式输入一个纬度，
 * 然后以度为单位显示该纬度。1度为60分，1分等于60秒，
 * 请以符号常量的方式表示这些值。对于每个输入值，
 * 应使用一个独立的变量存储它。下面是该程序运行时的情况：
 *
 *
 * Enter a latitude in degrees,minutes,and seconds:
 * First,enter the degrees:37
 * Next,enter the minutes of arc:51
 * Finally,enter the seconds of arc:19
 * 37 degrees,51 minutes,19 seconds =37.8553 degrees
 */

#include <iostream>
using namespace std;
int main(){
    //第一步定义转换因子 文化自信啊，xdm，我带头用拼音
    const int Du_to_Fen = 60;
    const int Fen_to_Miao = 60;
    //创建两个整数型变量，以便获取用户输入的值
    cout<<"以度分秒为单位输入纬度："<<endl;
    float Du=0.0,Fen=0.0,Miao=0.0;
    cout<<"请输入度：";
    cin>>Du;
    cout<<"请输入分：";
    cin>>Fen;
    cout<<"请输入秒：";
    cin>>Miao;
    //结果处
    cout<<Du<<"度，"<<Fen<<"秒，"<<Miao<<"秒，等于"<<Du+(Fen/Du_to_Fen+(Miao/Fen_to_Miao)/Du_to_Fen);
    //分别输入作者示例的数值 带入 得出结果一模一样
    /* Du----37
     * Fen----51
     * Miao----19
     * */
    return 0;
}