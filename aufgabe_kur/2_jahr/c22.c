#include <stdio.h>
#include <unistd.h>
#include <liner.h>

int main(){
    	liner_init();
		pixel(30,60);
		rectangle(1,1,200,200,1);
		sleep(10);
		liner_exit();

}