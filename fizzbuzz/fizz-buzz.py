### Fizz Buzz 

# Write a program that prints the numbers from 1 to 100.
# But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
# For numbers which are multiples of both three and five print “FizzBuzz”

# Function for fizz_buzz takes 3 int as parameters
def fizz_buzz(fizz, buzz, limit):   
    for i in range(1, (limit + 1)):
        fizz_bool = return_bool(i, fizz)
        buzz_bool = return_bool(i, buzz)
        if fizz_bool and buzz_bool:
            print("FizzBuzz")
        elif fizz_bool:
            print("Fizz")
        elif buzz_bool:
            print("Buzz")
        else:
            print(i)

def return_bool(x,y):
    return x % y == 0

def main():
    fizz_buzz(3, 5, 100)
    
if __name__ == "__main__":
    main()