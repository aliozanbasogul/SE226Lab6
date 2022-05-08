# TASK 1

def lambda_function(n):
    func = lambda a: (a - 3) / (a * a)
    my_list = []
    for i in range(1, n + 1):
        my_list.append(func(i))
    print(sum(my_list))


inp = int(input("Please enter a number: "))

lambda_function(inp)


# TASK 2

def func(n):
    if n == 0:
        return 1
    else:
        return ((n / (n + 2)) - 10) * func(n - 1)


k = int(input("Please enter a number: "))
print(func(k))
print(func.__doc__)
