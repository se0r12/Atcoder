def main():
    N: int = int(input()) # N枚のカード
    input_list: list[int] = [int(i) for i in input().split(" ")] #
    Alice_score: int = 0
    Bob_score: int = 0

    # input_check
    assert(1 <= N <= 100) # Nの制約チェック
    assert(1 <= len(input_list) <= N) # iの制約チェック
    for i in input_list: # aの制約チェック O(100)
        assert( 1 <= i <= 100)

    # Aliceが一番大きい数字をとるため降順ソート
    input_list.sort(reverse=True)

    if len(input_list) % 2 == 0: # 配列が偶数個なら互いにとっていける
        for i in range(0, len(input_list)):
            if i == 0 or i % 2 == 0: # Aliceがとるのは偶数の値
                Alice_score += input_list[i]
                continue
            Bob_score += input_list[i]
    else:
        for i in range(0, len(input_list)):
            if i == 0 or i % 2 == 0 or i == len(input_list) - 1: # Aliceがとるのは、0, 要素が偶数の値、最後の値
                Alice_score += input_list[i]
                continue
            Bob_score += input_list[i]
    print(Alice_score - Bob_score)


if __name__ == "__main__":
    main()
