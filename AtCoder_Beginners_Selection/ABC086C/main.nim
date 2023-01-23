import strutils, sequtils
type
    Position = object
        x: int
        y: int
        t: int

proc main: bool =
    let N: int = stdin.readLine().parseInt()
    var position: Position = Position(x: 0, y: 0, t: 0)
    var flag: bool = true
    for _ in 0 ..< N:
        var x, y, t: int
        (t, x, y) = stdin.readLine().split().map(parseInt)
        let displacement: Position = Position(x: abs(position.x - x), y: abs(position.y - y), t: abs(position.t - t))
        if displacement.x + displacement.y == displacement.t or (displacement.x + displacement.y < displacement.t and (displacement.t - displacement.x + displacement.y) mod 2 == 0):
            position.x = x
            position.y = y
            position.t = t
        else:
            flag = false
    return flag
when isMainModule:
    if main():
        echo "Yes"
    else:
        echo "No"
