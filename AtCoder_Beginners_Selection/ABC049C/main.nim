import math
import strutils
proc main =
    var S: string = stdin.readLine()

    # input check
    assert(1 <= len(S) and len(S) <= 10^5)

    if S.replace("eraser").replace("erase").replace("dreamer").replace("dream") == "":
        echo "YES"
        return
    echo "NO"

when isMainModule:
    main()
