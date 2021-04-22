/*
Implement “List<string> GetPhoneWords(string phoneNumber);” 
This method takes a string which contains a phone number and generates all the possible versions of 
it with the telephone’s letters (uppercase) substituted for the numbers. 
Non-numerical characters should be passed through to the output.  
Output the list in alphabetical order. 
For example, one output for 800-866-2665 is T00-TOO-COOL.  
*/

// Somewhere in the program

static void main(string[] args){
	string phoneNumber;
	// Somewhere in Main
	List<string> GetPhoneWords(phoneNumber);
	Console.WriteLine(List);   
}

static string GetPhoneWords(string phoneNumber)
{
	// string split phoneNumber
	string[] number = phoneNumber.Split("");
	string[] word = "";

	foreach(int i in number){
		for(int j, j < number.Length, j++){
			if (number[i] == "0"){word[j] += "0";}
			else if(number[i] == "1"){word[j] += "1";}
			
			/*slash for now "/" should be random 
				ex: 2 should be random A B C
					Random rnd = new Random();
					char randomChar = (char)rnd.Next('A','C'); 
			from -- https://riptutorial.com/csharp/example/28125/generate-a-random-character
			*/

			else if (number[i] == "2"){word[j] += "A/B/C";} 
			else if (number[i] == "3"){word[j] += "D/E/F";}
			else if (number[i] == "4"){word[j] += "G/H/I";}
			else if (number[i] == "5"){word[j] += "J/K/L";}
			else if (number[i] == "6"){word[j] += "M/N/O";}
			else if (number[i] == "7"){word[j] += "P/Q/R/S";}
			else if (number[i] == "8"){word[j] += "T/U/V";}
			else if (number[i] == "9"){word[j] += "W/X/Y/Z";}

			else if (number[i] == "("){pass;} 
			else if (number[i] == ")"){pass;} 
			else if (number[i] == "#"){pass;} 
			else if (number[i] == "*"){pass;}
			
			else {word[j] += "-";} // for .s, -s, _s, etc.
		}
	}

	Array.Sort(word);

	return word<string>;
}