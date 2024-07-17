#include<stdio.h>
void valid(int oc,int op,char *str,int n, int idx){
	if((oc == n/2)||(idx==n)){
		printf("%s\n",str);
	}
	else{
		if(op<n/2){
			str[idx] = '(';
			valid(oc,op+1,str,n,idx+1);}
		if(oc<op){
			str[idx] = ')';
			valid(oc+1,op,str,n,idx+1);}
	}
}
int main() {
	int n = 6;
	char str[n+1];
	valid(0, 0, str, n, 0);
	return 0;
}

