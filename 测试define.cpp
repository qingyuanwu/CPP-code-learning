#include <iostream>
using namespace std;

#define f(x) x*x
#define ff(x) ((x)*(x))

int main(){
	
	int a = 6, b = 2,c,c_correct;
	
	c = f(a) / f(b);
	cout<<"c is :"<<c<<endl;
	
	c_correct = ff(a) / ff(b);
	cout<<"the correct value of c is :"<<c_correct<<endl;
	
	return 0;
	
	
}
/*
#define f(x) x*x
输出结果为 c = 6*6/2*2
按照运算规律从左到右依次计算，最后等于36

#define ff(x) ((x)*(x))
输出结果为 c = (6*6)/(2*2)

*/
