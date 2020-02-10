def chop(value, sorted_list):
    low = 0
    high = len(sorted_list)-1
    mid = int((low+high)/2)
    while low <= high:
        if value == sorted_list[mid]:
            return mid
        elif value < sorted_list[mid]:
            high = mid -1
        else:
            low = mid +1

        mid = int((low + high) / 2 )
    return -1

