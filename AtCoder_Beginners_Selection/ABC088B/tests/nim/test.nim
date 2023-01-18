import ../../main
discard """
    input: "2\n3 1"
    output: "2"
"""
proc test01 =
    main.main()

when isMainModule:
    test01()
