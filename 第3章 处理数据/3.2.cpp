/*编写一个程序，要求以几英尺几英寸的方式输入其身高,
 * 并以磅为单位输入其体重。（使用3个变量来存储这些信息。）
 * 该程序报告其BMI（Body Mass Index ,体重指数）。
 * 为了计算BMI，该程序以英寸的方式指出用户的身高（一英尺为十二英寸），
 * 并将以英寸为单位的身高身高转换为以米为单位的身高（1英寸=0.0254米）。
 * 然后，将以磅为单位的体重转换为千克为单位的体重（1千克=2.2磅）。
 * 最后，计算相应的BMI=体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //换算关系
    const int CIC=12;//定义转换因子 英尺换算成英寸
    const double CIM=0.0254;//定义转换因子英寸到米
    const double CPK=2.2;//定义转换因子 磅到kg
    //创建3个变量
    double inch=0.0,in=0.0,pound=0.0;
    cout<<"请输入你的身高 几英尺 ：";
    //赋值3个变量
    cin>>inch;
    cout<<"请输入你的身高 几英寸 ：";
    cin>>in;
    cout<<"请输入你的体重 几磅 ：";
    cin>>pound;
    /*计算BMI
     * BMI=体重（千克）除以身高（米）的平方
     * */
    double Height=0.0,Kg=0.0,newval=0.0;
    Height=CIM*(inch*CIC)+CIM*in;
    Kg=pound/CPK;
    newval=Kg/(Height*Height);
    cout<<"您的BMI为："<<newval;
    return 0;
}