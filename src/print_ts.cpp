/*
 * print_ts.cpp
 *
 *  Created on: Oct 10, 2019
 *      Author: fixterjake
 */

#include <iostream>
#include <thread>
#include <mutex>
#include "../usr_includes/print_ts.h"

void PRINT1(std::string &txt) {
	std::lock_guard<std::mutex> guard();
	std::cout << txt << std::endl;
}

void PRINT2(std::string &txt, std::string &txt1) {
	std::lock_guard<std::mutex> guard();
	std::cout << txt << txt1 << std::endl;
}

void PRINT3(std::string &txt, std::string &txt1, std::string &txt2) {
	std::lock_guard<std::mutex> guard();
	std::cout << txt << txt1 << txt2 << std::endl;
}

void PRINT4(std::string &txt, std::string &txt1, std::string &txt2, std::string &txt3) {
	std::lock_guard<std::mutex> guard();
	std::cout << txt << txt1 << txt2 << txt3 << std::endl;
}

void PRINT5(std::string &txt, std::string &txt1, std::string &txt2, std::string &txt3, std::string &txt4) {
	std::lock_guard<std::mutex> guard();
	std::cout << txt << txt1 << txt2 << txt3 << txt4 << std::endl;
}


