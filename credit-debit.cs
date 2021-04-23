using System;
using System.Collections.Generic;

class Solution
{
    /*
        Problem Statement

        You are working for a financial institution, and you have been tasked with writing a module that will take an initial account balance, along with a list of that day's transactions, and return the ending balance for the day.
        
        Each transaction will be either a credit, which adds funds to the account, or a debit, which removes funds from the account. If a debit exceeds the available funds at the time, then the account balance will go negative. You will be given an startingBalance, the initial account balance.
        
        You will also be given a transactions, the list of transactions for the day. Each element of transactions will be in the form "type amount" (quotes added for clarity). Each type will be 'C' or 'D', for credit or debit, respectively. Each amount will be an integer between 1 and 1000000, inclusive, with no leading zeros. You are to return an representing the ending balance after processing all of the transactions.
        
        
        Please implement the ProcessTransactions(..) method. You may only alter the code in the ProcessTransactions(..) method. Feel free to review the rest of the code, but please do not alter it. 
        */

    private static int ProcessTransactions(int startingBalance, String[] transactions)
    {   
        // Your code here
        int solution = startingBalance; // set here
        String[] split = transactions[0].Split(' '); //string split by space
        for(int j = 0; j < split.Length; j += 2){   
            if (split[j] == "C"){solution += int.Parse(split[j + 1]);}
            else {solution -= int.Parse(split[j + 1]);}
        }    

        return solution;
    }

    /* *********************************** */
    /* DO NOT edit code below this comment */
    /* *********************************** */

    struct Problem
    {
        public int StartingBalance;
        public string[] Transactions;
        public int Solution;
    }

    private static readonly List<Problem> Problems = new List<Problem>
    {
        new Problem {StartingBalance = 100, Transactions = new[]{"C 1000", "D 500", "D 350"}, Solution = 250},
        new Problem {StartingBalance = 100, Transactions = new[]{"D 50", "D 20", "D 40"}, Solution = -10},
        new Problem {StartingBalance = 53874, Transactions = new[]{"D 1234", "C 987", "D 2345", "C 654", "D 6789", "D 34567"}, Solution = 10580},
    };

    static void Main(string[] args)
    {
        foreach (var problem in Problems)
        {
            Console.WriteLine(problem.StartingBalance);
            var answer = ProcessTransactions(problem.StartingBalance, problem.Transactions);
            Console.WriteLine(answer);
            Console.WriteLine(answer == problem.Solution ? "TRUE" : "FALSE");
            Console.WriteLine();
        }
        Console.WriteLine("Hit any key to exit");
        Console.WriteLine();
        Console.ReadLine();
    }
}
