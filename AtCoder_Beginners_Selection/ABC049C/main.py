
def main():
    S: str = input()
    T: str = ""
    pattern: list[str] = ["dream", "dreamer", "erase", "eraser"]
    # input check
    assert(1 <= len(S) <= pow(10, 5))

    S=S.replace("eraser", "")
    S=S.replace("erase", "")
    S=S.replace("dreamer", "")
    S=S.replace("dream", "")
    if S == "":
        print("YES")
        return
    print("NO")

if __name__ == "__main__":
    main()
