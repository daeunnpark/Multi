#include "cse320_functions.h" 
#include <stdio.h>
#include <unistd.h>

// test.c
//int addr_count=0;
//int files_count=0; // opened files
//int N=5;
//int reapflag=0;
//sem_t mutex;


struct addr_in_use addr_array[25];
struct files_in_use files_array[5];


void printArray1(struct addr_in_use* ptr){
	int j=0;
	for(j=0; j<25;j++){
		printf("At %d addr :%p, count: %d\n",j+1, (ptr+j)->addr, (ptr+j)->ref_count);
	}
}


void printArray2(struct files_in_use* ptr){
	int j=0;

	for(j=0; j<5;j++){
		printf("At %d filename :%s, count: %d, FP: %p ",j+1, (ptr+j)->filename, (ptr+j)->ref_count, (ptr+j)->fptr);

		if((ptr+j)->fptr!=NULL){
			printf("FD: %d\n",fileno((ptr+j)->fptr));

		}
		else {
			printf("FD:  \n"); 


		}
	}
}






int main(){

	// PART2 AND PART3

	cse320_set(addr_array, files_array);

	/*DO NOT CHANGE ABOVE
	  YOUR TEST START FROM HERE*/

	printf("TEST------\n");

	/*		void *p;// = cse320_malloc(40);

			for(int j=0; j<25; j++){
			p = cse320_malloc(30); 
			}

			cse320_free(p);
			cse320_free(p); 
			for(int j=0; j<5; j++){
			p = cse320_malloc(30); 
			}

			cse320_malloc(30);
			cse320_malloc(30);
			cse320_malloc(30); 
			printArray1(addr_array); 
	 */

	/*

	   printf("opened: %d\n",fileno(cse320_fopen("A")));
	   printf("opened: %d\n", fileno(cse320_fopen("A"))); 
	   cse320_fclose("A");
	//printArray2(files_array); 	
	cse320_fclose("A");
	cse320_fopen("B");
	cse320_fopen("C"); 
	cse320_fopen("D"); 
	cse320_fopen("E"); 
	//	cse320_fclose("A");

	printf("opened: %d\n",fileno(cse320_fopen("G")));

	cse320_fclose("C");
	printf("opened: %d\n",fileno(cse320_fopen("Z"))); 
	cse320_fclose("D");
	cse320_fopen("Q");
	printArray2(files_array);  

	cse320_fclose("E");
	cse320_fopen("RR");
	//printArray2(files_array);
	cse320_fclose("RR");
	cse320_fclose("RR"); 


	 */
	//printArray2(files_array); 

	/*
	   cse320_fork();

	   sleep(cse320_gettimer());// Default timer N = 5
	 
*/





	/* DO NOT CHANGE ABOVE
	   YOUR TEST FINISHES AFTER THIS*/
	cse320_clean();  



	//	printArray1(addr_array); 


	return 1;
}



