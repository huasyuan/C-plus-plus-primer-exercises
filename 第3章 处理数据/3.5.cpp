/*5.编写一个程序，要求用户输入全球当前的人口和美国当前的人口
 * （或其他国家的人口）。将这些信息存储在long long变量中，
 * 并让程序显示美国（或其他国家）的人口占全球人口的百分比。
 * 该程序的输出与下面类似：
 *Enter the world's population:6898758899
 *Enter the population of the US:310783781
 * The population of the US is 4.50492% of the world population.
 */

#include "iostream"
using namespace std;
int main(){
    //先创建变量
    long The_Worlds_Population=0,The_Population_Of_CHIAN=0;//常识告诉我们用long
    cout<<"请输入世界总人口:";
    cin>>The_Worlds_Population;
    cout<<"请输入中国总人口：";
    cin>>The_Population_Of_CHIAN;
    //开始计算得出结果
    cout<<"中国总人口占世界人口："<<double(The_Population_Of_CHIAN)/double(The_Worlds_Population)*100<<"%";
    return 0;
}
//总的来说这道题应该是第三章最简单的
//2022年02月11日12:54:48