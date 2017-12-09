#include <stdio.h>
using namespace std;

int main() {
	int Cases;
	int Inputs;
	int goals[100000];
	int max;
	int smallest;

	scanf("%d", &Cases);

	for(int i = 0; i < Cases; i++) {

		scanf("%d", &Inputs);
		for(int j = 0; j < Inputs; j++) {
			scanf("%d", &goals[j]);
		}

		max = 0;
		smallest = goals[0];
		for(int j = 1; j < Inputs; j++) {
			if((goals[j] > smallest) && (goals[j] - smallest > max)) {
				max= goals[j] - smallest;
			}
			if(goals[j] < smallest) {
				smallest = goals[j];
			}
		}

		if(max == 0) {
			printf("UNFIT\n");
		}
		else {
			printf("%d\n", max);			
		}
	}
	return 0;
}