pilihan, a, b = 0, 0, 0

def input_nilai():
    a  = float(input("Masukkan nilai pertama: "))
    b  = float(input("Masukkan nilai kedua: "))
    return a, b

while pilihan != 5:
    print("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    try:
        print("Masukkan Pilihan :", end=" ")
        pilihan = int(input())
    except ValueError:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    match pilihan:
        case 1 | 2 | 3:
            a, b = input_nilai()
            if pilihan == 1:
                print(f"Penjumlahan antara {a:.2f} dengan {b:.2f} adalah {(a+b):.2f}\n") 
            elif pilihan == 2:
                print(f"Pengurangan antara {a:.2f} dengan {b:.2f} adalah {(a-b):.2f}\n") 
            else:
                print(f"Perkalian antara {a:.2f} dengan {b:.2f} adalah {(a*b):.2f}\n") 
        case 4:
            a, b = input_nilai()
            while b == 0:
                print("silahkan coba input nilai kedua kembali: ", end=" ")
                b = float(input())
                if b == 0:
                    print(f"Bilangan {a:.2f} tidak bisa dibagi 0")
                else:
                    break
                    continue  
            print(f"Pembagian antara {a:.2f} dengan {b:.2f} adalah {(a/b):.2f}\n")
        case 5:
            print("Terimakasih, telah menggunakan kalkulator RAHMA")
        case _:
            print("Input anda salah, silahkan coba lagi\n")