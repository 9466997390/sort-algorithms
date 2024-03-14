# Bubble sort

def bubble_sort(array):
    for i in range(len(array) - 1):
        check = False
        for j in range(len(array) - i - 1):
            if array[j] > array[j+1]:
            #swap
               array[j+1], array[j] = array[j], array[j+1]
               check = True
        if not check:
            return array     
    return array

array = [6, 3, 2, 3, 7, 9, 10]
print(bubble_sort(array))