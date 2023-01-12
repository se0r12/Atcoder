import sequtils, strutils
proc main =
  var a, b: int
  (a, b) = readLine(stdin).split(" ").map(parseInt)
  let result = a * b

  if `mod`(result, 2) == 0:
    echo "Even"
  else:
    echo "Odd"

when isMainModule:
  main()

