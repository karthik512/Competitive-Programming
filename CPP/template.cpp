#include <bits/stdc++.h>

#define MAX             100002
#define LIM             300002
#define MOD             1000000007
#define gcul            getchar_unlocked
#define outchar(x)      putchar_unlocked(x)
#define LL              long long int

using namespace std;

LL A[MAX];
LL T,N;

//template<typename T> T ip(){ T n = 0 ......}
inline LL ip()
{
    LL n = 0;
    register int ch = gcul();
    while((ch < 48 || ch > 57) && (ch != '-'))
        ch = gcul();
    
    bool neg = false;
    if(ch == '-') neg = true;
    
    while(ch >= 48 && ch <= 57){
        n = (n<<3) + (n<<1) + (ch-48);
        ch = gcul();
    }
    
    if(neg)
        n = -n;
    
    return n;
}

int main() {
    T = ip();
    
    while(T--)
    {
        
    }
	
	return 0;
}
