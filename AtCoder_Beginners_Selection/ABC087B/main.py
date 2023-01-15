import operator

def main():
    A: int = int(input()) # 500円の個数
    B: int = int(input()) # 100円の個数
    C: int = int(input()) # 50円の個数
    X: int = int(input()) # 合計金額
    result: int = 0

    # input value check
    assert(0 <= A <= 50)
    assert(0 <= B <= 50)
    assert(0 <= C <= 50)
    assert((A + B + C) >= 1)
    assert(50 <= X <= 20000)
    assert(operator.mod(X, 50) == 0)

    for coin_A in range(0, A+1):
        for coin_B in range(0, B+1):
            for coin_C in range(0, C+1):
                if X == 500 * coin_A + 100 * coin_B + 50 * coin_C:
                    result += 1
    print(result)

if __name__ == "__main__":
    main()
