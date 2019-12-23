import random
row = '+---+---+---+' #매번 줄을 또 쓰기 귀찮아서 만듦

def func3x3(): #게임판출력하는 함수
	print(row)
	print("+{:^3s}+{:^3s}+{:^3s}+".format(xy[0][0],xy[0][1],xy[0][2]))
	print(row)
	print("+{:^3s}+{:^3s}+{:^3s}+".format(xy[1][0],xy[1][1],xy[1][2]))
	print(row)
	print("+{:^3s}+{:^3s}+{:^3s}+".format(xy[2][0],xy[2][1],xy[2][2]))
	print(row)
	print("\n")

def human_turn(): #사람의 차례 잘못된 명령은 다시 입력받도록 함
	while 1:
		command = input("Enter a board position (row#:0..2, col#:0..2): ")
		if command.count(' ') != 1:
			print("You entered a wrong position. Try again!")
			continue
		elif command.split(' ')[1]=='':
			print("You entered a wrong position. Try again!")
			continue
		elif not(command.split(' ')[0] in command_list):
			print("You entered a wrong position. Try again!")
			continue
		elif not(command.split(' ')[1] in command_list):
			print("You entered a wrong position. Try again!")
			continue
		x = int(command.split(" ")[0])
		y =	int(command.split(" ")[1])
		if xy[x][y] != ' ':
			print("You entered a wrong position. Try again!")
			continue
		xy[x][y] = 'X'
		func3x3()
		break

def computer_turn(): #원래는 난이도 선택이 있었기 때문에 이 함수가 필요했으나 과제 제출 당시 난이도 선택을 없애서 더이상 필요 없지만 없애기 애매해서 냅둔 함수
	hardcomputer()
	func3x3()
	
def easycomputer(): #난이도 선택 가능할 시 있었떤 쉬움모드 컴퓨터 무조건 랜덤으로 고른다.
	while 1:
		x1 = random.randrange(0,3)
		y1 = random.randrange(0,3)
		if xy[x1][y1] != ' ':
			continue
		else:
			xy[x1][y1] = 'O'
			break

def hardcomputer(): #컴퓨터를 절대 안지게 만들기 위해 컴퓨터가 우선으로 두어야 할 칸들을 지정함
	if xy[1][1] == ' ':
		xy[1][1] = 'O'
	elif xy[0][0] == 'O' and xy[0][1] == 'O' and xy[0][2] == ' ':
		xy[0][2] = 'O'
	elif xy[0][0] == 'O' and xy[0][1] == ' ' and xy[0][2] == 'O':
		xy[0][1] = 'O'
	elif xy[0][0] == ' ' and xy[0][1] == 'O' and xy[0][2] == 'O': # 1
		xy[0][0] = 'O'
	elif  xy[1][0] == 'O' and xy[1][1] == 'O' and xy[1][2] == ' ':
		xy[1][2] == 'O'
	elif  xy[1][0] == ' ' and xy[1][1] == 'O' and xy[1][2] == 'O':
		xy[1][0] = 'O'
	elif xy[1][0] == 'O' and xy[1][1] == ' ' and xy[1][2] == 'O': #2
		xy[1][1] = 'O'
	elif xy[2][0] == ' ' and xy[2][1] == 'O' and xy[2][2] == 'O':
		xy[2][0] = 'O'
	elif xy[2][0] == 'O' and xy[2][1] == ' ' and xy[2][2] == 'O':
		xy[2][1] = 'O'
	elif xy[2][0] == 'O' and xy[2][1] == 'O' and xy[2][2] == ' ': # 3
		xy[2][2] = 'O'
	elif xy[0][0] == ' ' and xy[1][0] == 'O' and xy[2][0] == 'O':
		xy[0][0] = 'O'
	elif xy[0][0] == 'O' and xy[1][0] == ' ' and xy[2][0] == 'O':
		xy[1][0] = 'O'
	elif xy[0][0] == 'O' and xy[1][0] == 'O' and xy[2][0] == ' ': # 4
		xy[2][0] = 'O'
	elif xy[0][1] == ' ' and xy[1][1] == 'O' and xy[2][1] == 'O':
		xy[0][1] = 'O'
	elif xy[0][1] == 'O' and xy[1][1] == ' ' and xy[2][1] == 'O':
		xy[1][1] = 'O'
	elif xy[0][1] == 'O' and xy[1][1] == 'O' and xy[2][1] == ' ': # 5
		xy[2][1] = 'O'
	elif xy[0][2] == ' ' and xy[1][2] == 'O' and xy[2][2] == 'O':
		xy[0][2] = 'O'
	elif xy[0][2] == 'O' and xy[1][2] == ' ' and xy[2][2] == 'O':
		xy[1][2] = 'O'
	elif xy[0][2] == 'O' and xy[1][2] == 'O' and xy[2][2] == ' ': # 6
		xy[2][2] = 'O'
	elif  xy[0][0] == ' ' and xy[1][1] == 'O' and xy[2][2] == 'O':
		xy[0][0] = 'O'
	elif xy[0][0] == 'O' and xy[1][1] == ' ' and xy[2][2] == 'O':
		xy[1][1] = 'O'
	elif xy[0][0] == 'O' and xy[1][1] == 'O' and xy[2][2] == ' ': # 7
		xy[2][2] = 'O'
	elif 	xy[2][0] == ' ' and xy[1][1] == 'O' and xy[0][2] == 'O':
		xy[2][0] = 'O'
	elif xy[2][0] == 'O' and xy[1][1] == ' ' and xy[0][2] == 'O':
		xy[1][1] = 'O'
	elif xy[2][0] == 'O' and xy[1][1] == 'O' and xy[0][2] == ' ': #8
		xy[0][2] = 'O'
	elif xy[0][0] == 'X' and xy[0][1] == 'X' and xy[0][2] == ' ': #방1
		xy[0][2] = 'O'
	elif xy[0][0] == 'X' and xy[0][1] == ' ' and xy[0][2] == 'X':
		xy[0][1] = 'O'
	elif xy[0][0] == ' ' and xy[0][1] == 'X' and xy[0][2] == 'X':
		xy[0][0] = 'O'
	elif xy[1][0] == ' ' and xy[1][1] == 'X' and xy[1][2] == 'X': #방2
		xy[1][0] = 'O'
	elif xy[1][0] == 'X' and xy[1][1] == ' ' and xy[1][2] == 'X':
		xy[1][1] = 'O'
	elif xy[1][0] == 'X' and xy[1][1] == 'X' and xy[1][2] == ' ':
		xy[1][2] = 'O'
	elif xy[2][0] == ' ' and xy[2][1] == 'X' and xy[2][2] == 'X': #방3
		xy[2][0] = 'O'
	elif xy[2][0] == 'X' and xy[2][1] == ' ' and xy[2][2] == 'X':
		xy[2][1] = 'O'
	elif xy[2][0] == 'X' and xy[2][1] == 'X' and xy[2][2] == ' ':
		xy[2][2] = 'O'
	elif xy[0][0] == ' ' and xy[1][0] == 'X' and xy[2][0] == 'X': #qkd 4
		xy[0][0] = 'O'
	elif xy[0][0] == 'X' and xy[1][0] == ' ' and xy[2][0] == 'X':
		xy[1][0] = 'O'
	elif xy[0][0] == 'X' and xy[1][0] == 'X' and xy[2][0] == ' ':
		xy[2][0] = 'O'
	elif xy[0][1] == ' ' and xy[1][1] == 'X' and xy[2][1] == 'X': # qkd 5
		xy[0][1] = 'O'
	elif xy[0][1] == 'X' and xy[1][1] == ' ' and xy[2][1] == 'X':
		xy[1][1] = 'O'
	elif xy[0][1] == 'X' and xy[1][1] == 'X' and xy[2][1] == ' ':
		xy[2][1] = 'O'
	elif xy[0][2] == ' ' and xy[1][2] == 'X' and xy[2][2] == 'X': #qkd 6
		xy[0][2] = 'O'
	elif xy[0][2] == 'X' and xy[1][2] == ' ' and xy[2][2] == 'X':
		xy[1][2] = 'O'
	elif xy[0][2] == 'X' and xy[1][2] == 'X' and xy[2][2] == ' ':
		xy[2][2] = 'O'
	elif xy[0][0] == ' ' and xy[1][1] == 'X' and xy[2][2] == 'X':#qkd 7
		xy[0][0] = 'O'
	elif xy[0][0] == 'X' and xy[1][1] == ' ' and xy[2][2] == 'X':
		xy[1][1] = 'O'
	elif xy[0][0] == 'X' and xy[1][1] == 'X' and xy[2][2] == ' ':
		xy[2][2] = 'O'
	elif xy[2][0] == ' ' and xy[1][1] == 'X' and xy[0][2] == 'X': #qkd8
		xy[2][0] = 'O'
	elif xy[2][0] == 'X' and xy[1][1] == ' ' and xy[0][2] == 'X':
		xy[1][1] = 'O'
	elif xy[2][0] == 'X' and xy[1][1] == 'X' and xy[0][2] == ' ':
		xy[0][2] = 'O'
	elif xy[0][0] == ' ': #1
		xy[0][0] = 'O'
	elif xy[2][2] == ' ': #2
		xy[2][2] = 'O'
	elif xy[0][2] == ' ': #3
		xy[0][2] = 'O'
	elif xy[2][0] == ' ': #4
		xy[2][0] = 'O'
	else:
		easycomputer()
	
def check(): #승리 판별 함수
	if full() == 1:
		if xy[0][0] == 'X' and xy[0][1] == 'X' and xy[0][2] == 'X' or xy[1][0] == 'X' and xy[1][1] == 'X' and xy[1][2] == 'X' or xy[2][0] == 'X' and xy[2][1] == 'X' and xy[2][2] == 'X' or xy[0][0] == 'X' and xy[1][0] == 'X' and xy[2][0] == 'X' or xy[0][1] == 'X' and xy[1][1] == 'X' and xy[2][1] == 'X' or xy[0][2] == 'X' and xy[1][2] == 'X' and xy[2][2] == 'X' or xy[0][0] == 'X' and xy[1][1] == 'X' and xy[2][2] == 'X' or xy[2][0] == 'X' and xy[1][1] == 'X' and xy[0][2] == 'X':
			game_result = 1
		elif xy[0][0] == 'O' and xy[0][1] == 'O' and xy[0][2] == 'O' or xy[1][0] == 'O' and xy[1][1] == 'O' and xy[1][2] == 'O' or xy[2][0] == 'O' and xy[2][1] == 'O' and xy[2][2] == 'O' or xy[0][0] == 'O' and xy[1][0] == 'O' and xy[2][0] == 'O' or xy[0][1] == 'O' and xy[1][1] == 'O' and xy[2][1] == 'O' or xy[0][2] == 'O' and xy[1][2] == 'O' and xy[2][2] == 'O' or xy[0][0] == 'O' and xy[1][1] == 'O' and xy[2][2] == 'O' or xy[2][0] == 'O' and xy[1][1] == 'O' and xy[0][2] == 'O':
			game_result = 0
		else:
			game_result = -1
	elif xy[0][0] == 'X' and xy[0][1] == 'X' and xy[0][2] == 'X' or xy[1][0] == 'X' and xy[1][1] == 'X' and xy[1][2] == 'X' or xy[2][0] == 'X' and xy[2][1] == 'X' and xy[2][2] == 'X' or xy[0][0] == 'X' and xy[1][0] == 'X' and xy[2][0] == 'X' or xy[0][1] == 'X' and xy[1][1] == 'X' and xy[2][1] == 'X' or xy[0][2] == 'X' and xy[1][2] == 'X' and xy[2][2] == 'X' or xy[0][0] == 'X' and xy[1][1] == 'X' and xy[2][2] == 'X' or xy[2][0] == 'X' and xy[1][1] == 'X' and xy[0][2] == 'X':
		game_result = 1
	elif  xy[0][0] == 'O' and xy[0][1] == 'O' and xy[0][2] == 'O' or xy[1][0] == 'O' and xy[1][1] == 'O' and xy[1][2] == 'O' or xy[2][0] == 'O' and xy[2][1] == 'O' and xy[2][2] == 'O' or xy[0][0] == 'O' and xy[1][0] == 'O' and xy[2][0] == 'O' or xy[0][1] == 'O' and xy[1][1] == 'O' and xy[2][1] == 'O' or xy[0][2] == 'O' and xy[1][2] == 'O' and xy[2][2] == 'O' or xy[0][0] == 'O' and xy[1][1] == 'O' and xy[2][2] == 'O' or xy[2][0] == 'O' and xy[1][1] == 'O' and xy[0][2] == 'O':
		game_result = 0
	else:
		game_result = 2
	return game_result
	
def full(): #게임이 더이상 진행이 불가능한 상황 (승리자는 없으나 칸이 꽉참)을 확인하는 함수
	for i in range(3):
		for j in range(3):
			if xy[i][j] == ' ':
				return 0
			elif i==2 and j ==2:
				return 1

xy = [[' ',' ',' '],[' ', ' ', ' '],[' ', ' ', ' ']]

command_list= ['0', '1', '2'] #명령으로 입력받을 수 있는 숫자
print("O for computer, X for you.")
func3x3()

turn = random.randrange(0,2)
turn = 1
if turn == 1:
	print("You will play first.")
	
while 1:
	if turn:
		human_turn()
		turn = 0
	else:
		computer_turn()
		turn = 1
	if check() == -1:
		print("Draw. Try again.")
		xy = [[' ',' ',' '],[' ', ' ', ' '],[' ', ' ', ' ']]
		func3x3()
		continue
	elif check() == 1:
		print("Congratulation. You win.")
		break
	elif check() == 0:
		print("I win. Try again.")
		break