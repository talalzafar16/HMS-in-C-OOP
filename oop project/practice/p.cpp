#include<iostream>
using namespace std;

class hello{
    private:
    static int a;
    public:
    hello(){
        a++;
    }
    int get(){
        return a;
    }
};
int hello::a=0;
int main(){
    hello h1,h2,h3;
    cout<<"Number is "<<h1.get() <<endl;
	cout<<"Number is "<<h2.get() <<endl;
	cout<<"Number is "<<h3.get() <<endl;
//	cout<<"Number is "<<h4.get_num() <<endl;
	
    return 0;
}
