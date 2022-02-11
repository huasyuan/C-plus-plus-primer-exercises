/*第3章 Page68
 *  编写一个小程序。要求用户使用一个整数指出自己的身高（单位为英寸），
 *  然后将身高转换为英尺和英寸。
 *  该程序使用下划线字符来指示输入位置。
 *  另外，使用一个const符号常量来表示转换因子
 *  。*/
#include <iostream>
using namespace std;
const double Changeval=0.083;//我理解的转换因子是英尺与英寸的换算关系
int main()
{
    double inch=0.0;
    cout<<"请输入你的身高(单位:英寸)：_____\b\b\b\b\b";
    cin>>inch;
    cout<<inch<<"英寸转换为英尺的结果为:"<<Changeval*inch<<"英尺"<<" 转换为英寸的结果为: "<<inch<<"英寸"<<endl;
    return 0;
}
/*写到这里我emo了 不知道理解对没有
 * 望评论 望纠错
 *时间：2022年02月02日19:17:02
 * 作者花思源
 * */

