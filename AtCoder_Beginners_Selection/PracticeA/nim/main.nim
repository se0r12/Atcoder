import sequtils, strutils

proc main =
  let a: uint =  parseUInt(readLine(stdin))
  let inpVal: seq[uint] = readLine(stdin).splitWhitespace.map(parseUInt) # inpVal[b, c]
  let s: string = readLine(stdin)
  
  write(stdout, $(a+inpVal[0]+inpVal[1]) & " " & s)

  



when isMainModule:
  main()
