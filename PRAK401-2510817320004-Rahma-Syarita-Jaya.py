angka, huruf = input().split()
angka_int = int(angka)

for a in range(1, 51):
    if a % angka_int == 0:
        print(huruf, end=" ")
    else:
        print(a, end=" ")