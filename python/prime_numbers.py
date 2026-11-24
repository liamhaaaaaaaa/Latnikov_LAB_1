def is_prime(number: int) -> bool:
    if number < 2:
        return False

    if number == 2:
        return True

    if number % 2 == 0:
        return False

    divisor = 3
    while divisor <= number // divisor:
        if number % divisor == 0:
            return False
        divisor += 2

    return True


def get_primes_between(first: int, second: int) -> list[int]:
    left, right = sorted((first, second))
    return [
        number
        for number in range(left + 1, right)
        if is_prime(number)
    ]
