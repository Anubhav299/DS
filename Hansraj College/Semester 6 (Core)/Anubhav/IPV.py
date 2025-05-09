def check_bin(x):
    if(int(x)>-1 and int(x)<2):
        return True
    return False


def valid_address(address,option):
    parts = address.split('.')
    if len(parts)!=4:
        return False
    else:
        if(option == 1):
            for item in parts:
                try:
                    if int(item)>255 or int(item)<0:
                        return False
                except:
                    return False
            return True
        else:
            for item in parts:
                try:
                    if int(item,2)>255 or int(item,2)<0:
                        return False
                except:
                    return False
            return True 
   
def convert_to_binary(address):
    parts = address.split('.')
    binary_parts = []
    for item in parts:
        n = int(item)
        # print(n)
        l = n
        s = 0
        while n>0:
            p = n%2
            s = p+s*10
            n = n//2
        print(s)
        bin= str(s)
        binary = '0'*(8-len(bin))+bin
        binary_parts.append(binary)
    return ".".join(binary_parts)


def convert_to_decimal(address):
    parts = address.split('.')
    decimal_parts = []
    for item in parts:
        l = len(item)
        s = 0
        for i in range(0,l):
            p = l-1-i
            s = int(item[i])*(2**p)+s
        decimal_parts.append(str(s))
    return '.'.join(decimal_parts)


def get_class(address):
    first = int(address.split('.')[0])
    if first>=0 and first<=126:
        return "Class A"
    elif first>=128 and first<=191:
        return "Class B"
    elif first>=192 and first<=223:
        return "Class C"
    elif first>=224 and first<= 239:
        return "Class D"
    elif first>= 240 and first <= 255:
        return "Class E"
    else:
        return "Invalid Address"



def main():
    option = int(input("Choose the format of addresss \n1 for decimal and 0 for binary\n"))
    address = input("Enter the IPv4 address ")
    if valid_address(address,option):
        if option == 1:
            print("Valid Decimal representation")
            binary_representation = convert_to_binary(address)
            print("Binary representation:", binary_representation)
        else:
            print("Valid binary representation")
            decimal_representation = convert_to_decimal(address)
            print("Decimal representation:", decimal_representation)
            address = decimal_representation
        Class = get_class(address)
        print("Class: ",Class)
    else:
        print("Invalid Representation")


main()