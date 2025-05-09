
n = int(input("Enter Binary Number: "))
deci = 0
i = 1
while (n!=0):
    rem = n%10
    deci += (rem*i)
    i = i*2
    n = n//10
print("Decimal Value = ", deci)
