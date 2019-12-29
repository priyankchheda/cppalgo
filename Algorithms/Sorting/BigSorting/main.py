def comparator(x, y):
    x_len = len(x)
    y_len = len(y)
    if x_len == y_len:
        return x < y
    return x_len < y_len

def big_sorting(length, array):
    for s in sorted(array, cmp=comparator):
        print(s)

def main():
    n = int(input())
    arr = []
    for _ in range(n):
        arr.append(input())
    big_sorting(n, arr)


if __name__ == "__main__":
    main()
