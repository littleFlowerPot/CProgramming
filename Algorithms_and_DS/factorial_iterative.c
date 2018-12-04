#include <stdio.h>
#include <assert.h>

double fact(n){
	if(n == 0 || n == 1)
		return 1;
	else{
		int result = n;
		for (int i = n - 1; i >0; --i)
			result = result * i;
		return result;
	}
}


int main(){
	assert(fact(0) == 1);
	assert(fact(1) == 1);
	assert(fact(2) == 2);
	assert(fact(3) == 6);
	assert(fact(4) == 24);
	assert(fact(5) == 120);
	assert(fact(10) == 3628800);
	system ("pause");
	return 0;
}
	
	

	
