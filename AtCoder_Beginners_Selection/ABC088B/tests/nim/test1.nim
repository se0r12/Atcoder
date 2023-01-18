import ../../main
discard """
    input: "3\n2 7 4"
    output: "5"
"""
proc test01 =
    main.main()

when isMainModule:
    test01()
