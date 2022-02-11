//4.编写一个程序，要求用户以整数方式输入秒数
// （使用long或long long变量存储），然后以
// 天、小时、分钟和秒的方式显示这段时间。
// 使用符号常量来表示每天有多少小时、
// 每小时有多少分钟以及每分钟有多少秒。
// 该程序的输出应与下面类似：
//Enter the number of seconds:3160000
//3160000 seconds = 36 days,17 hours,46 minutes,40 seconds

#include<iostream>
using namespace std;
int main(){
    //创建常量
    const int Seconds_To_Minutes =60;
    const int Seconds_To_Hours=60;
    const int Hours_To_Days=24;
    //创建变量
    long input=0;//input为用户输入的秒数
    cout<<"请输入秒数：";
    cin>>input;
    int Minutes=0,Hours=0,Seconds=0,Days;
    Days=input/(Seconds_To_Minutes*Seconds_To_Hours*Hours_To_Days);
    Hours=input/(Seconds_To_Minutes*Seconds_To_Hours)-Days*Hours_To_Days;
    Minutes=input/(Seconds_To_Minutes)-(Hours*Seconds_To_Minutes)-Days*Seconds_To_Minutes*Hours_To_Days;
    Seconds=input-Days*Hours_To_Days*Seconds_To_Hours*Seconds_To_Minutes-Hours*Seconds_To_Minutes*Seconds_To_Minutes-Minutes*Seconds_To_Minutes;
    cout<<input<<"秒等于"<<Days<<"天"<<Hours<<"小时"<<Minutes<<"分钟"<<Seconds<<"秒。";

    //好家伙我看到这一堆屎山代码我陷入了沉思....
    return 0;
}