// this is a demo practice to see c program interaction with linux  kernel

#include<stdio.h>
#include<unistd.h>

int main(){ 
	printf("i am starting...\n");
	// loop for 30 sec /// 

	for( int i=1; i<=30; i++){
		sleep(1);

}
	printf(" I am finished\n");
	return 0;
}
