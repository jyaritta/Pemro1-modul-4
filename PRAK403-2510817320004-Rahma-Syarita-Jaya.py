a, b = map(int, input().split())
a_awal, b_awal = a, b
beda = abs(a - b)

for i in range(beda):
    print(f"{a} {b} -", end=" ")
    if a_awal < b_awal:
        a += 1
        b -= 1
    else:
        a -= 1
        b += 1
print(a, b)