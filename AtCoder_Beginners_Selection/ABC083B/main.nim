import strutils
import sequtils
import math
proc main =
    var N, A, B: int
    (N, A, B) = stdin.readLine.split.map(parseInt)
    var result: int = 0

    # input value check
    assert(1 <= N and N <= 10 ^ 4)
    assert(1 <= A and A <= 36)
    assert(1 <= B and B <= 36)

    for n in 1 .. N: # 1以上N以下の整数
        var splist: seq[int] # 20 => [2, 0]のように格納するため
        for n_char in $n: # 20: loop: 1 -> 2, loop: 2 -> 0
            # n_charを、整数にしてsplistに格納
            splist.add(parseInt($n_char))

        var tmp: int = sum(splist)
        if A <= tmp and tmp <= B:
            result += n
    echo result

when isMainModule:
    main()
