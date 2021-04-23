/*
Implement “string Kaput(int fizz, int buzz, int limit);”.  This method should return a comma-separated string of each digit from 1 to limit.  
Numbers which are a multiple of fizz should be replaced with “Fizz”, those of buzz should be replaced with “Buzz”, and multiples of both should be “FizzBuzz”.  
For example, a call of Kaput(2,3,11) should return “1,Fizz,Buzz,Fizz,5,FizzBuzz,7,Fizz,Buzz,Fizz,11”.
*/

using System;

namespace FizzBuzz
{
  class Program
  {
    static void Main(string[] args)
    {
    	string kaput = Kaput(2, 3, 11);
    	Console.WriteLine(kaput);
    }

    static string Kaput(int fizz, int buzz, int limit)
    {	
    	string kaput = "";

    	for (int i = 1; i <= limit; i ++) {
    		if(i != 1){kaput += ", ";}

      	if (i % fizz == 0 && i % buzz == 0) {kaput += "FizzBuzz";}
  			else if (i % fizz == 0) {kaput += "Fizz";}
  			else if (i % buzz == 0) {kaput += "Buzz";}
  			else {kaput += i.ToString();}
      }

      return kaput;
    }
  }
}