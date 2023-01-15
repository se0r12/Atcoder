import strutils

proc main =
    let A: int = parseInt(readLine(stdin)) # 500円の個数
    let B: int = parseInt(readLine(stdin)) # 100円の個数
    let C: int = parseInt(readLine(stdin)) # 50円の個数
    let X: int = parseInt(readLine(stdin)) # 合計金額

    var result: int = 0

    # input value check
    assert(0 <= A and A <= 50)
    assert(0 <= B and B <= 50)
    assert(0 <= C and C <= 50)
    assert((A+B+C) >= 1)
    assert(50 <= X and X <= 20000)
    assert(X mod 50 == 0)

    # 総当たりで確認
    for quantity_A in 0 .. A:
        for quantity_B in 0 .. B:
            for quantity_C in 0 .. C:
                if X == (500 * quantity_A + 100 * quantity_B + 50 * quantity_C):
                    inc(result)
    echo result

when isMainModule:
    main()
