def insertion_sort_1(n, arr):
    value = arr[-1]
    i = n-1
    while i > 0 and arr[i-1] > value:
        arr[i] = arr[i-1]
        print(' '.join([str(i) for i in arr]))
        i = i - 1
    arr[i] = value
    print(' '.join([str(i) for i in arr]))
        

def main():
    n = int(input())
    arr = list(map(int, input().strip().split()))
    insertion_sort_1(n, arr)


if __name__ == "__main__":
    main()
