//�������ķ�������ֱ����
#include<iostream>
#include<math.h>
using namespace std;
class CPoint        //����һ������Point
{
private:
	int X,Y;              //������� 
public:
	CPoint(int xx,int yy)    //���캯�� 
		{
			X=xx;
			Y=yy;
		}
	CPoint(CPoint &p);    //�������캯�� 
	int GetX()
		{
			return X;      //ȡX������ 
		}
	int GetY()
		{
			return Y;      //ȡY������ 
		}
};
CPoint::CPoint(CPoint &p)         //�������캯����ʵ�� 
{
	X=p.X;
	Y=p.Y;
	cout <<"POint �������캯��������"<<endl; 
}

class CDistance
{
private:
	CPoint p1,p2;        //CPoint����Ϊ���ݳ�Ա
	double dist;         //��������
public:
	CDistance(CPoint xp1,CPoint xp2);    //���캯��
	double GetDis()
		{
			return dist;       //��ȡ���� 
		} 
};
CDistance::CDistance(CPoint xp1,CPoint xp2):p1(xp1),p2(xp2)
{
	cout <<"Distance���캯��������"<<endl;   
	double x=double(p1.GetX() -p2.GetX() );
	double y=double(p1.GetY() -p2.GetY() );
	dist =sqrt(x*x+y*y);  //��ʼ�����ݳ�Աdist
}
int main()
{
	CPoint myp1(1,1),myp2(4,5);       //�������� 
	CDistance myD(myp1,myp2);          //�������myD 
	cout <<"The distance is :"<<myD.GetDis()<<endl;    //myD���ó�Ա����GetDis���� 
	return 0;
}


/*������
	Point ��Ŀ������캯����������4�Σ��ڵ���Distance���캯��ʱ��
	ʵ�ε�myp1��myp2��ֵ�����β�xp1��xp2ʱ������2�Σ����⣬xp1��
	xp2��ʼ����Ƕ����p1��p2ʱ�ֵ�����2�Ρ� 
*/
