def recur_fibo(n): return (n if n <= 1 else recur_fibo(n-1) + recur_fibo(n-2))

def main():
    nterms = 0
    while nterms <= 0:
        nterms = int(input("Please enter a positive integer: "))
        print("Fibonacci sequence:")
        for i in range(nterms):
            print(recur_fibo(i))

if __name__ == "__main__":
    # execute only if run as a script
    main()  