def intro_tutorial(arr, value):
    for i, item in enumerate(arr):
        if value == item:
            return i


def main():
    value = int(input())
    n = int(input())
    arr = list(map(int, input().strip().split()))
    result = intro_tutorial(arr, value)
    print(result)


if __name__ == "__main__":
    main()
