maks, angka = map(int, input().split())
hasil_akhir = 0

for i in range(maks + 1):
    hasil = 0
    for j in range(i, 0, -1):
        hasil += j * angka
        print(f"({j} * {angka})", end=" ")
        if j != 1:
            print("+", end=" ")
        else:
            print(f"= {hasil}")
    hasil_akhir += hasil
print(f"{hasil_akhir}")