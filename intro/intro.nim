# 型宣言
var x, y : int
echo x

# 代入
x = 4
echo x

# 定数宣言
# インデントにより，まとめて宣言可能
# コンパイル時に強制的に計算される，再代入はできない
const
    xx = 1
    yy = 2
    zz = yy + 1
echo zz

# let
#1回だけ値の代入が可能
let input = readLine(stdin)
echo input

# if文
echo "Input name"
let name = readLine(stdin)
if name == "":
    echo "None"
elif name == "name":
    echo "Really?"
else:
    echo "Hello, ",name


# while文
echo "Input name"
var name2 = readLine(stdin)
while name2 == "":
    echo "Input name"
    name2 = readLine(stdin)


# for文
echo "let count up to 10"
for i in countup(1,10):
    echo i