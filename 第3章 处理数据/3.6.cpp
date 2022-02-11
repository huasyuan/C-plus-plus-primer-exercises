 /* 6.编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），
 * 然后指出汽车耗油量为一加仑的里程。如果愿意，也可以让程序要求用户以
 * 公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的结果
 * -即每100公里的耗油量（升）。s
 * */

#include "iostream"
 using namespace std;
 int main(){
     //先创建几个变量
     double YinLi=0;
     double HaoYouLiang=0;
     cout<<"请输入英里：";
     cin>>YinLi;
     cout<<"请输入耗油量：";
     cin>>HaoYouLiang;
     cout<<YinLi/HaoYouLiang;
     return 0;
     //这一小题对于我们可能有点陌生，所以先意思意思一下
 }
