def fib(n):
    f0, f1 = 1, 1

    if n == 0:
        return 0  # F(0) = 0
    if n == 1 or n == 2:
        return 1  # F(1) = 1, F(2) = 1

    for k in range(n - 1):  # Iterujemy do n-1
        f2 = f0 + f1
        f0 = f1
        f1 = f2

    return f1  # Zwracamy n-ty wyraz


def main():
    n = int(input("Podaj n-ty wyraz ciągu Fibonacciego: "))
    result = fib(n)
    print(f"F({n}) = {result}")


if __name__ == "__main__":
    main()

