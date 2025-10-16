import random
import time

# 10.000 elemanlı rastgele liste oluştur
N = 10000
original_array = [random.randint(1, 100000) for _ in range(N)]

# Bubble Sort algoritması
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break

# Selection Sort algoritması
def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

# Dizinin kopyalarını oluştur
bubble_array = original_array.copy()
selection_array = original_array.copy()

# Bubble Sort zamanı
start_bubble = time.time()
bubble_sort(bubble_array)
end_bubble = time.time()
bubble_time = end_bubble - start_bubble

# Selection Sort zamanı
start_selection = time.time()
selection_sort(selection_array)
end_selection = time.time()
selection_time = end_selection - start_selection

# Sonuçları yazdır
print(f"Bubble Sort süresi: {bubble_time:.4f} saniye")
print(f"Selection Sort süresi: {selection_time:.4f} saniye")
