import ../../main
discard """
    input: "4\n20 18 2 18"
    output: "18"
"""
proc test01 =
    main.main()

when isMainModule:
    test01()
