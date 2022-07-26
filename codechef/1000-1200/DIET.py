for _ in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    sum = 0
    
    for i in range(n):
        sum += l[i]
        if sum >= k:
            sum -= k 
            continue
        else:
            print("NO", i+1)
            break
    else:
        print("YES")