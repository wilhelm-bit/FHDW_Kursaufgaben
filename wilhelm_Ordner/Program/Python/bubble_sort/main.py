


def sorting(arr):
    for i in range (len(arr)):
        for j in range(len(arr)-1):
            
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp









numbers = [1,2,444,5,2,6,9,7,1,222]


sorting(numbers)
print(numbers)



