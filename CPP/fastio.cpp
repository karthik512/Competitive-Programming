//Fast IO in C++
//Contains only the functions used for input and output

#define inchar			getchar_unlocked
#define outchar(x)		putchar_unlocked(x)

//Supports both negative and positive numbers...
template<typename T> void inPos(T &x) {
	x = 0;
	register T c = inchar();
	while((c < 48 || c > 57) && (c != '-'))
		c = inchar();

	bool neg = false; 
	if (c == '-')
		neg = true;
	
	for(;(c < 48 || c > 57); c = inchar()) ;
	
    for(;(c >= 48 && c <= 57); c = inchar())
		x = (x<<3) + (x<<1) + (c - 48);
	
    if(neg)
		x = -x;
}

template<typename T> void outPos(T n) {
	if(n < 0) {
		outchar('-');
		n *= -1;
	}
	char snum[65]; 
	int i = 0; 
	do {
		snum[i++] = (n%10) + 48;
		n /= 10;        
	} while(n);
	i = i - 1;
	while (i >= 0)
		outchar(snum[i--]);

	outchar('\n');
}
