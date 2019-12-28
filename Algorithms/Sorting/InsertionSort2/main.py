def insertion_sort_2(length, array):
    for i in range(1, length):
        index = i
        value = array[i]

        while index > 0 and array[index-1] > value:
            array[index] = array[index-1]
            index -= 1

        array[index] = value
        print(' '.join([str(i) for i in array]))


def main():
    n = int(input())
    arr = list(map(int, input().strip().split()))
    insertion_sort_2(n, arr)


if __name__ == "__main__":
    main()
