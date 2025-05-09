# function to generate hamming code
def generate_hamming_code(data):
    m = len(data)
    # determine number of parity bits
    r = 0
    while 2**r < m + r + 1:
        r += 1
    # determine positions of parity bits
    positions = []
    for i in range(r):
        positions.append(2**i - 1)
    # initialize hamming code with 0s
    hamming_code = [0] * (m + r)
    # insert data bits into hamming code
    j = 0
    for i in range(m + r):
        if i in positions:
            continue
        hamming_code[i] = int(data[j])
        j += 1
    # calculate parity bits
    for i in positions:
        ones = 0
        for j in range(i, m + r, i+1):
            ones += sum(hamming_code[j:j+i+1]) % 2
        hamming_code[i] = ones % 2
    return hamming_code

# example usage
data = "11111111"
hamming_code = generate_hamming_code(data)
print("Data:", data)
print("Hamming Code:", hamming_code)
