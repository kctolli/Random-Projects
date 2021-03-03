
/*

fizzbuzz.cs

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

using System;

namespace HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
    	for (int i = 1; i < 101; i ++) {
      		if (i % 3 == 0 && i % 5 == 0) { Console.WriteLine("FizzBuzz"); }
			else if (i % 3 == 0) { Console.WriteLine("Fizz"); }
			else if (i % 5 == 0) { Console.WriteLine("Buzz"); }
			else { Console.WriteLine(i); }
      }
    }
  }
}
