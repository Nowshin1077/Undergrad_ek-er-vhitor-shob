#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace  std;

class strtype
{
    char *p;
    int len;
public:
    strtype(char *ptr)
    ~strtype();
    void show();
} ;
strtype::strtype(char *ptr)


