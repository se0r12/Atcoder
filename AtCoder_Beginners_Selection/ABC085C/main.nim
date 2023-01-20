import strutils
import sequtils
import math

proc check*(N: int, Y: int): void =
    for x in 0 .. N:
        for y in 0 .. N:
            let z: int = N - (x + y)
            if z < 0:
                continue
            if (x * 10000) + (y * 5000) + (z * 1000) == Y:
                echo(x, " ", y, " ", z)
                return
    echo(-1," ", -1," ", -1)
proc main =
    var N, Y :int
    (N, Y) = stdin.readLine.split.map(parseInt)

    # input check
    assert(1 <= N and N <= 2000)
    assert(1000 <= Y and Y <= 2 * (10 ^ 7))
    check(N, Y)
when isMainModule:
    main()


