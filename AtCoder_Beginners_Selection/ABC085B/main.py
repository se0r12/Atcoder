def main():
    N: int = int(input()) # N枚の円形の餅
    d_list: set[int] = set()

    for _ in range(0, N):
        d_list.add(int(input())) # [15 12 13]

    # input check
    assert(1 <= N <= 100)
    for i in d_list:
        assert(1 <= i <= 100)

    print(len(d_list))
if __name__ == "__main__":
    main()
