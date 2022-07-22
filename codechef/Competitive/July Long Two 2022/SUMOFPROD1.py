# cook your dish here
for _ in range(int(input())):
    n = int(input())
    array = list(map(int, input().split()))[:n]
    r, c  = 0, 0
    for i in range(n):
        if array[i] == 1:
            c += 1 
        else:
            r += c * (c+1) // 2
            c = 0
    r += c * (c+1) // 2
    print(r)