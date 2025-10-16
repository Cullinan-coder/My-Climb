def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left = arr[:mid]
        right = arr[mid:]

        # Böl ve sırala
        merge_sort(left)
        merge_sort(right)

        # Birleştirme işlemi
        i = j = k = 0

        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
            k += 1

        # Kalan elemanları ekle
        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1

# Örnek kullanım
arr = [38, 27, 43, 3, 9, 82, 10]
merge_sort(arr)  # Fonksiyon doğrudan değişiklik yapıyor, bu yüzden çağırdıktan sonra yazdırmalıyız
print("Sıralanmış dizi:", arr)
