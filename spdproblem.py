def sumNumbers(arr, t):
    tlist = []
    sumlist = []
    for i in arr:
        for y in tlist:
            if y == i:
                sumlist.append((i, t - i))
        tlist.append(t - i)
    return sumlist


if __name__ == "__main__":
    numarray = [4, 2, 3, 8, -2, 1, 6, 7, 12]
    t = 10
    print(sumNumbers(numarray, t))
