/*
 Programa que pide 512MB de memoria
 Usado para verificar que los controles de memoria funcionan bien
 */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int size_array_128MB = 1024*1024*128;
	int num_of_arrays = 4; // 128MB * 4 = 512 MB

	char **wasted_memory;
	wasted_memory = (char**)malloc(sizeof(char*) * num_of_arrays);	

	int i,j;

	for (i = 0; i < num_of_arrays; i++) {
		fprintf(stdout, "Requesting 128 MB...");
		wasted_memory[i] = (char*)malloc(sizeof(char) * size_array_128MB);
		fprintf(stdout, " [OK]\n");
	}

	fprintf(stdout, "All memory granted.\n");

	for (i = 0; i < num_of_arrays; i++) {
		for (j = 0; j < size_array_128MB; j++) {
			wasted_memory[i][j] = 0;
		}
	}

	system("sleep 10");

	for (i = 0; i < num_of_arrays; i++) {
		free(wasted_memory[i]);
	}
	free(wasted_memory);

	return 0;
}
