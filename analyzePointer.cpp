#include<iostream>
using namespace std;
void analyze_pointer(int *ptr)
{
        cout<<"Memory Location: "<<ptr<<"\nValue: "<<*ptr<<endl;
}
int main()
{
        int iValue = 2, *ptr = new int(5);
        analyze_pointer(&iValue);
        analyze_pointer(ptr);
}

