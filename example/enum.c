#include <stdio.h>
enum DAY {
	MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;

int main(int argc, char * argv[]) {
	for(day = MON; day <= SUN; day++) {
		printf("enum element: %d\n", day);
	}

}
