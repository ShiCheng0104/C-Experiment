#include <iostream>
#include "MYSTRING.h"
using namespace std;

MYSTRING :: MYSTRING(const char *t){//在类体外定义构造函数, 必须加类名::限定，无返回类型
	    int  k;
	    for(k =0; t[k]!=0; k++);
	    s=(char *)malloc(k+1);         //s等价于this->s
	    for(k=0; (s[k]=t[k])!=0; k++);
	}
MYSTRING ::~ MYSTRING( ) {//在类体外定义析构函数, 必须加类名::限定，无返回类型	   
	    if(s == 0) return;        
        cout << "Destructor "<< s<<  "called" << endl;
        free(s);
        s = 0;
	}
    
int MYSTRING::strlen()
{
    int i=0;
    for(;s[i]!=0;i++);
    return i;
}

int main()
{
    MYSTRING s1("Hello");
    MYSTRING s2("World");
    cout << s1.strlen() << endl;
    s1.~MYSTRING(); //调用析构函数释放内存
    return 0;
}
