weight = int(input("Enter your Weight: "))
height = float(input("Enter your Height (in inches): "))

bmi = (weight / (height ** 2)) * 703

print("Your BMI is {}".format(bmi))

if (bmi <= 18.5):
    print("Underweight")
elif (bmi >= 18.5 and bmi <= 25):
    print("Normal")
elif (bmi >= 25 and bmi <= 30):
    print("Overweight")
else:
    print("Obesity")
