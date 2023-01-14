import strutils
import sequtils

proc main =
  let N = parseInt(readLine(stdin))

  var A: seq[int] = newSeq[int](N)
  A = stdin.readLine().split(" ").map(parseInt)

  var result: int = 0

  while true:
    for i in 0 ..< N:
      if not A[i] mod 2 == 0:
        echo result
        return 
      A[i] = A[i] div 2
    inc result


  

when isMainModule:
  main()
