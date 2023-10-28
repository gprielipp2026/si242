enc = "ajbyk.aypkyt.cyaagey"
alpha = "abcdefghijklmnopqrstuvwxyz._,"
dec = ""

ke1 = 19
ke2 = 6

for _ in range(len(enc)):
    for i, c in enumerate(alpha):
        e = alpha[(i * ke1 + ke2) % len(alpha)]
        if e == enc[_]:
            dec += c
            break

print(dec)
