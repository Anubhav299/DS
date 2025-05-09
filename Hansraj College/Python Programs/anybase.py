print("*"*40)
base1=int(input("Enter the input base: "))
base2=int(input("Enter the output base: "))
print("*"*40)
x=input("Enter the input number: ")

def val(num):
    if (num>='0' and num<='9'):
        return ord(num)-48
    else:
        return ord(num)-65 +10
        
def re(num):
    if (num>=0 and num<=9):
        return chr(num+48)
    else:
        return chr(num-10+65)
#Checking Part
power=1
final1=0
for i in range(len(x)-1, -1, -1):
    if (val(x[i])>= base1):
        print("Invalid Number")
        exit()
    final1 += val(x[i])*power
    power = power*base1
res=""
while (final1):
    res = re(final1%base2) + res
    final1= final1//base2

print("Output number is: ", res)
