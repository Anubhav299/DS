import random
def check_bin(x):
    if(int(x)>-1 and int(x)<2):
        return True
    return False


def check_parity(x):
    # check parity return is 1 which means odd number of 1s and if 0 then even number of 1s
    res = int(x[0])
    for i in range(len(x)-1):
        if check_bin(x[i]):
            res = res^int(x[i+1])
        else:
            print("Not binary !")
            exit()
    return res


# this function will convert the given message in even or odd parity according to chosen option
def transmission(x,option):
    if option==1:
        if check_parity(x):
            x=x+"1"
            return x
        else:
            return x+"0"
    else:
        if not(check_parity(x)):
            x=x+"1"
            return x
        else:
            return x+"0"
    
    
def generate_error(x):
    patch=""
    e=random.randint(0,len(x)-1)
    error=int(x[e])^1
    f=random.randint(0,len(x)-1)
    f_error=int(x[f])^1
    for j in range(len(x)):
        if j==e:
            patch=patch+str(error)
        elif j==f:
            patch=patch+str(f_error)
        else:
            patch=patch+str(x[j])
    return patch



def final_check(num,option):
    if option==1:
        if check_parity(num):
            return True
        return False
    else:
        if check_parity(num):
            return False
        return True


def main():
    num = input("Enter the message - ")
    option = int(input("Enter 0 for odd parity and 1 for even parity.\n"))
    msg = transmission(num,option)
    print("Transmission message: ",msg)
    error = generate_error(msg)
    print("Message after effect: ",error)
    if(final_check(error,option)):
        print("Message corrupted")
    else:
        print("Message is Correct")


main()
