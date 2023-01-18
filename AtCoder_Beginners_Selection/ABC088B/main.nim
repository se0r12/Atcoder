import strutils, sequtils, algorithm
proc main* =
    let N: int = parseInt(readLine(stdin))
    var input_list: seq[int] = stdin.readLine.split.map(parseInt)

    var Alice_score: int
    var Bob_score: int

    # input check
    assert(1 <= N and N <= 100)
    assert(1 <= len(input_list) and len(input_list) <= N)
    for i in input_list:
        assert(1 <= i and i <= 100)


    # Aliceが一番大きい値をとるために降順ソート
    let sorted_list = sorted(input_list, SortOrder.Descending)

    if len(sorted_list) mod 2 == 0:
        for i in 0 ..< len(sorted_list):
            if i == 0 or i mod 2 == 0:
                Alice_score += sorted_list[i]
                continue
            Bob_score += sorted_list[i]
    else:
        for i in 0 ..< len(sorted_list):
            if i == 0 or i mod 2 == 0 or i == len(sorted_list):
                Alice_score += sorted_list[i]
                continue
            Bob_score += sorted_list[i]
    echo(Alice_score - Bob_score)
when isMainModule:
    main()
