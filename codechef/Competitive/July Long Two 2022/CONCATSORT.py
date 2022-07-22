# cook your dish here
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))[:n]
    arr2 = sorted(arr)
    arr3 = [arr.index(arr2[0]), 0]
    arr_null = [0]*n
    
    for i in range(2):
        arr3[0] = 0
        
        while arr3[0] < n:
            if not arr_null[arr3[0]] and arr[arr3[0]] == arr2[arr3[1]]:
                arr_null[arr3[0]] = 1 
                arr3[0] += 1 
                arr3[1] += 1 
            else:
                arr3[0] += 1 
    if arr3[0] == arr3[1]:
        print("YES")
    else:
        print("NO")