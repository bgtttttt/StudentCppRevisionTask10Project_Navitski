﻿#include "tasks.h"

/*	Task 02. An Exact Power of Two [точная степень двойки]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Необходимо определить, является ли данное число точной степенью двойки.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа int.
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - ответ на задание.
*
*	[ input 1]: 32
*	[output 1]: true
*
*	[ input 2]: 1
*	[output 2]: true
*
*	[ input 3]: 0
*	[output 3]: false
*
*	[ input 4]: 30
*	[output 4]: false
*
*	[ input 4]: -4
*	[output 4]: false
*/

bool task02(int number) {
	if (number <= 0) {
		return false;
	}
	return !(number & (number - 1));
}