﻿#include "tasks.h"

/*	Task 01. Squares of Natural Numbers [квадраты натуральных чисел]
*
*	По заданному натуральному числу распечатайте все квадраты чисел,
*	не превосходящие данного натурального числа, в порядке возрастания.
*	В случае некорректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа int.
*
*	Формат выходных данных [output]
*	Функция должна возвратить строку, которая содержит ответ на задание.
*
*	[ input 1]: 50
*	[output 1]: "1 4 9 16 25 36 49"
*
*	[ input 2]: -50
*	[output 2]: "0"
*
*	[ input 3]: 0
*	[output 3]: "0"
*/

string task01(int number) {
	if (number <= 0) {
		return "0";
	}
	string s = "1";
	for (int i = 2; i <= sqrt(number); i++) {
		s += " " + to_string(i * i) ;
	}
	return s;
}