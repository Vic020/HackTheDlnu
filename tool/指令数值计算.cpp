//********************************************
//      hack the dlnu 指令计算
//          version 0.1
//              by Vic_
//      如需修改算法，请保留此行，自行添加说明
//********************************************


#include <iostream>
#include <string>
using namespace std;


//命令计算 计算每一个命令的值，按照权值 26，比如，a     1*26^0
//                                                aa    1*26^1 + 1 *26^0
//                                                az    1*26^1 + 26*26^0
long long calculatecommand(string inputcommand)
{
	long long result = 0 ;
	long long power = 1;
	for(int i = inputcommand.length() -1 ; i >=0  ; i--)
	{
		result +=  power * (inputcommand[i] - 'a' + 1 );
		power *= 26;
	}
	return result;
}


void initprint()
{
    cout<<"命令计算器\n    为Hack The Dlnu 使用"<<endl
        <<"                 by Vic_"<<endl
        <<"----------------------------------"<<endl
        <<endl
        <<"命令计算 计算每一个命令的值，按照权值 26，比如，a     1*26^0"<<endl
        <<"                                                aa    1*26^1 + 1 *26^0"<<endl
        <<"                                                az    1*26^1 + 26*26^0"<<endl
        <<"支持13位命令"<<endl
        <<"----------------------------------"<<endl;

}

int main ()
{
    initprint();
	while(1)
	{
	    string inputcommand;
	    cout<<"输入命令 ：";
        cin>>inputcommand;
        cout<<"\t\t\t\t命令值为："<<calculatecommand(inputcommand)<<endl;
	}
	return 0;
}
