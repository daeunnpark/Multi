#ifndef LIB   
#define LIB 

#include <stddef.h>
#include <stdio.h>

struct addr_in_use{
	void* addr;
	int ref_count;// = 0;
};


struct files_in_use{
	char* filename;
	int ref_count;// = 0; 
	FILE *fptr; 
};

void* cse320_set(struct addr_in_use* addr_array2, struct files_in_use* files_array2);
void *cse320_malloc(size_t size);
void cse320_free(void* ptr);

FILE *cse320_fopen(char *filename);
void cse320_fclose(char *filename);

void cse320_clean();

void cse320_fork();
void cse320_reap(int signum);
void cse320_settimer1(int newN);
int cse320_gettimer1();

void *cse320_setPidList(int* pidList);
void cse320_fork_thread();
void *cse320_reap_thread();
void cse320_settimer2(int newN); 
int cse320_gettimer2(); 




#endif
