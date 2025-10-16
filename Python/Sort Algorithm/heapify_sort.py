def heapify(arr, n, i):
    largest = i  # Kökü en büyük olarak varsay
    left = 2 * i + 1  # Sol çocuk
    right = 2 * i + 2  # Sağ çocuk

    # Sol çocuk kökten büyükse güncelle
    if left < n and arr[left] > arr[largest]:
        largest = left

    # Sağ çocuk en büyükse güncelle
    if right < n and arr[right] > arr[largest]:
        largest = right

    # Eğer en büyük değer değiştiyse, swap yap ve devam et
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)

def heap_sort(arr):
    n = len(arr)

    # Maksimum yığın oluştur (Heapify işlemi)
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    # Elemanları tek tek yığından çıkar ve sıralı hale getir
    for i in range(n - 1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]  # En büyük elemanı sona al
        heapify(arr, i, 0)  # Geri kalan elemanları tekrar heapify et

    return arr  # Sıralanmış diziyi döndür

# Örnek kullanım
arr = [12, 11, 13, 5, 6, 7]
print("Sıralanmış dizi:", heap_sort(arr))
