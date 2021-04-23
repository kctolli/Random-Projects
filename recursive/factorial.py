def factorial(x): return (1 if x == 1 else (x * factorial(x-1)))

def main():
    num = int(input("Input a value: "))
    print("The factorial of", num, "is", factorial(num))

if __name__ == "__main__":
    # execute only if run as a script
    main()  