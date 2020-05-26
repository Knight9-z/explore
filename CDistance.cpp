//用组合类的方法定义直线类
#include<iostream>
#include<math.h>
using namespace std;
class CPoint        //定义一个点类Point
{
private:
	int X,Y;              //点的坐标 
public:
	CPoint(int xx,int yy)    //构造函数 
		{
			X=xx;
			Y=yy;
		}
	CPoint(CPoint &p);    //拷贝构造函数 
	int GetX()
		{
			return X;      //取X的坐标 
		}
	int GetY()
		{
			return Y;      //取Y的坐标 
		}
};
CPoint::CPoint(CPoint &p)         //拷贝构造函数的实现 
{
	X=p.X;
	Y=p.Y;
	cout <<"POint 拷贝构造函数被调用"<<endl; 
}

class CDistance
{
private:
	CPoint p1,p2;        //CPoint对象为数据成员
	double dist;         //两点间距离
public:
	CDistance(CPoint xp1,CPoint xp2);    //构造函数
	double GetDis()
		{
			return dist;       //获取长度 
		} 
};
CDistance::CDistance(CPoint xp1,CPoint xp2):p1(xp1),p2(xp2)
{
	cout <<"Distance构造函数被调用"<<endl;   
	double x=double(p1.GetX() -p2.GetX() );
	double y=double(p1.GetY() -p2.GetY() );
	dist =sqrt(x*x+y*y);  //初始化数据成员dist
}
int main()
{
	CPoint myp1(1,1),myp2(4,5);       //定义点对象 
	CDistance myD(myp1,myp2);          //定义对象myD 
	cout <<"The distance is :"<<myD.GetDis()<<endl;    //myD调用成员函数GetDis（） 
	return 0;
}


/*分析；
	Point 类的拷贝构造函数被调用了4次，在调用Distance构造函数时，
	实参点myp1和myp2的值传给形参xp1，xp2时调用了2次；另外，xp1、
	xp2初始化内嵌对象p1和p2时又调用了2次。 
*/
