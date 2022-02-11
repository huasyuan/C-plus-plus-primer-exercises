/*要求用户输入小时数和分钟数 然后传给一个void函数 拼接在一起输出结果*/
#include<iostream>
using namespace std;
void a(int,int);
int main(){
    cout<<"输入小时数：";
    int hours,minutes=0;
    cin>>hours;
    cout<<"输入分钟数：";
    cin>>minutes;
    a(hours,minutes);
    return 0;
}
void a(int h=0,int m=0){
    cout<<"Time: "<<h<<":"<<m;
}