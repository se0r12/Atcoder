# A以上B以下かどうかをチェックする
def check(A: int, B: int, n_list: list[int]) -> bool:
    tmp = 0
    for n_int in n_list:
        tmp += n_int
    if A <= tmp <= B:
        return True
    return False


def main():
    (N, A, B) = [int(input_value) for input_value in input().split(" ")]
    result = 0
    # input value check
    assert(1 <= N <= pow(10, 4))
    assert(1 <= A <= B <= 36)

    for n in range(1, N+1): # 1以上N以下の整数
        n_list: list[int] = [] # 20 -> [2, 0]とするためのもの
        for n_str in str(n): # stringにする 20: int => 20: str
            n_list.append(int(n_str)) # 20 -> 2, 0
        if check(A, B, n_list):
            result += n
    print(result)

if __name__ == "__main__":
    main()
