#include <stdio.h>

void add_score(int *score){
	*score = *score + 5;
	printf("Score diubah ke: %d\n", *score);
}

int main(){
	int score = 0;
	
	printf("Score sebelum diubah: %d\n", score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	printf("Score setelah diubah: %d\n", score);
}
