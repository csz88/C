# include <iostream.h>
	# include <math.h>
	
	void main()
	{
	float a, b, c;
	float area, s;
	cout<<"���������ߵ�ֵa, b, c:";
	cin>>a>>b>>c;
	s = (a + b + c)/2;
	area = sqrt(s * (s - a)*(s - b)*(s - c));
	cout<<"���������S="<<area<<endl;
	}
	/*
	���н����
	���������ߵ�ֵa, b, c:3 4 5
	���������S=6
	Press any key to continue
	*/
