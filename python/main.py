from prime_numbers import get_primes_between


def main() -> None:
    try:
        values = input("Enter two natural numbers: ").split()
        if len(values) != 2:
            raise ValueError

        first, second = map(int, values)
        if first < 1 or second < 1:
            raise ValueError
    except ValueError:
        print("Error: enter exactly two natural numbers.")
        return

    for prime in get_primes_between(first, second):
        print(prime)


if __name__ == "__main__":
    main()
