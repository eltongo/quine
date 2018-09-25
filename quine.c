#include <stdio.h>
int main() {
	char* prog = "#include <stdio.h>%cint main() {%c%cchar* prog = %c%s%c;%c%cint n=10,t=9,q=34;%c%cprintf(prog,n,n,t,q,prog,q,n,t,n,t,n);%c}";
	int n=10,t=9,q=34;
	printf(prog,n,n,t,q,prog,q,n,t,n,t,n);
}
