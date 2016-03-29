#include <stdio.h>
#include <time.h>

int main(){
	time_t the_time;
	while (1) {
		printf("the time is %ld\n",time((time_t *)0));
		sleep(1);
	}
}
