def Binary_search(arr,low,high,x):
    while  low<=high :
        mid = low + (high - low) // 2
        if arr[mid] == x :
            return x
        elif arr[mid] < x :
            low = mid + 1
        else:
            high = mid - 1
    return -1

arr = [1,2,3,4,5]
Z = Binary_search(arr , 0 , len(arr)-1 , 69)

if Z == -1 :
    print("item not font :(")
else:
    Z = str(Z)
    print("item found on index " + Z)