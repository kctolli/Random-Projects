/*

fizzbuzz.c

Copyright 2021 Kyle Tolliver

This program is free software : you can redistribute it and /or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.If not, see < https://www.gnu.org/licenses/>.

*/

#include <iostream>
using namespace std;

int main() {
	int i;

	for (i = 1; i < 101; i = i + 1) {
		if (i % 3 == 0 and i % 5 == 0) {printf("FizzBuzz\n"); }
		else if (i % 3 == 0) {printf("Fizz\n"); }
		else if (i % 5 == 0) {printf("Buzz\n"); }
		else {printf(i); printf("\n");}
	}
	return 0;
}