def Kaput(fizz, buzz, limit):
  kaput = ""
  i = 1

  while (i <= limit): 
    if(i != 1):
    	kaput += ", "

    if (i % fizz == 0 and i % buzz == 0): 
    	kaput += "FizzBuzz"
    elif (i % fizz == 0): 
    	kaput += "Fizz"
    elif (i % buzz == 0): 
    	kaput += "Buzz"
    else: 
    	kaput += str(i)
    
    i += 1

  return kaput
  
kaput = Kaput(2, 3, 11)
print(kaput)