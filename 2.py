# Selection Sort 
def selection_sort(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr

arr = [1, 4, 3, 2, 5, 7]
print(selection_sort(arr))  

# for i in range(6):
#     print(arr[i], end=" ")