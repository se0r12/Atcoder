import strutils
import sets
proc main =
    let N: int = parseInt(stdin.readLine())
    var d_list: seq[int]
    for _ in 0 ..< N:
        d_list.add(parseInt(stdin.readLine()))

    # input check
    assert(1 <= N and N <= 100)
    for i in d_list:
        assert(1 <= i and i <= 100)

    let result = toHashSet(d_list)
    echo(len(result))

when isMainModule:
    main()
