def bucket_sort(arr):
    num_buckets = 10
    buckets = [[] for _ in range(num_buckets)]
    for num in arr:
        index = min(int(num * num_buckets), num_buckets - 1)  
        buckets[index].append(num)
    for bucket in buckets:
        bucket.sort()
    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(bucket)
    return sorted_arr  
arr = [0.42, 0.32, 0.75, 0.12, 0.89, 0.63, 0.51]
print("Başlangıç dizisi:", arr)
sorted_arr = bucket_sort(arr)
print("Sıralanmış dizi:", sorted_arr)