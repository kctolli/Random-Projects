print( 10//4 )

print( 7%(5 // 2) )

print( (3**2)//2 )

print(10 ** 5)

print(5 ** 10)

print(3 * '7')

print("42" + '5')

x = 4
x *= 3
print(x)

spam = "7"
spam = spam + "0"
eggs = int(spam) + 3
print(float(eggs))

x = 5
y = x + 3
y = int(str(y) + "2")
print(y)

x = 3
num = 17
print(num % x)

num = 7
if num > 3:
   print("3")
   if num < 5:
      print("5")
      if num ==7:
         print("7")
         
i = 3
while i>=0:
   print(i)
   i = i - 1
   
i = 0
x = 0
while i < 4:
    x+=i
    i+=1

print(x)


x = [2, 4]
x += [6, 8]
print(x[2]//x[0])


nums = [10, 9, 8, 7, 6, 5]
nums[0] = nums[1] - 5
if 4 in nums:
  print(nums[3])
else:
  print(nums[4])
  
list = [2, 3, 4, 5, 6, 7]

for x in list:
    if(x%2==1 and x>4):
        print(x)
        break

def print_nums(x):
  for i in range(x):
    print(i)
    return
print_nums(10)

def func(x):
  res = 0
  for i in range(x):
     res += i
  return res

print(func(4))

fib = {1: 1, 2: 1, 3: 2, 4: 3}
print(fib.get(4, 0) + fib.get(7, 5))

nums = (55, 44, 33, 22)
print(max(min(nums[:2]), abs(-42)))