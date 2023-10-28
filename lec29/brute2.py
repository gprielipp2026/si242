enc = "hema.ca.mdbna"
dec = ""
alpha = "abcdefghijklmnopqrstuvwxyz._,"

# get the key
# last two of dec are "es"
nind = alpha.find('n')
aind = 0
eind = alpha.find('e')
sind = alpha.find('s')
kd1 = 0
kd2 = 0
for k1 in range(len(alpha)):
    for k2 in range(len(alpha)):
        if (nind*k1 + k2) % len(alpha) == eind \
                and (aind*k1 + k2) % len(alpha) == sind:
                    kd1 = k1
                    kd2 = k2

for e in enc:
    i = alpha.find(e)
    dec += alpha[(i*kd1 + kd2) % len(alpha)]

print(dec)
