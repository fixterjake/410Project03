/*
 * tester.cpp
 *
 *  Created on: Oct 10, 2019
 *      Author: fixterjake
 */

#include <vector>
#include <thread>
#include "../usr_includes/tester.h"
#include "../usr_includes/print_ts.h"

std::vector<std::thread> threads;


/*
 * starts cancelable threads
 * string s			-the string to print
 * numThreads 		-the number of threads to start
 * wp 				-which print statement should be used
 * numTimesToPrint 	-the number of PRINT statements each thread will call
 * millisecond_delay- how long (in milliseconds) to wait between prints
 */
void startThreads(std::string s, int numThreads, WHICH_PRINT wp, int numTimesToPrint, int millisecond_delay) {
	for (int i = 0; i < numThreads; i++) {

	}
}

/*
 * if bCanceled== true then causes all running threads to print USER_CHOSE_TO_CANCEL and then exit
 * if false then just reset logic used to cancel threads
 */
void setCancelThreads(bool bCancel) {
	if (bCancel) {
		for (std::thread &thread : threads) {
			thread.join();
		}
	}
}

/*
 * waits for all threads to complete
 */
void joinThreads() {

}
