import strutils
proc main =
  let inputValue: string = stdin.readLine()
  let str: string = inputValue[0 ..< 3]
  echo count(str, '1')

when isMainModule:
  main()
