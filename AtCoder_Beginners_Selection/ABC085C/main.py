def check(N: int, Y: int):
    # データ数Nの総当たりをとる。
    # O(n^3) nは最大2000なので、2000 * 2000 * 2000 = 8000000000となる。
    # これは莫大すぎるので、10000, 5000の4000000を確認する

    for x in range(0, N+1): # 10000円
        for y in range(0, N+1): # 5000円
            z = N - (x + y)
            if z < 0:
                continue
            if x * 10000 + y * 5000 + z * 1000 == Y:
                print(x, y, z)
                return
    print(-1, -1, -1)

def main():
    N, Y = map(int, input().split())

    # input check
    assert(1 <= N <= 2000)
    assert(1000 <= Y <= 2 * pow(10, 7))

    check(N, Y)
if __name__ == "__main__":
    main()
