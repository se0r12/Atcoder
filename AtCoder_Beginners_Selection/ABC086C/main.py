def main():
    position ={"x": 0, "y": 0, "t": 0}
    N = int(input())
    flag = True
    for _ in range(0, N):
        (t, x, y) = map(int, input().split())
        displacement = {"x": abs(position["x"] - x), "y": abs(position["y"] - y), "t": abs(position["t"] - t)}
        # print(f"displacement: {displacement}")

        if displacement["x"] + displacement["y"] == displacement["t"] or\
            (displacement["x"] + displacement["y"] < displacement["t"] and (displacement["t"] - (displacement["x"] + displacement["y"])) % 2 == 0):
            position["x"] = x
            position["y"] = y
            position["t"] = t
        else:
            flag = False
        # print(f"position: {position}")
    return flag
if __name__ == "__main__":
    if main():
        print("Yes")
    else:
        print("No")
